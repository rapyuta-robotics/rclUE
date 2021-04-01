// Copyright (C) Rapyuta Robotics

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
	// Sets default values for this actor's properties
	ATimeLogger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
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
	FTimerHandle timerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxTime=10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartSimTime=0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime StartRealTime;
};
