// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

// Game Instance Subsystem class used to maintain the rcl support object
// This class is automatically instanced (see UE4 documentation for Subsystems for more details)

#pragma once

#include "ROS2Support.h"
#include "rclcUtilities.h"

#include <CoreMinimal.h>
#include <Subsystems/GameInstanceSubsystem.h>
#include <Tickable.h>

#include "ROS2Subsystem.generated.h"

UCLASS(Blueprintable)
class RCLUE_API UROS2Subsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ROS2")
	UROS2Support* GetSupport() const;

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	virtual void Tick(float DeltaTime) override;

	virtual bool IsTickable() const override;

	virtual bool IsTickableWhenPaused() const override;

	virtual bool IsTickableInEditor() const override;

	virtual TStatId GetStatId() const override;

private:
	UPROPERTY()
	UROS2Support* Support;
};
