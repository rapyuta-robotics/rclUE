// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Node.h"

#include "ROS2ActionClient.h"
#include "ROS2ActionServer.h"
#include "ROS2Publisher.h"
#include "ROS2Subscriber.h"
#include "ROS2ServiceClient.h"
#include "ROS2Support.h"

#include <Kismet/GameplayStatics.h>
#include "TimerManager.h"


DEFINE_LOG_CATEGORY(LogROS2Node);

AROS2Node::AROS2Node()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void AROS2Node::BeginPlay()
{
    if (InitialiseOnBeginPlay)
        Init();

    Super::BeginPlay();
}

void AROS2Node::BringDown()
{
    UE_LOG(LogROS2Node, Verbose, TEXT("[%s] Bring Down start"), *GetName());

    for (auto& s : Subscribers)
    {
        if (IsValid(s))
            s->Destroy();
    }

    for (auto& s : Services)
    {
        RCSOFTCHECK(rcl_service_fini(&s.rcl_service, GetRCLNode()));
    }

    for (auto& p : Publishers)
    {
        if (IsValid(p))
            p->Destroy();
    }

    TArray<UActorComponent*> PubComponents;
    GetComponents(UROS2Publisher::StaticClass(), PubComponents, true);
    for (auto& c : PubComponents)
    {
        UROS2Publisher* Pub = Cast<UROS2Publisher>(c);
        if (Pub != nullptr)
        {
            Pub->Destroy();
        }
    }

    RCSOFTCHECK(rcl_wait_set_fini(&wait_set));

    UE_LOG(LogROS2Node, Log, TEXT("[%s] Bring Down - rcl_node_fini"), *GetName());
    RCSOFTCHECK(rcl_node_fini(GetRCLNode()));
}

void AROS2Node::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    BringDown();
    Super::EndPlay(EndPlayReason);
}

void AROS2Node::Tick(float DeltaTime)
{
    if (State != UROS2State::Initialized)
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Tick reached but not initialised. Destroying... %s"), *GetName(), *__LOG_INFO__);
        Destroy();
        return;
    }

    Super::Tick(DeltaTime);

    if (Subscribers.Num() > 0 || Clients.Num() > 0 || Services.Num() > 0)
    {
        SpinSome();
    }
}

// TODO Move the rclc stuff to Subsystem
void AROS2Node::Init()
{
    if (State == UROS2State::Created)
    {
        UE_LOG(LogROS2Node, Verbose, TEXT("[%s] Initialising"), *GetName());

        Support = GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetSupport();

        FScopeLock lock(GetMutex());
        if (!rcl_node_is_valid(GetRCLNode()))
        {
            rcutils_reset_error();

            rcl_node_options_t node_ops = rcl_node_get_default_options();
            node_ops.allocator = ROSSubsystem()->GetRclUEAllocator();
            RCSOFTCHECK(rclc_node_init_with_options(GetRCLNode(), TCHAR_TO_UTF8(*Name), TCHAR_TO_UTF8(*Namespace), &Support->Get(), &node_ops));
            Support->RegisterNode(this);

            UE_LOG(LogROS2Node, Display, TEXT("[%s] Node started with name '%s'"), *GetName(), *Name);
        }

        State = UROS2State::Initialized;
        UE_LOG(LogROS2Node, Verbose, TEXT("[%s] initialize complete."), *GetName());

        // Create an event informing the node is initialised and ready for subs/pubs
        // do it next Tick so any binding to the event in OnBeginPlay will work
        GetWorld()->GetTimerManager().SetTimerForNextTick(
            FTimerDelegate::CreateLambda([this]
        {
            OnNodeInitialised.Broadcast();
        }));
        
    } else {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Initialised called on already initialised Node (%s)"), *GetName(), *__LOG_INFO__);
    }
}

void AROS2Node::AddSubscriber(UROS2Subscriber* Subscriber)
{
    if (!IsValid(Subscriber))
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Invalid subscriber '%s' provided (%s)"), *GetName(), *Subscriber->GetName(), *__LOG_INFO__);
        return;
    }

    if (State != UROS2State::Initialized) {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Tried to add subscriber '%s' to uninitialised node (%s)"), *GetName(), *Subscriber->GetName(), *__LOG_INFO__);
        return;
    }

    if (!Subscribers.Contains(Subscriber))
    {
        if (!Subscriber->IsRegistered())
        {
            Subscriber->RegisterComponent();
        }
        Subscriber->ROSNode = this;
        Subscribers.Add(Subscriber);
        Subscriber->Init();
    }
    else
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Attempt to re-add Publisher %s (%s)"), *GetName(), *Subscriber->GetName(), *__LOG_INFO__);
    }
}

