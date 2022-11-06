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

//! BP requires a custom-made callback thus it must be Dynamic
DECLARE_DYNAMIC_DELEGATE_OneParam(FTopicCallback, UROS2GenericMsg*, InTopicMessage);

/**
 * @brief ROS2 Publisher class.
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Topic : public UActorComponent
{
    GENERATED_BODY()

public:

    /**
     * @brief Construct a new UROS2Topic object
     *
     */
    UROS2Topic();

    /**
     * @brief Initialize Publisher
     *
     * @param InROS2Node ROS2Node which this publisher belongs to
     */
    InitializeWithROS2(AROS2Node* InROS2Node);

    /**
     * @brief Initialize publisher with rcl_publisher_init, initialize message and start timer and
     *
     */
    UFUNCTION(BlueprintCallable)
    void Init();

    /**
     * @brief Create #UROS2GenericMsg instance and initialize it.
     *
     */
    UFUNCTION(BlueprintCallable)
    void InitializeMessage();

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

protected:

    //! Message Instance
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericMsg* TopicMessage;

    /**
     * @brief Initialize ROS2 Action. Should be implemented in ActionServer and ActionClient
     *
     */
    UFUNCTION()
    virtual void InitializeTopicComponent();
};
