// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMeshActor.h"
#include "OccupancyMapGenerator.generated.h"

UCLASS()
class RCLUE_API AOccupancyMapGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOccupancyMapGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere)
	AStaticMeshActor* Map;

	UPROPERTY(EditAnywhere)
	float GridRes = 0.05; // [m/pixel]

	UPROPERTY(EditAnywhere)
	float MaxVerticalHeight = 10; // [m]

	UPROPERTY(EditAnywhere)
	FString Filename = "ue4_map";
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	TArray<uint8> OccupancyGrid;

	UFUNCTION()
	bool WriteToFile(int width, int height, float originx, float originy);
};
