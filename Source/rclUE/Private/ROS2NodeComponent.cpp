// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2NodeComponent.h"

#include "ROS2Subsystem.h"

#include <Engine/GameInstance.h>
#include <Kismet/GameplayStatics.h>

DEFINE_LOG_CATEGORY(LogROS2Node);

UROS2NodeComponent* UROS2NodeComponent::CreateNewNode(UObject* InOwner,
                                                      const FString& InNodeName,
                                                      const FString& InNodeNamespace,
                                                      const FString& InCompName,
                                                      bool Init)
{
    UROS2NodeComponent* node = NewObject<UROS2NodeComponent>(InOwner, UROS2NodeComponent::StaticClass(), FName(*InCompName));
    node->RegisterComponent();
    node->Name = InNodeName;
    node->Namespace = InNodeNamespace;
    if (Init)
    {
        node->Init();
    }
    return node;
}

UROS2NodeComponent::UROS2NodeComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UROS2NodeComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    for (auto& c : Subscriptions)
    {
        c->Destroy();
    }

    for (auto& c : Publishers)
    {
        c->Destroy();
    }
    for (auto& c : ServiceServers)
    {
        c->Destroy();
    }

    for (auto& c : ServiceClients)
    {
        c->Destroy();
    }

    for (auto& c : ActionServers)
    {
        c->Destroy();
    }

    for (auto& c : ActionClients)
    {
        c->Destroy();
    }

    RCSOFTCHECK(rcl_wait_set_fini(&wait_set));

    UE_LOG(LogROS2Node, Log, TEXT("[%s] ROS2Node EndPlay - rcl_node_fini"), *GetName());
    RCSOFTCHECK(rcl_node_fini(&node));

    Super::EndPlay(EndPlayReason);
}

void UROS2NodeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    check(State == UROS2State::Initialized);

    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (Subscriptions.Num() > 0 || ServiceClients.Num() > 0 || ServiceServers.Num() > 0 || ActionClients.Num() > 0 ||
        ActionServers.Num() > 0)
    {
        SpinSome();
    }
}

// This can't be pre-placed in UROS2NodeComponent::BeginPlay() as the order of rcl(c) instructions could be
// different/relevant in each of Child classes
void UROS2NodeComponent::Init()
{
    this->RegisterComponent();
    if (State == UROS2State::Created)
    {
        UE_LOG(LogROS2Node, Log, TEXT("[%s] start initializing.."), *GetName());
        if (!rcl_node_is_valid(&node))    // ensures that it stays safe when called multiple times
        {
            Support = GetWorld()->GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetSupport();

            UE_LOG(LogROS2Node, Log, TEXT("[%s] rclc_node_init_default"), *GetName());
            node = rcl_get_zero_initialized_node();
            RCSOFTCHECK(rclc_node_init_default(&node, TCHAR_TO_UTF8(*Name), TCHAR_TO_UTF8(*Namespace), &Support->Get()));
        }

        State = UROS2State::Initialized;
    }

    UE_LOG(LogROS2Node, Log, TEXT("[%s] ROS2Node inited"), *GetName());
}

rcl_node_t* UROS2NodeComponent::GetNode()
{
    return &node;
}

// Publisher////////////////////
void UROS2NodeComponent::AddPublisher(UROS2Publisher* InPublisher)
{
    check(IsValid(InPublisher));

    if (false == Publishers.Contains(InPublisher))
    {
        InPublisher->RegisterComponent();
        InPublisher->InitializeWithROS2(this);
        Publishers.Add(InPublisher);
    }
    else
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] Publisher is re-added (%s)"), *InPublisher->GetName(), *__LOG_INFO__);
    }
}

UROS2Publisher* UROS2NodeComponent::CreateLoopPublisherWithClass(const FString& InTopicName,
                                                                 const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                                 const float InPubFrequency)
{
    UROS2Publisher* publisher = NewObject<UROS2Publisher>(this, InPublisherClass);
    publisher->TopicName = InTopicName;
    publisher->PublicationFrequencyHz = InPubFrequency;
    publisher->SetDefaultDelegates();
    AddPublisher(publisher);
    return publisher;
}

