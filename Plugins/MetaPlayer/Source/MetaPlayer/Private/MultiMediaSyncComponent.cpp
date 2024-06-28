

#include "MultiMediaSyncComponent.h"

#include "MediaPlayer.h"
#include "MediaTexture.h"
#include "FileMediaSource.h"

UMultiMediaSyncComponent::UMultiMediaSyncComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMultiMediaSyncComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// 미디어 플레이어 세팅
	for (const auto MediaPlayerStruct : MediaPlayerStructs)
	{
		MediaPlayerStruct.MediaTexture->SetMediaPlayer(MediaPlayerStruct.MediaPlayer);
		
		MediaPlayerStruct.MediaPlayer->PlayOnOpen = true;
		MediaPlayerStruct.MediaPlayer->OnPlaybackResumed.AddDynamic(this, &UMultiMediaSyncComponent::MediaPlayed);
		
		MediaPlayerStruct.MediaPlayer->SetLooping(false);
		MediaPlayerStruct.MediaPlayer->OpenSource(MediaPlayerStruct.FileMediaSource);
	}

	// 미디어 플레이어 싱크 준비
	bIsPreparing = true;
	ChangeMultiMediaState(Opening);
}

void UMultiMediaSyncComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// 액터가 사라질 때, 미디터 텍스처를 지우기 위함.
	for (const auto MediaPlayerStruct : MediaPlayerStructs)
	{
		MediaPlayerStruct.MediaTexture->SetMediaPlayer(nullptr);
	}
}

void UMultiMediaSyncComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 미디어플레이어 재생 상황에 맞는 스테이트 관리.
	switch (State)
	{
		case Preparing:
		{
			// 미디어 소스가 열리고 자동으로 영상이 실행되며
			// CheckSyncPrepareTime 이후, seek를 0으로 맞춤
			bool bIsPlaying = true;
			for (const auto MediaPlayerStruct : MediaPlayerStructs)
			{
				if (!MediaPlayerStruct.MediaPlayer->IsPlaying())
				{
					bIsPlaying = false;
					break;
				}
			}
			if (bIsPlaying)
			{
				const auto TimeDiff = GetPlayTimeDifference().GetTotalSeconds();
				if (TimeDiff > TimeMargin)
				{
					MediaSync();
					break;
				}
				
				PrepareTime -= DeltaTime;
				if (PrepareTime <= 0) bIsPlayOnOpen ? ChangeMultiMediaState(Playing) : MediaSync();
			}
			break;	
		}
		case Pausing:
		{
			// 모든 비디오의 시간이 이전 시간과 10프레임동안 같다면 Pause가 완료된 상태로 간주하고 seek을 진행 
			bool IsPaused = true;
			for (auto& MediaPlayerStruct : MediaPlayerStructs)
			{
				if (!MediaPlayerStruct.MediaPlayer->IsPaused() || MediaPlayerStruct.MediaPlayer->GetTime() != MediaPlayerStruct.PrevTime)
				{
					MediaPlayerStruct.PrevTime = MediaPlayerStruct.MediaPlayer->GetTime();
					IsPaused = false;
				}
			}
			PauseTickCounter = IsPaused ? PauseTickCounter + 1 : 0;
			if (PauseTickCounter > 10)
			{
				PauseTickCounter = 0;
				ChangeMultiMediaState(Seeking);
			}
			break;	
		}
		case Seeking:
		{
			// 플레이타임이 모두 목표했던 타임에 도달하면 Seek이 완료된 것이므로 Ready state로 변경
			bool bIsReachedSeek = true;
			for (auto& MediaPlayerStruct : MediaPlayerStructs)
			{
				if (MediaPlayerStruct.MediaPlayer->GetTime() != SeekTime)
				{
					bIsReachedSeek = false;
					break;
				}
			}
			if (bIsReachedSeek)
			{
				ChangeMultiMediaState(Ready);
				break;
			}
				
			// 모든 비디오의 시간이 이전 시간과 100프레임동안 같다면 Freeze상태로 간주
			++FreezeTickCounter;
			if (FreezeTickCounter > 100)
			{
				FreezeTickCounter = 0;
				ChangeMultiMediaState(Pausing);
			}
			break;	
		}
		case Playing:
		{
			// bIsAutoSync 옵션이 true이면 TimeDiff보다 TimeMargin이 커지면 미디어를 다시 동기화 시킨다.
			if (bIsAutoSync)
			{
				const auto TimeDiff = GetPlayTimeDifference().GetTotalSeconds();
				if (TimeDiff > TimeMargin)
				{
					MediaSync();
					break;
				}
			}
				
			// 미디어 플레이어의 현재 재생시간이 총 재생시간보다 커지면 끝났다고 간주한다.
			// (미디어의 재생시간이 총 재생시간의 한 두 프레임 전에 재생이 끝나기 때문에
			// 비교에 사용되는 총 재생시간은 Preparing 상태에서 원래의 총 재생시간 - 두 프레임의 시간만큼 뺀 값이다.)
			bool bIsFreeze = true;
			bool bIsFinished = true;
			for (auto& MediaPlayerStruct : MediaPlayerStructs)
			{
				// freeze 상태 확인
				if (MediaPlayerStruct.MediaPlayer->GetTime() != MediaPlayerStruct.PrevTime)
				{
					MediaPlayerStruct.PrevTime = MediaPlayerStruct.MediaPlayer->GetTime();
					bIsFreeze = false;
				}
				
				const auto PlaySec = MediaPlayerStruct.MediaPlayer->GetTime().GetTotalSeconds();
				if (DurationSec > PlaySec)
				{
					bIsFinished = false;
					break;
				}
			}
				
			if (bIsFinished)
			{
				ChangeMultiMediaState(Finished);
				break;
			}
				
			FreezeTickCounter = bIsFreeze ? FreezeTickCounter + 1 : 0;
			if (FreezeTickCounter > 100)
			{
				FreezeTickCounter = 0;
				ChangeMultiMediaState(Pausing);
			}	
			break;
		}
		default: break;
	}
}

