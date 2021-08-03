// Copyright 2021 Rapyuta Robotics Co., Ltd.

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
	AOccupancyMapGenerator();

protected:
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
