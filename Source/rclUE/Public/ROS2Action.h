/**
 * @file ROS2Action.h
 * @brief Base class implementing ROS2 actions from which ActionServer and ActionClient should inherit
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

// UE
#include <Actions/ROS2GenericAction.h>
#include <Components/ActorComponent.h>
#include <CoreMinimal.h>

//rclUE
#include "ROS2NodeComponent.h"
#include "Srvs/ROS2CancelGoal.h"
#include "rclcUtilities.h"

#include "ROS2Action.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Action, Log, All);

#define IS_ACTION_INITED(InNode, InName, OutRes)                                                                                   \
    IS_ROS2NODE_INITED(InNode, InName, OutRes);                                                                                    \
                                                                                                                                   \
    if (State != UROS2State::Initialized)                                                                                          \
    {                                                                                                                              \
        UE_LOG_WITH_INFO(                                                                                                          \
            LogROS2Action, Warning, TEXT("[%s] Action Client/Server is not initialized yet. Please initialize Action."), *InName); \
        OutRes = false;                                                                                                            \
    }

/**
 * @brief Base class implementing ROS2 actions from which ActionServer and ActionClient should inherit
 *
 * type of action is defined by ActionClass
*/
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Action : public UObject
{
    GENERATED_BODY()

public:
    /**
     * @brief Initialize action
     *
     * @param InROS2Node ROS2Node which this action belongs to
    * @return true
    * @return false
    */
    virtual bool InitializeWithROS2(UROS2NodeComponent* InROS2Node);

    /**
     * @brief Initialize action and action component
     *
     * @return true
     * @return false
     */
    UFUNCTION(BlueprintCallable)
    virtual bool Init();

    /**
     * @brief Create and Initize action
     *
     * @return true
     * @return false
     */
    UFUNCTION(BlueprintCallable)
    virtual bool InitializeAction();

    /**
     * @brief Destroy this actor component.
     *
     */
    UFUNCTION()
    virtual void Destroy();

    /**
     * @brief Determine the relevant action functions to call.
     * Should be implemented in #UROS2ActionServer and #UROS2ActionClient
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
    UROS2NodeComponent* OwnerNode;

    //! Action state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

    //! Quality of Cancel
    //! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS CancelQoS = UROS2QoS::Services;

    //! Quality of Goal
    //! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS GoalQoS = UROS2QoS::Services;

    //! Quality of Result
    //! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS ResultQoS = UROS2QoS::Services;

    //! Quality of Feedback
    //! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS FeedbackQoS = UROS2QoS::Default;

protected:
    /**
     * @brief Initialize ROS2 Action. Should be implemented in #UROS2ActionServer and #UROS2ActionClient
     *
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    UFUNCTION()
    virtual void InitializeActionComponent();
};
