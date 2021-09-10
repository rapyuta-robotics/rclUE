// Copyright (c) 2020-2021 Rapyuta Robotics Co., Ltd.

// Base class implementing ROS2 actions from which ActionServer and ActionClient should inherit
// type of action is defined by ActionClass

#pragma once

#include "ROS2Node.h"

#include <Actions/ROS2GenericAction.h>
#include <Components/ActorComponent.h>
#include <CoreMinimal.h>

#include "ROS2Action.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Action : public UActorComponent
{
    GENERATED_BODY()

public:
    UROS2Action();

public:
    UFUNCTION(BlueprintCallable)
    void Init(const TEnumAsByte<UROS2QoS> QoS);

    UFUNCTION(BlueprintCallable)
    void InitializeAction();

    UFUNCTION()
    virtual void Destroy();

    virtual void ProcessReady(rcl_wait_set_t* wait_set);

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ActionName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericAction> ActionClass;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericAction* Action;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    AROS2Node* OwnerNode;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

protected:
    UFUNCTION()
    virtual void InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS);
};
