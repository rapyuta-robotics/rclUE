/**
 * @file ROS2CustomSubscriber.h
 * @brief Custom ROS2 Subscriber with configurable QoS profile
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 */

#pragma once

#include "CoreMinimal.h"
#include "ROS2Subscriber.h"

#include "ROS2CustomSubscriber.generated.h"

/**
 * @brief Custom ROS2 Subscriber that allows setting custom QoS profiles
 * without modifying rclcUtilities.h or QoS_LUT
 *
 * This class enables projects to define custom QoS profiles without
 * modifying rclUE core files, maintaining better separation of concerns.
 */
UCLASS()
class RCLUE_API UROS2CustomSubscriber : public UROS2Subscriber
{
    GENERATED_BODY()

public:
    /**
     * @brief Custom QoS profile to use (overrides QoS enum)
     */
    rmw_qos_profile_t CustomQoSProfile;

    /**
     * @brief Flag to indicate if custom QoS should be used
     */
    bool bUseCustomQoS = false;

    /**
     * @brief Create a custom subscriber with specific QoS profile
     *
     * @param InOwner Owner object
     * @param InTopicName Topic name
     * @param InMsgClass Message class
     * @param InCallback Subscription callback
     * @param InCustomQoS Custom QoS profile
     * @return Pointer to created subscriber
     */
    static UROS2CustomSubscriber* CreateCustomSubscriber(UObject* InOwner,
                                                         const FString& InTopicName,
                                                         const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                         const FSubscriptionCallback& InCallback,
                                                         const rmw_qos_profile_t& InCustomQoS)
    {
        UROS2CustomSubscriber* subscriber = NewObject<UROS2CustomSubscriber>(InOwner);
        subscriber->MsgClass = InMsgClass;
        subscriber->TopicName = InTopicName;
        subscriber->Callback = InCallback;
        subscriber->CustomQoSProfile = InCustomQoS;
        subscriber->bUseCustomQoS = true;
        return subscriber;
    }

protected:
    /**
     * @brief Override InitializeTopicComponent to use custom QoS
     */
    virtual void InitializeTopicComponent() override
    {
        const rosidl_message_type_support_t* type_support = TopicMessage->GetTypeSupport();

        rcl_subscription = rcl_get_zero_initialized_subscription();
        rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();

        // Use custom QoS if specified, otherwise use standard QoS_LUT
        if (bUseCustomQoS)
        {
            sub_opt.qos = CustomQoSProfile;
            UE_LOG(LogROS2Topic, Log, TEXT("[%s] Using custom QoS profile (depth=%zu)"), *TopicName, CustomQoSProfile.depth);
        }
        else
        {
            sub_opt.qos = QoS_LUT[QoS];
        }

        RCSOFTCHECK(
            rcl_subscription_init(&rcl_subscription, OwnerNode->GetNode(), type_support, TCHAR_TO_UTF8(*TopicName), &sub_opt));

        State = UROS2State::Initialized;
    }
};