UROS2Publisher* UROS2NodeComponent::CreateLoopPublisher(const FString& InTopicName,
                                                        const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                        const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                        const float InPubFrequency,
                                                        const FTopicCallback& InUpdateDelegate,
                                                        const TEnumAsByte<UROS2QoS> InQoS)
{
    UROS2Publisher* publisher = NewObject<UROS2Publisher>(this, InPublisherClass);
    publisher->MsgClass = InMsgClass;
    publisher->TopicName = InTopicName;
    publisher->QoS = InQoS;
    publisher->PublicationFrequencyHz = InPubFrequency;
    publisher->SetDelegates(InUpdateDelegate);
    AddPublisher(publisher);
    return publisher;
}

UROS2Publisher* UROS2NodeComponent::CreatePublisherWithClass(const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                             const FString& InTopicName)
{
    UROS2Publisher* publisher = NewObject<UROS2Publisher>(this, InPublisherClass);
    if (!InTopicName.IsEmpty())
    {
        publisher->TopicName = InTopicName;
    }
    AddPublisher(publisher);
    return publisher;
}

UROS2Publisher* UROS2NodeComponent::CreatePublisher(const FString& InTopicName,
                                                    const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                    const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                    const TEnumAsByte<UROS2QoS> InQoS)
{
    UROS2Publisher* publisher = NewObject<UROS2Publisher>(this, InPublisherClass);
    publisher->MsgClass = InMsgClass;
    publisher->TopicName = InTopicName;
    publisher->QoS = InQoS;
    publisher->PublicationFrequencyHz = -1;
    AddPublisher(publisher);
    return publisher;
}

// Subscriber////////////////////
void UROS2NodeComponent::AddSubscription(UROS2Subscriber* InSubscriber)
{
    check(IsValid(InSubscriber));

    if (false == Subscriptions.Contains(InSubscriber))
    {
        InSubscriber->RegisterComponent();
        InSubscriber->InitializeWithROS2(this);
        Subscriptions.Add(InSubscriber);
        InvalidateWaitSet();
    }
    else
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] Subscriber is re-added (%s)"), *InSubscriber->GetName(), *__LOG_INFO__);
    }
}

UROS2Subscriber* UROS2NodeComponent::CreateSubscriber(const FString& InTopicName,
                                                      const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                                      const FSubscriptionCallback& InCallback,
                                                      const TEnumAsByte<UROS2QoS> InQoS)
{
    UROS2Subscriber* subscriber = NewObject<UROS2Subscriber>(this);
    subscriber->MsgClass = InMsgClass;
    subscriber->TopicName = InTopicName;
    subscriber->Callback = InCallback;
    subscriber->QoS = InQoS;
    AddSubscription(subscriber);
    return subscriber;
}

//service client
void UROS2NodeComponent::AddServiceClient(UROS2ServiceClient* InServiceClient)
{
    check(IsValid(InServiceClient));
    if (false == ServiceClients.Contains(InServiceClient))
    {
        InServiceClient->RegisterComponent();
        InServiceClient->InitializeWithROS2(this);
        ServiceClients.Add(InServiceClient);
        InvalidateWaitSet();
    }
    else
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] ServiceClient is re-added (%s)"), *GetName(), *__LOG_INFO__);
    }
}

UROS2ServiceClient* UROS2NodeComponent::CreateServiceClient(const FString& InServiceName,
                                                            const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                                            const FServiceCallback& InResponseDelegate,
                                                            const TEnumAsByte<UROS2QoS> InQoS)
{
    UROS2ServiceClient* client = NewObject<UROS2ServiceClient>(this);
    client->SrvClass = InSrvClass;
    client->ServiceName = InServiceName;
    client->QoS = InQoS;
    client->SetDelegates(InResponseDelegate);
    AddServiceClient(client);
    return client;
}