void AROS2Node::AddServiceServer(const FString& ServiceName,
                                 const TSubclassOf<UROS2GenericSrv> SrvClass,
                                 const FServiceCallback& Callback)
{
    check(State == UROS2State::Initialized);

    if (!Callback.IsBound())
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] Callback is not set (%s)"), *GetName(), *__LOG_INFO__);
    }

    UROS2GenericSrv* Service = NewObject<UROS2GenericSrv>(this, SrvClass);
    Service->Init();

    FService NewSrv;
    NewSrv.ServiceName = ServiceName;
    NewSrv.ServiceType = SrvClass;
    NewSrv.Service = Service;
    NewSrv.Callback = Callback;
    NewSrv.Ready = false;

    FScopeLock lock(GetMutex());

    NewSrv.rcl_service = rcl_get_zero_initialized_service();
    const rosidl_service_type_support_t* type_support = Service->GetTypeSupport();
    rcl_service_options_t srv_opt = rcl_service_get_default_options();
    srv_opt.allocator = ROSSubsystem()->GetRclUEAllocator();
    RCSOFTCHECK(rcl_service_init(&NewSrv.rcl_service, GetRCLNode(), type_support, TCHAR_TO_UTF8(*ServiceName), &srv_opt));

    Services.Emplace(MoveTemp(NewSrv));

    InvalidateWaitSet();
}

void AROS2Node::AddPublisher(UROS2Publisher* InPublisher)
{
    if (!IsValid(InPublisher))
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Invalid publisher '%s' provided (%s)"), *GetName(), *InPublisher->GetName(), *__LOG_INFO__);
        return;
    }

    if (State != UROS2State::Initialized) {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Tried to add publisher '%s' to uninitialised node (%s)"), *GetName(), *InPublisher->GetName(), *__LOG_INFO__);
        return;
    }

    if (false == Publishers.Contains(InPublisher))
    {
        if (!InPublisher->IsRegistered())
        {
            InPublisher->RegisterComponent();
        }
        InPublisher->ROSNode = this;
        Publishers.Add(InPublisher);
        InPublisher->Init();
    }
    else
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] Attempt to re-add publisher '%s' (%s)"), *GetName(), *InPublisher->GetName(), *__LOG_INFO__);
    }
}

void AROS2Node::AddServiceClient(UROS2ServiceClient* InClient)
{
    check(IsValid(InClient));

    if (!InClient->RequestDelegate.IsBound())
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] RequestDelegate is not set (%s)"), *GetName(), *__LOG_INFO__);
    }

    if (!InClient->AnswerDelegate.IsBound())
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] AnswerDelegate is not set (%s)"), *GetName(), *__LOG_INFO__);
    }

    if (false == Clients.Contains(InClient))
    {
        InClient->ROSNode = this;
        InClient->Init(UROS2QoS::Services);
        Clients.Add(InClient);
    }
    else
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] ServiceClient is re-added (%s)"), *GetName(), *__LOG_INFO__);
    }
}

void AROS2Node::AddActionClient(UROS2ActionClient* InActionClient)
{
    check(IsValid(InActionClient));

    if (false == ActionClients.Contains(InActionClient))
    {
        InActionClient->ROSNode = this;
        InActionClient->Init(UROS2QoS::Default);
        ActionClients.Add(InActionClient);
    }
    else
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] ActionClient is re-added (%s)"), *GetName(), *__LOG_INFO__);
    }
}

void AROS2Node::AddActionServer(UROS2ActionServer* InActionServer)
{
    check(IsValid(InActionServer));

    if (false == ActionServers.Contains(InActionServer))
    {
        InActionServer->ROSNode = this;
        InActionServer->Init(UROS2QoS::Default);
        ActionServers.Add(InActionServer);
    }
    else
    {
        UE_LOG(LogROS2Node, Error, TEXT("[%s] ActionServer is re-added (%s)"), *GetName(), *__LOG_INFO__);
    }
}

void AROS2Node::HandleSubscribers()
{
    for (auto i = 0; i < wait_set.size_of_subscriptions; i++)
    {
        if (wait_set.subscriptions[i])
        {
            const rcl_subscription_t* currentSub = wait_set.subscriptions[i];
            for (auto& s : Subscribers)
            {
                if (&s->rcl_subscription == currentSub)
                {
                    s->Ready = true;
                }
            }
        }
    }

    for (auto& s : Subscribers)
    {
        if (s->Ready)
        {
            void* data = s->TopicMessage->Get();
            rmw_message_info_t messageInfo;
            rcl_ret_t rc_take;

            {  // rcl_take may or may not be threadsafe. Comments in RCL indicate they don't even know...
                FScopeLock lock(GetMutex());
                rc_take = rcl_take(&s->rcl_subscription, data, &messageInfo, nullptr);
            }

            if (rc_take == RCL_RET_OK) {
                s->IncomingMessage(s->TopicMessage);
            } else if (rc_take == RCL_RET_SUBSCRIPTION_TAKE_FAILED) {
                UE_LOG(LogROS2Node, Warning, TEXT("[%s] Subscription take failed (%s)"), *GetName(), *__LOG_INFO__);
            } else {
                RCSOFTCHECK(rc_take);
            }

            s->Ready = false;
        }
    }
}

