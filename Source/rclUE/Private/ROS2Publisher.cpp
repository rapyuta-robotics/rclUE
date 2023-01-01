// Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

#include "ROS2Publisher.h"

#include <Engine/World.h>
#include <TimerManager.h>

UROS2Publisher* UROS2Publisher::CreatePublisher(UObject* InOwner,
                                                const FString& InTopicName,
                                                const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                float InPubFrequency,
                                                const TEnumAsByte<UROS2QoS> InQoS)
{
    UROS2Publisher* publisher = NewObject<UROS2Publisher>(InOwner, InPublisherClass);
    publisher->MsgClass = InMsgClass;
    publisher->TopicName = InTopicName;
    publisher->PublicationFrequencyHz = InPubFrequency;
    publisher->QoS = InQoS;
    publisher->SetDefaultDelegates();
    return publisher;
}

UROS2Publisher* UROS2Publisher::CreateLoopPublisher(UObject* InOwner,
                                                    const FString& InTopicName,
                                                    const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                    const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                    float InPubFrequency,
                                                    const FTopicCallback& InUpdateDelegate,
                                                    const TEnumAsByte<UROS2QoS> InQoS)
{
    UROS2Publisher* publisher = NewObject<UROS2Publisher>(InOwner, InPublisherClass);
    publisher->MsgClass = InMsgClass;
    publisher->TopicName = InTopicName;
    publisher->PublicationFrequencyHz = InPubFrequency;
    publisher->QoS = InQoS;
    publisher->SetDelegates(InUpdateDelegate);
    return publisher;
}

void UROS2Publisher::InitializeTopicComponent()
{
    TimerManager = NewObject<URRTimerManager>(
        this, URRTimerManager::StaticClass(), FName(*FString::Printf(TEXT("%s_TimerManager"), *GetName())));
    const rosidl_message_type_support_t* msg_type_support = TopicMessage->GetTypeSupport();

    RclPublisher = rcl_get_zero_initialized_publisher();
    rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();

    pub_opt.qos = QoS_LUT[QoS];

    RCSOFTCHECK(rcl_publisher_init(&RclPublisher, OwnerNode->GetNode(), msg_type_support, TCHAR_TO_UTF8(*TopicName), &pub_opt));

    StartPublishTimer();

    State = UROS2State::Initialized;
}

void UROS2Publisher::StopPublishTimer()
{
    if (TimerManager != nullptr)
    {
        TimerManager->StopTimer();
    }
}

void UROS2Publisher::StartPublishTimer()
{
    if (PublicationFrequencyHz > 0 && TimerManager != nullptr)
    {
        TimerManager->LogInfo = TopicName;
        FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &UROS2Publisher::UpdateAndPublishMessage);
        TimerManager->SetTimer(TimerDelegate, 1.f / PublicationFrequencyHz);
    }
}

void UROS2Publisher::Destroy()
{
    Super::Destroy();
    if (OwnerNode != nullptr)
    {
        UE_LOG(LogROS2Topic, Log, TEXT("Publisher Destroy - rcl_publisher_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_publisher_fini(&RclPublisher, OwnerNode->GetNode()));
    }
    UpdateDelegate.Unbind();
}

void UROS2Publisher::UpdateAndPublishMessage()
{
    if (State != UROS2State::Initialized)
    {
        UE_LOG(LogROS2Topic, Error, TEXT("Publisher is not initialized yet (%s)"), *__LOG_INFO__);
        return;
    }
    check(IsValid(OwnerNode));

    UpdateDelegate.ExecuteIfBound(TopicMessage);

    Publish();
}

void UROS2Publisher::Publish()
{
    check(State == UROS2State::Initialized);
    check(OwnerNode != nullptr);

    RCSOFTCHECK(rcl_publish(&RclPublisher, TopicMessage->Get(), nullptr));
}

void UROS2Publisher::SetDelegates(const FTopicCallback& InUpdateDelegate)
{
    if (!InUpdateDelegate.IsBound())
    {
        UE_LOG(LogROS2Topic, Warning, TEXT("UpdateDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }
    UpdateDelegate.Unbind();
    UpdateDelegate = InUpdateDelegate;
}

void UROS2Publisher::SetDefaultDelegates()
{
    UpdateDelegate.Unbind();
    UpdateDelegate.BindDynamic(this, &UROS2Publisher::UpdateMessage);
}