//service server
void UROS2NodeComponent::AddServiceServer(UROS2ServiceServer* InServiceServer)
{
    check(IsValid(InServiceServer));
    if (false == ServiceServers.Contains(InServiceServer))
    {
        InServiceServer->RegisterComponent();
        InServiceServer->InitializeWithROS2(this);
        ServiceServers.Add(InServiceServer);
        InvalidateWaitSet();
    }
    else
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] ServiceServer is re-added (%s)"), *GetName(), *__LOG_INFO__);
    }
}

UROS2ServiceServer* UROS2NodeComponent::CreateServiceServer(const FString& InServiceName,
                                                            const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                                            const FServiceCallback& InCallback,
                                                            const TEnumAsByte<UROS2QoS> InQoS)

{
    UROS2ServiceServer* server = NewObject<UROS2ServiceServer>(this);
    server->SrvClass = InSrvClass;
    server->ServiceName = InServiceName;
    server->QoS = InQoS;
    server->SrvCallback = InCallback;
    AddServiceServer(server);
    return server;
}

//action client
void UROS2NodeComponent::AddActionClient(UROS2ActionClient* InActionClient)
{
    check(IsValid(InActionClient));

    if (false == ActionClients.Contains(InActionClient))
    {
        InActionClient->RegisterComponent();
        InActionClient->InitializeWithROS2(this);
        ActionClients.Add(InActionClient);
        InvalidateWaitSet();
    }
    else
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] ActionClient is re-added (%s)"), *GetName(), *__LOG_INFO__);
    }
}

UROS2ActionClient* UROS2NodeComponent::CreateActionClient(const FString& InActionName,
                                                          const TSubclassOf<UROS2GenericAction>& InActionClass,
                                                          const FActionCallback& InGoalResponseDelegate,
                                                          const FActionCallback& InResultResponseDelegate,
                                                          const FActionCallback& InFeedbackDelegate,
                                                          const FSimpleCallback& InCancelResponseDelegate,
                                                          const TEnumAsByte<UROS2QoS> InGoalQoS,
                                                          const TEnumAsByte<UROS2QoS> InResultQoS,
                                                          const TEnumAsByte<UROS2QoS> InFeedbackQoS,
                                                          const TEnumAsByte<UROS2QoS> InCancelQoS)
{
    UROS2ActionClient* client = NewObject<UROS2ActionClient>(this);
    client->ActionClass = InActionClass;
    client->ActionName = InActionName;
    client->GoalQoS = InGoalQoS;
    client->ResultQoS = InResultQoS;
    client->FeedbackQoS = InFeedbackQoS;
    client->CancelQoS = InCancelQoS;
    client->SetDelegates(InFeedbackDelegate, InResultResponseDelegate, InGoalResponseDelegate, InCancelResponseDelegate);
    AddActionClient(client);
    return client;
}

void UROS2NodeComponent::AddActionServer(UROS2ActionServer* InActionServer)
{
    check(IsValid(InActionServer));

    if (false == ActionServers.Contains(InActionServer))
    {
        InActionServer->RegisterComponent();
        InActionServer->InitializeWithROS2(this);
        ActionServers.Add(InActionServer);
        InvalidateWaitSet();
    }
    else
    {
        UE_LOG(LogROS2Node, Warning, TEXT("[%s] ActionServer is re-added (%s)"), *GetName(), *__LOG_INFO__);
    }
}

UROS2ActionServer* UROS2NodeComponent::CreateActionServer(const FString& InActionName,
                                                          const TSubclassOf<UROS2GenericAction>& InActionClass,
                                                          const FActionCallback& InGoalDelegate,
                                                          const FSimpleCallback& InResultDelegate,
                                                          const FSimpleCallback& InCancelDelegate,
                                                          const TEnumAsByte<UROS2QoS> InGoalQoS,
                                                          const TEnumAsByte<UROS2QoS> InResultQoS,
                                                          const TEnumAsByte<UROS2QoS> InFeedbackQoS,
                                                          const TEnumAsByte<UROS2QoS> InCancelQoS)
{
    UROS2ActionServer* server = NewObject<UROS2ActionServer>(this);
    server->ActionClass = InActionClass;
    server->ActionName = InActionName;
    server->GoalQoS = InGoalQoS;
    server->ResultQoS = InResultQoS;
    server->FeedbackQoS = InFeedbackQoS;
    server->CancelQoS = InCancelQoS;
    server->SetDelegates(InGoalDelegate, InCancelDelegate, InResultDelegate);
    AddActionServer(server);
    return server;
}

