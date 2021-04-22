// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "rclcUtilities.h"
#include "ROS2Context.h"

#include "ROS2Subsystem.generated.h"


/**
 * ROS2 Subsystem managing clock, execution model (executor), memory management and debugging support
 * - owner of context (contained in the rclc_support_t structure in rclc and wrapped in the UROS2Context in UE4)
 * 		should this be a TUniquePtr? the subsystem should be the first ROS2 component created and the last to be destroyed
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2Subsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
	
public:	
	UFUNCTION(BlueprintCallable, Category="ROS2")
    UROS2Context* GetContext() const;

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
    UROS2Context* context;
};
