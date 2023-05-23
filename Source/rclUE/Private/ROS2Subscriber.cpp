// Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

#include "ROS2Subscriber.h"

#include <Engine/World.h>
#include <TimerManager.h>

UROS2Subscriber* UROS2Subscriber::CreateSubscriber(UObject* InOwner,
                                                   const FString& InTopicName,
                                                   const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                   const FSubscriptionCallback& InCallback,
                                                   const UROS2QoS InQoS)
{
    UROS2Subscriber* subscriber = NewObject<UROS2Subscriber>(InOwner);
    subscriber->MsgClass = InMsgClass;
    subscriber->TopicName = InTopicName;
    subscriber->QoS = InQoS;
    subscriber->SetDelegates(InCallback);
    return subscriber;
}

void UROS2Subscriber::InitializeTopicComponent()
{
    const rosidl_message_type_support_t* msg_type_support = TopicMessage->GetTypeSupport();

    rcl_subscription = rcl_get_zero_initialized_subscription();
    const rosidl_message_type_support_t* type_support = TopicMessage->GetTypeSupport();
    rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();
    sub_opt.qos = QoS_LUT[QoS];
    RCSOFTCHECK(rcl_subscription_init(&rcl_subscription, OwnerNode->GetNode(), type_support, TCHAR_TO_UTF8(*TopicName), &sub_opt));

    State = UROS2State::Initialized;
}

void UROS2Subscriber::Destroy()
{
    Super::Destroy();

    bool res = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), res);
    if (res)
    {
        UE_LOG_WITH_INFO(LogROS2Topic, Log, TEXT("Subscriber Destroy - rcl_Subscriber_fini "));
        RCSOFTCHECK(rcl_subscription_fini(&rcl_subscription, OwnerNode->GetNode()));
    }
    Callback.Unbind();
}

void UROS2Subscriber::ProcessReady()
{
    bool res = true;
    IS_TOPIC_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    if (Ready == true)
    {
        void* data = TopicMessage->Get();
        rmw_message_info_t messageInfo;
        RCSOFTCHECK(rcl_take(&rcl_subscription, data, &messageInfo, nullptr));

        Callback.ExecuteIfBound(TopicMessage);

        Ready = false;
    }
}

void UROS2Subscriber::SetDelegates(const FSubscriptionCallback& InCallback)
{
    if (!InCallback.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Topic, Warning, TEXT("Callback is not set - is this on purpose? "));
    }

    Callback.Unbind();
    Callback = InCallback;
}
