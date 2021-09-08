// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#include "ROS2Node.h"

#include "ROS2ActionClient.h"
#include "ROS2ActionServer.h"
#include "ROS2Publisher.h"
#include "ROS2ServiceClient.h"
#include "ROS2Subsystem.h"

#include <Kismet/GameplayStatics.h>

DEFINE_LOG_CATEGORY(LogROS2Node);

// Sets default values
AROS2Node::AROS2Node()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void AROS2Node::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (auto& s : Subscriptions)
	{
		RCSOFTCHECK(rcl_subscription_fini(&s.rcl_subscription, &node));
	}

	for (auto& s : Services)
	{
		RCSOFTCHECK(rcl_service_fini(&s.rcl_service, &node));
	}

	// this is better done with the component registering itself to the owner at creation
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

	UE_LOG(LogROS2Node, Log, TEXT("Node EndPlay - rcl_node_fini (%s)"), *__LOG_INFO__);
	RCSOFTCHECK(rcl_node_fini(&node));

	Super::EndPlay(EndPlayReason);
}

// Called every frame
void AROS2Node::Tick(float DeltaTime)
{
	check(State == UROS2State::Initialized);

	Super::Tick(DeltaTime);

	if (Subscriptions.Num() > 0 || Clients.Num() > 0 || Services.Num() > 0)
	{
		SpinSome();
	}
}

// this stuff can't be placed in BeginPlay as the order of rcl(c) instructions is relevant
void AROS2Node::Init()
{
	UE_LOG(LogROS2Node, Log, TEXT("%s"), *__LOG_INFO__);

	if (State == UROS2State::Created)
	{
		if (!rcl_node_is_valid(&node))	  // ensures that it stays safe when called multiple times
		{
			Support = GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetSupport();

			UE_LOG(LogROS2Node, Log, TEXT("rclc_node_init_default"));
			RCSOFTCHECK(rclc_node_init_default(
				&node, TCHAR_TO_UTF8(*Name), Namespace != FString() ? TCHAR_TO_UTF8(*Namespace) : "", &Support->Get()));
		}

		State = UROS2State::Initialized;
	}

	UE_LOG(LogROS2Node, Log, TEXT("%s - Done"), *__LOG_INFO__);
}

UROS2Support* AROS2Node::GetSupport()
{
	return Support;
}

rcl_node_t* AROS2Node::GetNode()
{
	return &node;
}

