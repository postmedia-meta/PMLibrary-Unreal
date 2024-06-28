#pragma once

#include "CoreMinimal.h"
#include "MultiMediaSyncComponent.generated.h"

class UMediaPlayer;
class UMediaTexture;
class UFileMediaSource;

UENUM(BlueprintType)
enum EMultiMediaState : uint8
{
	None = 0,
	Opening,
	Preparing,
	Ready,
	Playing,
	Pausing,
	Seeking,
	Finished,
	Error
};

USTRUCT(BlueprintType)
struct FMediaPlayerStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	UMediaPlayer* MediaPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	UMediaTexture* MediaTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	UFileMediaSource* FileMediaSource;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Multi Media")
	FTimespan PrevTime = FTimespan::Zero();
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedMultiMediaState, EMultiMediaState, NewState);

UCLASS(ClassGroup = "Media", meta = (BlueprintSpawnableComponent))
class METAPLAYER_API UMultiMediaSyncComponent : public UActorComponent
{
	GENERATED_BODY()

	UMultiMediaSyncComponent();
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	TArray<FMediaPlayerStruct> MediaPlayerStructs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	double TimeMargin = 0.1f;

	// if true, Prepare and wait video play
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	bool bIsPlayOnOpen = true;

	// if true, looping video
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	bool bIsLoop = false;

	// if true, playback time is automatically synchronized if the difference between video playback times is greater than TimeMargin.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	bool bIsAutoSync = true;

	// If true, sync to the more played video
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	bool bIsSyncToFaster = true;

	// If true, sync to the more played video
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Multi Media")
	bool bIsAutoClear = true;

	// State change event
	UPROPERTY(BlueprintAssignable, Category="Multi Media Events")
	FOnChangedMultiMediaState OnChangedMultiMediaState;
	
private:
	// 준비 단계를 구별하기 위한 변수
	bool bIsPreparing = true;
	// 루핑으로 인해 다시 원점으로 돌아가는 중인지 확인하기 위한 변수
	bool bIsGoBack = false;

	// 모든 영상이 플레이 되었는지 확인하기 위한 변수 (플레이 이벤트 때마다 증가 // 플레이 상태가 되면 0으로 초기화)
	int32 PlayCounter = 0;
	// 모든 영상이 같은 현재 재생 시간으로 몇 프레임 유지 되었는지 확인하기 위한 변수(일정 프레임 이상 유지되었다면 Pause가 완료된 것을 확인하기 위함.)
	int32 PauseTickCounter = 0;
	// 영상이 재생 중이거나 Seek하던 중 멈췄느지 확인하기 위한 변수.
	int32 FreezeTickCounter = 0;

	// 영상 준비 시간 (미디어 소스를 열고 재생한 후부터 PrepareTime 후에 원점으로 돌아감)
	double PrepareTime = 3;
	// 미디어 플레이어 영상의 총 재생 시간
	double DurationSec = 0;
	// 미디어 플레이어의 한 프레임이 바뀌는데 걸리는 시간
	float OneFrameSec = 0;

	// 영상이 목표로한 SeekTime에 도달했는지 확인하기 위한 변수
	FTimespan SeekTime = FTimespan::Zero();
	
	EMultiMediaState State = None;

public:
	// 미디어플레이어 재생.
	UFUNCTION(BlueprintCallable, Category="Multi Media")
	void Play();

	// 미디어플레이어를 잠시 멈추고 동기화함. 미디어 플레이어가 재생되고 있지 않은 상태에서 Seek 해야 정상 작동함. (Pause -> Seek)
	UFUNCTION(BlueprintCallable, Category="Multi Media")
	void MediaSync();

	// 미디어플레이어 재생 중 가장 큰 시간차를 알기 위함.
	UFUNCTION(BlueprintCallable, Category="Multi Media")
	FTimespan GetPlayTimeDifference();

	// 현재 상태 반환.
	UFUNCTION(BlueprintCallable, Category="Multi Media")
	EMultiMediaState GetMultiMediaState() const { return State; }

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UFUNCTION()
	void ChangeMultiMediaState(const EMultiMediaState NewState);
	
	// 각 미디어플레이어가 재생되면 발생하는 이벤트
	UFUNCTION()
	void MediaPlayed();
};