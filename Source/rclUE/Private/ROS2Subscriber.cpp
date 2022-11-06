// Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

#include "ROS2Subscriber.h"

#include <Engine/World.h>
#include <TimerManager.h>

void UROS2Subscriber::InitializeTopicComponent()
{
    const rosidl_message_type_support_t* msg_type_support = TopicMessage->GetTypeSupport();

    rcl_subscription = rcl_get_zero_initialized_subscription();
    const rosidl_message_type_support_t* type_support = TopicMessage->GetTypeSupport();
    rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();
    RCSOFTCHECK(rcl_subscription_init(&rcl_subscription, OwnerNode->GetNode(), type_support, TCHAR_TO_UTF8(*TopicName), &sub_opt));

}

void UROS2Subscriber::Destroy()
{
    Super::Destroy();
    if (OwnerNode != nullptr)
    {
        UE_LOG(LogROS2Subscriber, Log, TEXT("Subscriber Destroy - rcl_Subscriber_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_subscription_fini(&rcl_subscription, OwnerNode->GetNode()));
    }
    UpdateDelegate.Unbind();
}

void UROS2Subscriber::SetDelegates(const FTopicCallback& InUpdateDelegate)
{
    if (!InUpdateDelegate.IsBound())
    {
        UE_LOG(LogROS2Subscriber, Warning, TEXT("UpdateDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    UpdateDelegate = InUpdateDelegate;
}
