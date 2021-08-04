// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "Misc/DateTime.h"
#include "GameFramework/Actor.h"

#include "TimeLogger.generated.h"

UCLASS()
class RCLUE_API ATimeLogger : public AActor
{
	GENERATED_BODY()
	
public:	
	ATimeLogger();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void StartTimer();

	UFUNCTION(BlueprintCallable)
	void DumpData();

	UPROPERTY()
	TArray<FString> RealTimeHistory;
	
	UPROPERTY()
	TArray<FString> SimTimeHistory;
	
	UPROPERTY()
	FTimerHandle TimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxTime = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartSimTime = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime StartRealTime;
};
