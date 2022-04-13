// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "ROS2Node.h"

#include <Actions/ROS2GenericAction.h>
#include <Components/ActorComponent.h>
#include <CoreMinimal.h>

#include "ROS2Action.generated.h"

/**
 * @brief Base class implementing ROS2 actions from which ActionServer and ActionClient should inherit
 *
 * type of action is defined by ActionClass
*/
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Action : public UActorComponent
{
    GENERATED_BODY()

public:
    /**
     * @brief Construct a new UROS2Action object
     * 
     */
    UROS2Action();

public:
    /**
     * @brief Initialize action and action component
     * 
     * @param QoS Quality of Service
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    UFUNCTION(BlueprintCallable)
    void Init(const TEnumAsByte<UROS2QoS> QoS);

    /**
     * @brief Create and Initize action
     * 
     */
    UFUNCTION(BlueprintCallable)
    void InitializeAction();

    /**
     * @brief Destroy this actor component.
     * 
     */
    UFUNCTION()
    virtual void Destroy();

    /**
     * @brief Determine the relevant action client functions to call.  
     * Should be implemented in ActionServer and ActionClient
     * 
     * @param wait_set 
     */
    virtual void ProcessReady(rcl_wait_set_t* wait_set);

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ActionName;

    //! type of action
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericAction> ActionClass; 

    //! ROS2 Action Instance
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericAction* Action; 

    //! ROS2Node which own this action.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    AROS2Node* OwnerNode;

    //! Action state 
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created; 

protected:
    /**
     * @brief Initialize ROS2 Action. Should be implemented in ActionServer and ActionClient
     * 
     * @param QoS Quality of Service
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    UFUNCTION()
    virtual void InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS);
};