void AROS2Node::HandleServices()
{
    for (auto i = 0; i < wait_set.size_of_services; i++)
    {
        if (wait_set.services[i])
        {
            const rcl_service_t* currentService = wait_set.services[i];
            for (auto& s : Services)
            {
                if (&s.rcl_service == currentService)
                {
                    s.Ready = true;
                }
            }
        }
    }

    for (auto& s : Services)
    {
        if (s.Ready == true)
        {
            rmw_service_info_t req_info;
            void* data = s.Service->GetRequest();
            RCSOFTCHECK(rcl_take_request_with_info(&s.rcl_service, &req_info, data));

            UE_LOG(LogROS2Node, Log, TEXT("[%s] Executing Service (%s)"), *GetName(), *__LOG_INFO__);

            const FServiceCallback* SrvCallback = &s.Callback;
            SrvCallback->ExecuteIfBound(s.Service);

            RCSOFTCHECK(rcl_send_response(&s.rcl_service, &req_info.request_id, s.Service->GetResponse()));

            s.Ready = false;
        }
    }
}

void AROS2Node::HandleClients()
{
    for (auto i = 0; i < wait_set.size_of_clients; i++)
    {
        if (wait_set.clients[i])
        {
            const rcl_client_t* current_client = wait_set.clients[i];
            for (auto& c : Clients)
            {
                if (&c->client == current_client)
                {
                    c->Ready = true;
                }
            }
        }
    }

    for (auto& c : Clients)
    {
        if (c->Ready == true)
        {
            rmw_service_info_t req_info;
            void* data = c->Service->GetResponse();
            RCSOFTCHECK(rcl_take_response_with_info(&c->client, &req_info, data));

            UE_LOG(LogROS2Node,
                   Log,
                   TEXT("[%s] Executing Answer Delegate for Service Client (%s)"),
                   *GetName(),
                   *__LOG_INFO__);

            const FServiceClientCallback* SrvClientCallback = &c->AnswerDelegate;
            SrvClientCallback->ExecuteIfBound(c->Service);

            c->Ready = false;
        }
    }
}

void AROS2Node::InvalidateWaitSet() {
    if (rcl_wait_set_is_valid(&wait_set))
    {
        RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
    }
}

void AROS2Node::SpinSome()
{
    {
        FScopeLock lock(GetMutex());

        if (!rcl_wait_set_is_valid(&wait_set))
        {
            RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
            wait_set = rcl_get_zero_initialized_wait_set();
            RCSOFTCHECK(rcl_wait_set_init(&wait_set,
                                        Subscribers.Num() + ActionClients.Num() * 2,
                                        NGuardConditions,
                                        NTimers + ActionServers.Num(),
                                        Clients.Num() + ActionClients.Num() * 3,
                                        Services.Num() + ActionServers.Num() * 3,
                                        NEvents,
                                        &Support->Get().context,
                                        ROSSubsystem()->GetRclUEAllocator()));
        }

        RCSOFTCHECK(rcl_wait_set_clear(&wait_set));

        for (auto& s : Subscribers)
        {
            RCSOFTCHECK(rcl_wait_set_add_subscription(&wait_set, &s->rcl_subscription, nullptr));
        }

        for (auto& c : Clients)
        {
            RCSOFTCHECK(rcl_wait_set_add_client(&wait_set, &c->client, nullptr));
        }

        for (auto& s : Services)
        {
            RCSOFTCHECK(rcl_wait_set_add_service(&wait_set, &s.rcl_service, nullptr));
        }

        for (auto& a : ActionClients)
        {
            RCSOFTCHECK(rcl_action_wait_set_add_action_client(&wait_set, &a->client, nullptr, nullptr));
        }

        for (auto& a : ActionServers)
        {
            RCSOFTCHECK(rcl_action_wait_set_add_action_server(&wait_set, &a->server, nullptr));
        }

        rcl_ret_t rc = rcl_wait(&wait_set, 0);
        RCLC_UNUSED(rc);
    }

    HandleSubscribers();
    HandleServices();
    HandleClients();

    for (auto& a : ActionServers)
    {
        a->ProcessReady(&wait_set);
    }

    for (auto& a : ActionClients)
    {
        a->ProcessReady(&wait_set);
    }
}