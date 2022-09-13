// Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

#include "ROS2Subscriber.h"

#include <Engine/World.h>
#include <TimerManager.h>

UROS2Subscriber* UROS2Subscriber::CreateSubscriber(UObject* InOwner,
                                                const FString& InTopicName,
                                                const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                const FSubscriptionCallback& InCallback)
{
    UROS2Subscriber* subscriber = NewObject<UROS2Subscriber>(InOwner);
    subscriber->MsgClass = InMsgClass;
    subscriber->TopicName = InTopicName;
    subscriber->Callback = InCallback;
    return subscriber;
}

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
        UE_LOG(LogROS2Msg, Log, TEXT("Subscriber Destroy - rcl_Subscriber_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_subscription_fini(&rcl_subscription, OwnerNode->GetNode()));
    }
    Callback.Unbind();
}

void UROS2Subscriber::ProcessReady()
{
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
        UE_LOG(LogROS2Msg, Warning, TEXT("Callback is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    Callback = InCallback;
}
