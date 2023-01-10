/**
 * @file ROS2Topic.h
 * @brief  Class implementing ROS2 publishers
 * Message type is defined by MsgClass
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "ROS2NodeComponent.h"

#include "ROS2Topic.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Topic, Log, All);

#define IS_TOPIC_INITED(InNode, InName, OutRes)                                                                   \
    do                                                                                                            \
    {                                                                                                             \
        IS_ROS2NODE_INITED(InNode, InName, OutRes);                                                               \
                                                                                                                  \
        if (State != UROS2State::Initialized)                                                                     \
        {                                                                                                         \
            UE_LOG_WITH_INFO(LogROS2Topic,                                                                        \
                             Warning,                                                                             \
                             TEXT("[%s] Publisher/Subscriber is not initialized yet. Please initialize Action."), \
                             *InName);                                                                            \
            OutRes = false;                                                                                       \
        }                                                                                                         \
    } while (0)

/**
 * @brief ROS2 Publisher class.
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Topic : public UObject
{
    GENERATED_BODY()

public:
    /**
     * @brief Initialize Publisher
     *
     * @param InROS2Node ROS2Node which this publisher belongs to
     */
    virtual bool InitializeWithROS2(UROS2NodeComponent* InROS2Node);

    /**
     * @brief Initialize publisher with rcl_publisher_init, initialize message and start timer and
     *
     * @return true
     * @return false
     */
    UFUNCTION(BlueprintCallable)
    virtual bool Init();

    /**
     * @brief Create #UROS2GenericMsg instance and initialize it.
     *
     */
    UFUNCTION(BlueprintCallable)
    virtual bool InitializeMessage();

    /**
     * @brief Destroy publisher with rcl_publisher_fini
     *
     */
    UFUNCTION()
    virtual void Destroy();

    //! this information is redundant with Topic, but it's needed to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName;

    //! this information is redundant with Topic, but it's needed to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> MsgClass;

    //! ROS2Node which own this publisher.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UROS2NodeComponent* OwnerNode = nullptr;

    //! Publisher state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

    //! Quality of service
    //! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TEnumAsByte<UROS2QoS> QoS = UROS2QoS::Default;

    //! Message Instance
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericMsg* TopicMessage;

protected:
    /**
     * @brief Initialize ROS2 Action. Should be implemented in ActionServer and ActionClient
     *
     */
    UFUNCTION()
    virtual void InitializeTopicComponent();
};
