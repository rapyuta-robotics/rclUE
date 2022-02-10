// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Support.h"
#include "ROS2Publisher.h"

#include <Engine/World.h>
#include <TimerManager.h>

DEFINE_LOG_CATEGORY(LogROS2Publisher);

UROS2Publisher::UROS2Publisher()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Publisher::Init()
{
    check(OwnerNode != nullptr);
    check(OwnerNode->State == UROS2State::Initialized);

    if (State == UROS2State::Created)
    {
        InitializeMessage();    // needed to get type support

        check(IsValid(TopicMessage));

        const rosidl_message_type_support_t* msg_type_support = TopicMessage->GetTypeSupport();

        UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Init - rclc_publisher_init_default (%s)"), *__LOG_INFO__);
        RclPublisher = rcl_get_zero_initialized_publisher();
        rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();

        if (bQosOverride) {
            pub_opt.qos = BuildQoSProfile(QosHistoryPolicy, QosDepth, QosReliabilityPolicy, QosDurabilityPolicy);
        } else {
            pub_opt.qos = QoSProfiles_LUT[QosProfilePreset];
        }

        RCSOFTCHECK(rcl_publisher_init(&RclPublisher, OwnerNode->GetNode(), msg_type_support, TCHAR_TO_UTF8(*TopicName), &pub_opt));

        if (bPublishOnTimer) {
            GetWorld()->GetTimerManager().SetTimer(
                TimerHandle, this, &UROS2Publisher::UpdateAndPublishMessage, 1.f / PublicationFrequencyHz, true);
        }

        State = UROS2State::Initialized;
    }
}

void UROS2Publisher::RegisterToROS2Node(AROS2Node* InROS2Node)
{
    SetupUpdateCallback();
    InROS2Node->AddPublisher(this);
}

void UROS2Publisher::Destroy()
{
    UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Destroy (%s)"), *__LOG_INFO__);
    if (TopicMessage != nullptr)
    {
        TopicMessage->Fini();
    }

    if (OwnerNode != nullptr)
    {
        UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Destroy - rcl_publisher_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_publisher_fini(&RclPublisher, OwnerNode->GetNode()));
    }
    UE_LOG(LogROS2Publisher, Log, TEXT("Publisher Destroy - Done (%s)"), *__LOG_INFO__);
}

void UROS2Publisher::InitializeMessage()
{
    check(TopicName != FString());
    check(MsgClass);

    TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);

    check(IsValid(TopicMessage));

    TopicMessage->Init();
}

void UROS2Publisher::UpdateAndPublishMessage()
{
    check(State == UROS2State::Initialized);
    check(IsValid(OwnerNode));

    UpdateDelegate.ExecuteIfBound(TopicMessage);
    if(bPublish)
    {
        Publish();
    }
}

void UROS2Publisher::Publish()
{
    check(State == UROS2State::Initialized);
    check(OwnerNode != nullptr);

    PublishedMsg = TopicMessage->Get();

    RCSOFTCHECK(rcl_publish(&RclPublisher, PublishedMsg, nullptr));
}