void UMultiMediaSyncComponent::Play()
{
	if (State != Ready) return;

	PlayCounter = 0;
	for (const auto MediaPlayerStruct : MediaPlayerStructs)
	{
		MediaPlayerStruct.MediaPlayer->Play();
	}
}

void UMultiMediaSyncComponent::MediaSync()
{
	if (State != Playing && State != Preparing) return;
	
	ChangeMultiMediaState(Pausing);
}

void UMultiMediaSyncComponent::MediaPlayed()
{
	if (State != Opening && State != Ready) return;
	
	++PlayCounter;
	if (PlayCounter < MediaPlayerStructs.Num()) return;
	
	UE_LOG(LogTemp, Log, TEXT("All media did played!!!"));
	State == Opening ? ChangeMultiMediaState(Preparing) : ChangeMultiMediaState(Playing);
}

FTimespan UMultiMediaSyncComponent::GetPlayTimeDifference()
{
	FTimespan SlowestPlayTime = FTimespan::MaxValue();
	FTimespan FastestPlayTime = FTimespan::MinValue();
	
	for (const auto MediaPlayerStruct : MediaPlayerStructs)
	{
		const auto PlayTime = MediaPlayerStruct.MediaPlayer->GetTime();
		if (SlowestPlayTime > PlayTime) SlowestPlayTime = PlayTime;
		if (FastestPlayTime < PlayTime) FastestPlayTime = PlayTime;
	}
	
	const auto TimeDiff = FastestPlayTime - SlowestPlayTime;
	return TimeDiff;
}