void UROS2NodeComponent::HandleSubscriptions()
{
    for (auto i = 0; i < wait_set.size_of_subscriptions; i++)
    {
        if (wait_set.subscriptions[i])
        {
            const rcl_subscription_t* currentSub = wait_set.subscriptions[i];
            for (auto& s : Subscriptions)
            {
                if (&s->rcl_subscription == currentSub)
                {
                    s->Ready = true;
                }
            }
        }
    }

    for (auto& s : Subscriptions)
    {
        s->ProcessReady();
    }
}

void UROS2NodeComponent::HandleServiceServers()
{
    for (auto i = 0; i < wait_set.size_of_services; i++)
    {
        if (wait_set.services[i])
        {
            const rcl_service_t* currentService = wait_set.services[i];
            for (auto& s : ServiceServers)
            {
                if (&s->rcl_service == currentService)
                {
                    s->Ready = true;
                }
            }
        }
    }

    for (auto& s : ServiceServers)
    {
        s->ProcessReady();
    }
}

void UROS2NodeComponent::HandleServiceClients()
{
    for (auto i = 0; i < wait_set.size_of_clients; i++)
    {
        if (wait_set.clients[i])
        {
            const rcl_client_t* current_client = wait_set.clients[i];
            for (auto& c : ServiceClients)
            {
                if (&c->client == current_client)
                {
                    c->Ready = true;
                }
            }
        }
    }

    for (auto& c : ServiceClients)
    {
        c->ProcessReady();
    }
}

void UROS2NodeComponent::HandleActionClients()
{
    for (auto& a : ActionClients)
    {
        a->ProcessReady(&wait_set);
    }
}

void UROS2NodeComponent::HandleActionServers()
{
    for (auto& a : ActionServers)
    {
        a->ProcessReady(&wait_set);
    }
}

void UROS2NodeComponent::SpinSome()
{
    // ref
    // action: rcl_action_wait_set_add_action_server.
    // https://github.com/ros2/rcl/blob/3eb0f7536e9023c1af3dd2a6eefcfc11bd20129e/rcl_action/src/rcl_action/action_server.c#L956
    if (!rcl_wait_set_is_valid(&wait_set))
    {
        RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
        wait_set = rcl_get_zero_initialized_wait_set();
        RCSOFTCHECK(rcl_wait_set_init(&wait_set,
                                      Subscriptions.Num() + ActionClients.Num() * 2,    // action feedback and status
                                      NGuardConditions,
                                      NTimers + ActionServers.Num(),                     // action timeout
                                      ServiceClients.Num() + ActionClients.Num() * 3,    // action goal, cancel and result
                                      ServiceServers.Num() + ActionServers.Num() * 3,    // action goal, cancel and result
                                      NEvents,
                                      &Support->Get().context,
                                      rcl_get_default_allocator()));
    }

    RCSOFTCHECK(rcl_wait_set_clear(&wait_set));

    // todo add timer for action
    for (auto& s : Subscriptions)
    {
        RCSOFTCHECK(rcl_wait_set_add_subscription(&wait_set, &s->rcl_subscription, nullptr));
    }

    for (auto& c : ServiceClients)
    {
        RCSOFTCHECK(rcl_wait_set_add_client(&wait_set, &c->client, nullptr));
    }

    for (auto& s : ServiceServers)
    {
        RCSOFTCHECK(rcl_wait_set_add_service(&wait_set, &s->rcl_service, nullptr));
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

    HandleSubscriptions();
    HandleServiceServers();
    HandleServiceClients();
    HandleActionClients();
    HandleActionServers();
}

void UROS2NodeComponent::InvalidateWaitSet()
{
    // invalidate wait_set so that in next spin_some() call the
    // 'executor->wait_set' is updated accordingly
    if (rcl_wait_set_is_valid(&wait_set))
    {
        RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
    }
}