void AROS2Node::AddSubscription(const FString TopicName,
								const TSubclassOf<UROS2GenericMsg> MsgClass,
								const FSubscriptionCallback Callback)
{
	check(State == UROS2State::Initialized);

	bool SubExists = false;
	for (auto& s : Subscriptions)
	{
		SubExists |= (s.TopicName == TopicName);
	}

	check(!SubExists);

	if (!Callback.IsBound())
	{
		UE_LOG(LogROS2Node, Warning, TEXT("Callback is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	UROS2GenericMsg* TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);
	TopicMessage->Init();

	FSubscription NewSub;
	NewSub.TopicName = TopicName;
	NewSub.TopicType = MsgClass;
	NewSub.TopicMsg = TopicMessage;
	NewSub.Callback = Callback;
	NewSub.Ready = false;

	NewSub.rcl_subscription = rcl_get_zero_initialized_subscription();
	const rosidl_message_type_support_t* type_support = TopicMessage->GetTypeSupport();
	rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();
	RCSOFTCHECK(rcl_subscription_init(&NewSub.rcl_subscription, &node, type_support, TCHAR_TO_UTF8(*TopicName), &sub_opt));

	Subscriptions.Add(NewSub);

	// invalidate wait_set
	if (rcl_wait_set_is_valid(&wait_set))
	{
		RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
	}
}

void AROS2Node::AddService(const FString ServiceName, const TSubclassOf<UROS2GenericSrv> SrvClass, const FServiceCallback Callback)
{
	check(State == UROS2State::Initialized);

	if (!Callback.IsBound())
	{
		UE_LOG(LogROS2Node, Warning, TEXT("Callback is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	UROS2GenericSrv* Service = NewObject<UROS2GenericSrv>(this, SrvClass);
	Service->Init();

	FService NewSrv;
	NewSrv.ServiceName = ServiceName;
	NewSrv.ServiceType = SrvClass;
	NewSrv.Service = Service;
	NewSrv.Callback = Callback;
	NewSrv.Ready = false;

	NewSrv.rcl_service = rcl_get_zero_initialized_service();
	const rosidl_service_type_support_t* type_support = Service->GetTypeSupport();
	rcl_service_options_t srv_opt = rcl_service_get_default_options();
	RCSOFTCHECK(rcl_service_init(&NewSrv.rcl_service, &node, type_support, TCHAR_TO_UTF8(*ServiceName), &srv_opt));

	Services.Add(NewSrv);

	// invalidate wait_set
	if (rcl_wait_set_is_valid(&wait_set))
	{
		RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
	}
}

void AROS2Node::AddPublisher(UROS2Publisher* Publisher)
{
	check(IsValid(Publisher));

	if (!Publisher->UpdateDelegate.IsBound())
	{
		UE_LOG(LogROS2Node, Warning, TEXT("UpdateDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	Publisher->RegisterComponent();
	Publisher->OwnerNode = this;
	Publishers.Add(Publisher);
}

void AROS2Node::AddClient(UROS2ServiceClient* Client)
{
	check(IsValid(Client));

	if (!Client->RequestDelegate.IsBound())
	{
		UE_LOG(LogROS2Node, Warning, TEXT("RequestDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	if (!Client->AnswerDelegate.IsBound())
	{
		UE_LOG(LogROS2Node, Warning, TEXT("AnswerDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
	}

	Client->OwnerNode = this;
	Client->Init(UROS2QoS::Services);
	Clients.Add(Client);
}

void AROS2Node::AddActionClient(UROS2ActionClient* ActionClient)
{
	check(IsValid(ActionClient));

	ActionClient->OwnerNode = this;
	ActionClient->Init(UROS2QoS::Default);
	ActionClients.Add(ActionClient);
}

void AROS2Node::AddActionServer(UROS2ActionServer* ActionServer)
{
	check(IsValid(ActionServer));

	ActionServer->OwnerNode = this;
	ActionServer->Init(UROS2QoS::Default);
	ActionServers.Add(ActionServer);
}

void AROS2Node::HandleSubscriptions()
{
	// based on _rclc_default_scheduling
	for (int i = 0; i < wait_set.size_of_subscriptions; i++)
	{
		if (wait_set.subscriptions[i])	  // need to iterate on all subscriptions instead? since there's no index
		{
			const rcl_subscription_t* currentSub = wait_set.subscriptions[i];
			for (auto& s : Subscriptions)
			{
				if (&s.rcl_subscription == currentSub)
				{
					s.Ready = true;
				}
			}
		}
	}

	for (auto& s : Subscriptions)
	{
		if (s.Ready == true)
		{
			void* data = s.TopicMsg->Get();
			rmw_message_info_t messageInfo;
			RCSOFTCHECK(rcl_take(&s.rcl_subscription, data, &messageInfo, nullptr));

			const FSubscriptionCallback* SubCallback = &s.Callback;
			SubCallback->ExecuteIfBound(s.TopicMsg);

			s.Ready = false;
		}
	}
}

void AROS2Node::HandleServices()
{
	// is there a reason for handling it this way?
	// 1st find all ready elements and then process them
	// instead of just processing ready elements
	// current implementation is based on rclc executor
	for (int i = 0; i < wait_set.size_of_services; i++)
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
			// this should all go in the callback?
			// can't go in the callback unless the rcl functions are wrapped
			rmw_service_info_t req_info;
			void* data = s.Service->GetRequest();
			RCSOFTCHECK(rcl_take_request_with_info(&s.rcl_service, &req_info, data));

			UE_LOG(LogROS2Node, Log, TEXT("Executing Service (%s)"), *__LOG_INFO__);

			// there's a variant with req_id in the callback and one with context
			const FServiceCallback* SrvCallback = &s.Callback;
			SrvCallback->ExecuteIfBound(s.Service);

			RCSOFTCHECK(rcl_send_response(&s.rcl_service, &req_info.request_id, s.Service->GetResponse()));

			s.Ready = false;
		}
	}
}

void AROS2Node::HandleClients()
{
	// is there a reason for handling it this way?
	// 1st find all ready elements and then process them
	// instead of just processing ready elements
	// current implementation is based on rclc executor
	for (int i = 0; i < wait_set.size_of_clients; i++)
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
			// this should all go in the callback?
			// can't go in the callback unless the rcl functions are wrapped
			rmw_service_info_t req_info;
			void* data = c->Service->GetResponse();
			RCSOFTCHECK(rcl_take_response_with_info(&c->client, &req_info, data));

			UE_LOG(LogROS2Node, Log, TEXT("Executing Answer Delegate (%s)"), *__LOG_INFO__);

			// there's a variant with req_id in the callback
			const FServiceClientCallback* SrvClientCallback = &c->AnswerDelegate;
			SrvClientCallback->ExecuteIfBound(c->Service);

			c->Ready = false;
		}
	}
}

// modeled after executor + actions
void AROS2Node::SpinSome()
{
	if (!rcl_wait_set_is_valid(&wait_set))
	{
		RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
		wait_set = rcl_get_zero_initialized_wait_set();
		RCSOFTCHECK(rcl_wait_set_init(&wait_set,
									  Subscriptions.Num() + ActionClients.Num() * 2,
									  NGuardConditions,
									  NTimers + ActionServers.Num(),
									  Clients.Num() + ActionClients.Num() * 3,
									  Services.Num() + ActionServers.Num() * 3,
									  NEvents,
									  &Support->Get().context,
									  rcl_get_default_allocator()));
	}

	RCSOFTCHECK(rcl_wait_set_clear(&wait_set));

	for (auto& s : Subscriptions)
	{
		RCSOFTCHECK(rcl_wait_set_add_subscription(&wait_set, &s.rcl_subscription, nullptr));
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

	HandleSubscriptions();
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

// Queries/Diagnostics
const TMap<FString, FString> AROS2Node::GetListOfNodes()
{
	TMap<FString, FString> Result;

	rcutils_string_array_t NodeNames = rcutils_get_zero_initialized_string_array();
	rcutils_string_array_t NodeNamespaces = rcutils_get_zero_initialized_string_array();

	RCSOFTCHECK(rcl_get_node_names(&node, rcl_get_default_allocator(), &NodeNames, &NodeNamespaces));

	check(NodeNames.size == NodeNamespaces.size);
	for (int i = 0; i < NodeNames.size; i++)
	{
		if (NodeNames.data[i] != nullptr && NodeNamespaces.data[i] != nullptr && NodeNames.data[i][0] != '_')
		{
			Result.Add(FString(NodeNames.data[i]), FString(NodeNamespaces.data[i]));
		}
	}

	for (auto& pair : Result)
	{
		UE_LOG(LogROS2Node, Log, TEXT("Node: %s - Namespace: %s (%s)"), *pair.Key, *pair.Value, *__LOG_INFO__);
	}

	RCSOFTCHECK(rcutils_string_array_fini(&NodeNames));
	RCSOFTCHECK(rcutils_string_array_fini(&NodeNamespaces));

	return Result;
}

// need a way to convert the message type as well
const TMap<FString, FString> AROS2Node::GetListOfTopics()
{
	TMap<FString, FString> Result;

	rcl_names_and_types_t TopicNamesAndTypes = rcl_get_zero_initialized_names_and_types();
	rcl_allocator_t Allocator = rcl_get_default_allocator();

	RCSOFTCHECK(rcl_get_topic_names_and_types(&node, &Allocator, false, &TopicNamesAndTypes));

	for (int i = 0; i < TopicNamesAndTypes.names.size; i++)
	{
		if (TopicNamesAndTypes.names.data[i] != nullptr && TopicNamesAndTypes.types != nullptr &&
			TopicNamesAndTypes.types->data[i] != nullptr && TopicNamesAndTypes.types->size >= i)
		{
			Result.Add(FString(TopicNamesAndTypes.names.data[i]), FString(TopicNamesAndTypes.types->data[i]));
		}
	}

	for (auto& pair : Result)
	{
		UE_LOG(LogROS2Node, Log, TEXT("Topic: %s - MsgTypes: %s (%s)"), *pair.Key, *pair.Value, *__LOG_INFO__);
	}

	RCSOFTCHECK(rcl_names_and_types_fini(&TopicNamesAndTypes));

	return Result;
}

const TMap<FString, FString> AROS2Node::GetListOfServices()
{
	TMap<FString, FString> Result;

	return Result;
}