void UMultiMediaSyncComponent::ChangeMultiMediaState(const EMultiMediaState NewState)
{
	if (State == NewState) return;

	// state가 변화하면 이벤트 발생
	if (OnChangedMultiMediaState.IsBound()) OnChangedMultiMediaState.Broadcast(NewState);
	
	State = NewState;

	// 미디어플레이어 상태 변화에 따른 변화.
	switch (NewState)
	{
		case Preparing:
		{
			// 비디오 플레이어의 총재생시간과 프레임 레이트가 일치하는지 확인하고 1프레임 넘어가는데 걸리는 시간과 영상이 끝나야할 시간을 결정.
			float FrameRate = MediaPlayerStructs[0].MediaPlayer->GetVideoTrackFrameRate(0, 0);
			DurationSec = MediaPlayerStructs[0].MediaPlayer->GetDuration().GetTotalSeconds();
			for (auto& MediaPlayerStruct : MediaPlayerStructs)
			{
				if (FrameRate != MediaPlayerStruct.MediaPlayer->GetVideoTrackFrameRate(0, 0))
				{
					UE_LOG(LogTemp, Error, TEXT("The frame rates are not the same!!!"));
					ChangeMultiMediaState(Error);
					return;
				}
				if (DurationSec != MediaPlayerStruct.MediaPlayer->GetDuration().GetTotalSeconds())
				{
					UE_LOG(LogTemp, Error, TEXT("Duration is not the same!!!"));
					ChangeMultiMediaState(Error);
					return;
				}
			}
			OneFrameSec = 1 / FrameRate;
			DurationSec -= OneFrameSec * 5;
			break;	
		}
		case Playing:
		{
			// 끝에서 다시 처음으로 돌아왔으므로 다시 false로 초기화
			if (bIsGoBack) bIsGoBack = false;
			break;	
		}
		case Pausing:
		{
			// 미디어 플레이어들을 Pause.
			for (const auto MediaPlayerStruct : MediaPlayerStructs) MediaPlayerStruct.MediaPlayer->Pause();
			break;	
		}
		case Seeking:
		{
			// 미디어 플레이어를 동기화하기 위한 부분으로 미디어 플레이어를 어느 시간으로 이동시킬지 판단하는 로직.
			// 바로 시작하지 않는 준비 중이거나 다시 처음으로 돌아가는 것인 경우 0초부터 다시 실행하기 위해 0초로 되돌림.
			if ((bIsPreparing && !bIsPlayOnOpen) || bIsGoBack)
			{
				SeekTime = FTimespan::FromSeconds(0);
			}
			else
			{
				// 가장 빠른 미디어플레이어를 기준으로 동기화한다.
				if (bIsSyncToFaster)
				{
					FTimespan FastestPlayTime = FTimespan::MinValue();
					for (const auto MediaPlayerStruct : MediaPlayerStructs)
					{
						const auto PlayTime = MediaPlayerStruct.MediaPlayer->GetTime();
						if (FastestPlayTime < PlayTime) FastestPlayTime = PlayTime;
					}
					SeekTime = FTimespan::FromSeconds(FastestPlayTime.GetTotalSeconds() + OneFrameSec);
				}
				// 가장 느린 미디어플레이어를 기준으로 동기화한다.
				else
				{
					FTimespan SlowestPlayTime = FTimespan::MaxValue();

					for (const auto MediaPlayerStruct : MediaPlayerStructs)
					{
						const auto PlayTime = MediaPlayerStruct.MediaPlayer->GetTime();
						if (SlowestPlayTime > PlayTime) SlowestPlayTime = PlayTime;
					}
					SeekTime = SlowestPlayTime;
				}
			}
			for (const auto MediaPlayerStruct : MediaPlayerStructs)
			{
				MediaPlayerStruct.MediaPlayer->Seek(SeekTime);
			}	
			break;	
		}
		case Ready:
		{
			FreezeTickCounter = 0;
			if (bIsPreparing)
			{
				UE_LOG(LogTemp, Log, TEXT("Media sync completed!!!"));
				bIsPreparing = false;
				if (bIsPlayOnOpen) Play();
			}
			else
			{
				// 자동 동기화 옵션이 켜져있다면 준비된 후 다시 재생하거나 루핑을 위해 처음으로 돌아와서 다시 준비 된 것이라면 바로 재생.
				if(bIsAutoSync || bIsGoBack) Play();
			}
			break;	
		}
		case Finished:
		{
			if (bIsLoop)
			{
				bIsGoBack = true;
				ChangeMultiMediaState(Pausing);
			}
			else
			{
				if (bIsAutoClear)
				{
					for (const auto MediaPlayerStruct : MediaPlayerStructs) MediaPlayerStruct.MediaTexture->SetMediaPlayer(nullptr);	
				}
			}
			break;		
		}
		default: ;
	}
}