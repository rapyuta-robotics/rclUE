/**
 * @file ROS2Subsystem.h
 * @brief Game Instance Subsystem class used to maintain the rcl support object
 *   This class is automatically instanced.
 * @sa [Unreal Engine Subsystems](https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/Subsystems/)
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

#include "ROS2Support.h"
#include "rclcUtilities.h"

#include <CoreMinimal.h>
#include <Subsystems/GameInstanceSubsystem.h>
#include <Tickable.h>

#include "ROS2Subsystem.generated.h"

/**
 * @brief Game Instance Subsystem class used to maintain the rcl support object
 *   This class is automatically instanced.
 * @sa [Unreal Engine Subsystems](https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/Subsystems/)
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2Subsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ROS2")
    UROS2Support* GetSupport() const;

    /**
     * @brief
     * @todo If client/server, this should only be created on the server.
     * @param Outer
     * @return true
     * @return false
     */
    virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

    /**
     * @brief Create #UROS2Suppoort instance and initialize it.
     *
     * @param Collection [Unreal Engine
     * FSubsystemCollectionBase](https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/Subsystems/FSubsystemCollectionBase/)
     */
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    /**
     * @brief DeInitialize this and #Support
     *
     */
    virtual void Deinitialize() override;

    /**
     * @brief [FTickableObjectBase::Tick](https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/FTickableObjectBase/Tick/)
     *
     * @param DeltaTime
     */
    virtual void Tick(float DeltaTime) override;

    /**
     * @brief
     * [FTickableObjectBase::IsTickable](https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/FTickableObjectBase/IsTickable/)
     *
     * @return true
     * @return false
     */
    virtual bool IsTickable() const override;

    /**
     * @brief
     * [FTickableGameObject::IsTickableWhenPaused](https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/FTickableGameObject/IsTickableWhenPaused/)
     *
     * @return true
     * @return false
     */
    virtual bool IsTickableWhenPaused() const override;

    /**
     * @brief
     * [FTickableGameObject::IsTickableInEditor](https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/FTickableGameObject/IsTickableInEditor/)
     *
     * @return true
     * @return false
     */
    virtual bool IsTickableInEditor() const override;

    /**
     * @brief
     * [FTickableObjectBase::GetStatId](https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/FTickableObjectBase/GetStatId/)
     *
     * @return TStatId
     */
    virtual TStatId GetStatId() const override;

private:
    UPROPERTY()
    UROS2Support* Support;
};
