/**
 * @file ROS2Topic.h
 * @brief  Class implementing ROS2 topic
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
#include "rclcUtilities.h"

#include "ROS2Topic.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Topic, Log, All);

/**
 * @brief Check if Topic is initialized
 * @param InNode ROS2Node which this publisher/subscriber belongs to
 * @param InName Name of this publisher/subscriber. Only used for logging.
 * @param OutRes Result of the check true if initialized, false otherwise
 */
#define IS_TOPIC_INITED(InNode, InName, OutRes)                                                                                   \
    IS_ROS2NODE_INITED(InNode, InName, OutRes);                                                                                   \
    if (State != UROS2State::Initialized)                                                                                         \
    {                                                                                                                             \
        UE_LOG_WITH_INFO(                                                                                                         \
            LogROS2Topic, Warning, TEXT("[%s] Publisher/Subscriber is not initialized yet. Please initialize Action."), *InName); \
        OutRes = false;                                                                                                           \
    }

/**
 * @brief ROS2 topic class. Parent class of #UROS2Publisher and #UROS2Subscriber
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Topic : public UObject
{
    GENERATED_BODY()

public:
    /**
     * @brief Initialize Topic with ROS2Node
     *
     * @param InROS2Node ROS2Node which this publisher/subscriber belongs to
     */
    virtual bool InitializeWithROS2(UROS2NodeComponent* InROS2Node);

    /**
     * @brief Initialize topic, #InitializeMessage and #InitializeTopicComponent
     *
     * @return true
     * @return false
     */
    UFUNCTION(BlueprintCallable)
    virtual bool Init();

    /**
     * @brief Create #TopicMessage instance and initialize it.
     *
     */
    UFUNCTION(BlueprintCallable)
    virtual bool InitializeMessage();

    /**
     * @brief Destroy topic and #TopicMessage
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

    //! ROS2Node which own this topic.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UROS2NodeComponent* OwnerNode = nullptr;

    //! State
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

    //! Quality of service
    //! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS QoS = UROS2QoS::Default;

    /**
     * @brief Optional custom QoS profile.
     *
     * Use this when you need fine-grained QoS settings that are not covered by the #UROS2QoS
     * enum presets (for example, custom reliability, durability, history depth, deadline,
     * or lifespan values).
     *
     * If this optional has a value, it takes precedence over the QoS enum above and the stored
     * rmw_qos_profile_t is passed directly to the underlying RMW layer. If it is not set, the
     * QoS enum is used to derive the effective QoS settings.
     *
     * Example usage in C++:
     * @code{.cpp}
     *   rmw_qos_profile_t CustomProfile = rmw_qos_profile_default;
     *   CustomProfile.reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
     *   CustomProfile.durability  = RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL;
     *   CustomProfile.depth       = 10;
     *
     *   MyTopic->QoS = UROS2QoS::Default;   // used only if QoSProfile is not set
     *   MyTopic->QoSProfile = CustomProfile; // overrides the enum-based QoS
     * @endcode
     */
    TOptional<rmw_qos_profile_t> QoSProfile;

    //! Message Instance
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericMsg* TopicMessage;

protected:
    /**
     * @brief Get the effective QoS profile to use for this topic
     * Returns custom QoS if set, otherwise returns the QoS from QoS_LUT
     *
     * @return rmw_qos_profile_t The QoS profile to use
     */
    rmw_qos_profile_t GetEffectiveQoS() const
    {
        if (QoSProfile.IsSet())
        {
            return QoSProfile.GetValue();
        }
        return QoS_LUT[QoS];
    }

    /**
     * @brief Initialize ROS2 Topic. Should be implemented in #UROS2Publisher and #UROS2Subscriber
     *
     */
    UFUNCTION()
    virtual void InitializeTopicComponent();
};
