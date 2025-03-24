﻿#pragma once

#include "CoreMinimal.h"
#include "MetaGraphicsSettingsComponent.generated.h"

class UMTKSaveGame;
class UMTKGraphicsSettingsWidget;

UCLASS(ClassGroup = "MetaToolkit", meta = (BlueprintSpawnableComponent))
class METATOOLKIT_API UMetaGraphicsSettingsComponent : public UActorComponent
{
	GENERATED_BODY()

	UMetaGraphicsSettingsComponent();
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Meta Graphics Settings")
	UMTKGraphicsSettingsWidget* GraphicsSettingsWidget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Meta Graphics Settings")
	TSubclassOf<UUserWidget> GraphicsSettingWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Meta Graphics Settings")
	int32 ZOrder = 0;

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category="Meta Graphics Settings")
	void ShowGraphicsSettingsUI();
	
	UFUNCTION(BlueprintCallable, Category="Meta Graphics Settings")
	void HideGraphicsSettingsUI();
};