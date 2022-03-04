#include "ROS2Subscriber.h"
#include "ROS2Support.h"

#include <Engine/World.h>
#include <Kismet/GameplayStatics.h>


DEFINE_LOG_CATEGORY(LogROS2Subscriber);

UROS2Subscriber::UROS2Subscriber()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UROS2Subscriber::Init()
{
    if (State == UROS2State::Initialized) {
        UE_LOG(LogROS2Subscriber, Error, TEXT("[%s] Initialise called when already initialised"), *GetName());
        return;
    }

    UE_LOG(LogROS2Subscriber, Display, TEXT("[%s] Initialising..."), *GetName());

    check(ROSNode != nullptr);
    check(ROSNode->State == UROS2State::Initialized);

    if (State == UROS2State::Created)
    {
        InitializeMessage();

        Ready = false;

        FScopeLock lock(ROSNode->GetMutex());

        rcl_subscription = rcl_get_zero_initialized_subscription();
        const rosidl_message_type_support_t* type_support = TopicMessage->GetTypeSupport();
        rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();

        sub_opt.allocator = ROSNode->ROSSubsystem()->GetRclUEAllocator();
        
        if (bQosOverride) {
            sub_opt.qos = BuildQoSProfile(QosHistoryPolicy, QosDepth, QosReliabilityPolicy, QosDurabilityPolicy);
        } else {
            sub_opt.qos = QoSProfiles_LUT[QosProfilePreset];
        }

        UE_LOG(LogROS2Subscriber, Display, TEXT("[%s] Subscribing to topic %s"), *GetName(), *TopicName);
        RCSOFTCHECK(rcl_subscription_init(&rcl_subscription, ROSNode->GetRCLNode(), type_support, TCHAR_TO_UTF8(*TopicName), &sub_opt));

        ROSNode->InvalidateWaitSet();

        State = UROS2State::Initialized;
    }
}

void UROS2Subscriber::Destroy()
{
    UE_LOG(LogROS2Subscriber, Verbose, TEXT("Subscriber %s Destroy Start (%s)"), *GetName(), *__LOG_INFO__);
    if (TopicMessage != nullptr)
    {
        TopicMessage->Fini();
    }

    if (ROSNode != nullptr)
    {
        UE_LOG(LogROS2Subscriber, Verbose, TEXT("Subscriber Destroy - rcl_Subscriber_fini (%s)"), *__LOG_INFO__);
        RCSOFTCHECK(rcl_subscription_fini(&rcl_subscription, ROSNode->GetRCLNode()));
    }
    UE_LOG(LogROS2Subscriber, Display, TEXT("Subscriber %s Destroyed"), *GetName());
}

void UROS2Subscriber::InitializeMessage()
{
    check(TopicName != FString());
    check(TopicType);

    TopicMessage = NewObject<UROS2GenericMsg>(this, TopicType);
    check(IsValid(TopicMessage));
    TopicMessage->Init();
}

// void UROS2Subscriber::IncomingMessage_Implementation()
// {

// }