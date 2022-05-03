// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Publisher.h"
#include "ROS2Support.h"

#include <Engine/World.h>
#include <TimerManager.h>

#include "ROS2Subsystem.h"

DEFINE_LOG_CATEGORY(LogROS2Publisher);

UROS2Publisher::UROS2Publisher(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Publisher::Init()
{
    TRACE_CPUPROFILER_EVENT_SCOPE_STR("UROS2Publisher::Init")
    UE_LOG(LogROS2Publisher, Verbose, TEXT("[%s] Initialising"), *GetName());

    if (!IsValid(ROSNode)) {
        UE_LOG(LogROS2Publisher, Error, TEXT("[%s] ROS Node is invalid"), *GetName());
        return;
    }

    check(ROSNode->State == UROS2State::Initialized);

    if (State == UROS2State::Created)
    {
        if(TopicName.IsEmpty())
        {
            UE_LOG(LogROS2Publisher, Error, TEXT("[%s] Topic name not set. Initialisation failed."), *GetName());
            return;
        }

        if(TopicType == nullptr)
        {
            UE_LOG(LogROS2Publisher, Error, TEXT("[%s] Topic Type not set. Initialisation failed."), *GetName());
            return;
        }

        TopicMessage = NewObject<UROS2GenericMsg>(this, TopicType);
        check(IsValid(TopicMessage));
        TopicMessage->Init();

        UE_LOG(LogROS2Publisher, Display, TEXT("[%s] Creating topic %s"), *GetName(), *TopicName);
        RclPublisher = rcl_get_zero_initialized_publisher();
        
        rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();
        pub_opt.allocator = ROSNode->ROSSubsystem()->GetRclUEAllocator();
        
        if (bQosOverride) {
            pub_opt.qos = BuildQoSProfile(QosHistoryPolicy, QosDepth, QosReliabilityPolicy, QosDurabilityPolicy);
        } else {
            pub_opt.qos = QoSProfiles_LUT[QosProfilePreset];
        }

        RCSOFTCHECK(rcl_publisher_init(&RclPublisher, ROSNode->GetRCLNode(), TopicMessage->GetTypeSupport(), TCHAR_TO_UTF8(*TopicName), &pub_opt));

        if (bPublishOnTimer) {
            GetWorld()->GetTimerManager().SetTimer(
                TimerHandle, this, &UROS2Publisher::UpdateAndPublishMessage, 1.f / PublicationFrequencyHz, true);
        }

        State = UROS2State::Initialized;
    }
}

void UROS2Publisher::Destroy()
{
    UE_LOG(LogROS2Publisher, Verbose, TEXT("Publisher Destroy Start (%s)"), *__LOG_INFO__);
    if (AsyncPublisherFuture.IsValid())
    {
        AsyncPublisherFuture.Wait();
    }
    
    if (TopicMessage != nullptr)
    {
        TopicMessage->Fini();
    }

    if (ROSNode != nullptr)
    {
        UE_LOG(LogROS2Publisher, Verbose, TEXT("Publisher Destroy - rcl_publisher_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_publisher_fini(&RclPublisher, ROSNode->GetRCLNode()));
    }
    UE_LOG(LogROS2Publisher, Display, TEXT("[%s] Publisher destroyed"), *GetName());
}

void UROS2Publisher::UpdateAndPublishMessage()
{
    TRACE_CPUPROFILER_EVENT_SCOPE_STR("UROS2Publisher::UpdateAndPublishMessage")
    if(State != UROS2State::Initialized)
    {
        UE_LOG(LogROS2Publisher, Error, TEXT("[%s] Update and Publish called when publisher has not been initialised."), *GetName());
        return;
    }
    
    {
        FScopeLock Lock(&Mutex);
        UpdateMessage(TopicMessage);
    }
    
    if(bPublish)
    {
        Publish();
    }
}

void UROS2Publisher::Publish()
{
    TRACE_CPUPROFILER_EVENT_SCOPE_STR("UROS2Publisher::Publish")
    PublishMsg(TopicMessage, false);
}

// this is an attempt to create a inheritance based publish msg to clean up blueprints and the need for casting
void UROS2Publisher::PublishMsg(UROS2GenericMsg* Message, bool async)
{
    TRACE_CPUPROFILER_EVENT_SCOPE_STR("UROS2Publisher::PublishMsg")
    if(State != UROS2State::Initialized)
    {
        UE_LOG(LogROS2Publisher, Error, TEXT("[%s] PublishMsg called when publisher has not been initialised."), *GetName());
        return;
    }

    if(!IsValid(Message))
    {
        UE_LOG(LogROS2Publisher, Error, TEXT("[%s] PublishMsg called with invalid Message parameter."), *GetName());
        return;
    }

    if (async)
    {
        if (AsyncPublisherFuture.IsValid())
        {
            if (!AsyncPublisherFuture.IsReady())
            {
                UE_LOG(LogROS2Publisher, Warning, TEXT("[%s] Async PublishMsg is still publishing - dropping message."), *GetName());
                return;
            }
        }

        AsyncPublisherFuture = Async(EAsyncExecution::TaskGraph, [this, Message]()
            {
                TRACE_CPUPROFILER_EVENT_SCOPE_STR("UROS2Publisher::PublishMsg_AsyncLambda")
                RCSOFTCHECK(rcl_publish(&RclPublisher, Message->Get(), nullptr));
            });
    } else {
        FScopeLock Lock(&Mutex);
        RCSOFTCHECK(rcl_publish(&RclPublisher, Message->Get(), nullptr));
    }
}
