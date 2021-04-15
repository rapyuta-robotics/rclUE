// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Node.h"
#include "ROS2Subsystem.h"
#include "ROS2Publisher.h"
#include "ROS2ServiceClient.h"

#include <rcl/graph.h>

#include "Kismet/GameplayStatics.h"


// Sets default values
AROS2Node::AROS2Node()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

AROS2Node::~AROS2Node()
{
	UE_LOG(LogTemp, Error, TEXT("UROS2LaserScanMsg::~UROS2LaserScanMsg"));
}

// Called when the game starts or when spawned
void AROS2Node::BeginPlay()
{
	//UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay"));
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay - Done"));
}

void AROS2Node::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// this is called before the components
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));

	for (auto& s : Subscriptions)
	{
		RCSOFTCHECK(rcl_subscription_fini(&s.RCLSubscription, &node));
	}

	// this is better done with the component registering itself to the owner at creation
	TArray<UActorComponent*> pubComponents;
	GetComponents(UROS2Publisher::StaticClass(), pubComponents, true);
	for (auto& c : pubComponents)
	{
		UROS2Publisher* pub = Cast<UROS2Publisher>(c);
		if (pub != nullptr)
		{
			pub->Destroy();
		}
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Node EndPlay - rcl_node_fini"));
	RCSOFTCHECK(rcl_node_fini(&node));

	Super::EndPlay(EndPlayReason);
    //UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}

// Called every frame
void AROS2Node::Tick(float DeltaTime)
{
	check(State == UROS2State::Initialized);

	Super::Tick(DeltaTime);

	if (Subscriptions.Num() > 0 || NClients > 0 || NServices > 0)
	{
		SpinSome();
	}
}

// this stuff can't be placed in BeginPlay as the order of rcl(c) instructions is relevant
void AROS2Node::Init()
{
    UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));

	if (State == UROS2State::Created)
	{
		if (!rcl_node_is_valid(&node)) // ensures that it stays safe when called multiple times
		{
			context = GWorld->GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetContext();
			
			UE_LOG(LogTemp, Warning, TEXT("Node Init - rclc_node_init_default"));
			RCSOFTCHECK(rclc_node_init_default(&node, TCHAR_TO_ANSI(*Name), Namespace != FString() ? TCHAR_TO_ANSI(*Namespace) : "", &context->Get()));
		}

		State = UROS2State::Initialized;
	}

    UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}

UROS2Context* AROS2Node::GetContext()
{
	return context;
}

rcl_node_t* AROS2Node::GetNode()
{
	return &node;
}

void AROS2Node::AddSubscription(FString TopicName, TSubclassOf<UROS2GenericMsg> MsgClass, FSubscriptionCallback Callback)
{
	UROS2GenericMsg* TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);
	TopicMessage->Init();

	FSubscription NewSub;
	NewSub.TopicName = TopicName;
	NewSub.TopicType = MsgClass;
	NewSub.TopicMsg = TopicMessage;
	NewSub.Callback = Callback;
	NewSub.Ready = false;

	NewSub.RCLSubscription = rcl_get_zero_initialized_subscription();
	const rosidl_message_type_support_t * type_support = TopicMessage->GetTypeSupport();
	rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();
	RCSOFTCHECK(rcl_subscription_init(&NewSub.RCLSubscription, &node, type_support, TCHAR_TO_ANSI(*TopicName), &sub_opt));
	
	Subscriptions.Add(NewSub);

	// invalidate wait_set
	if (rcl_wait_set_is_valid(&wait_set))
	{
    	RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
    }
}

void AROS2Node::CreateServices()
{
	check(State == UROS2State::Initialized);
			
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	for (auto& e : ServicesToProvide)
	{
		UROS2GenericSrv *Service = NewObject<UROS2GenericSrv>(this, e.Value);

		if (ensure(IsValid(Service)))
		{
			Service->Init();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Service (%s) is nullptr!"), *e.Key);
		}

		if (!services.Contains(Service))
		{
			services.Add(Service, rcl_get_zero_initialized_service());
			FServiceCallback *cb = ServicesToCallback.Find(e.Key);

			if (ensure(cb))
			{
				srvCallbacks.Add(Service, *cb);
			}

			const rosidl_service_type_support_t * type_support = Service->GetTypeSupport();
			rcl_service_options_t srv_opt = rcl_service_get_default_options();
			RCSOFTCHECK(rcl_service_init(&services[Service], &node, type_support, TCHAR_TO_ANSI(*e.Key), &srv_opt));
			NServices++;
		}
	}

	// invalidate wait_set
	if (rcl_wait_set_is_valid(&wait_set))
	{
    	RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
    }

	UE_LOG(LogTemp, Warning, TEXT("%s - Done"), *FString(__FUNCTION__));
}

void AROS2Node::SpinSome()
{
	//NSpinCalls++;
	if (!rcl_wait_set_is_valid(&wait_set))
	{
    	RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
		wait_set = rcl_get_zero_initialized_wait_set();
		RCSOFTCHECK(rcl_wait_set_init(&wait_set,
									Subscriptions.Num(), NGuardConditions, NTimers, NClients, NServices, NEvents, 
									&context->Get().context, rcl_get_default_allocator()));
	}
	//UE_LOG(LogTemp, Warning, TEXT("Spin Some - %d subs, %d clients, %d services"), wait_set.size_of_subscriptions, wait_set.size_of_clients, wait_set.size_of_services);
	
	RCSOFTCHECK(rcl_wait_set_clear(&wait_set));

	for (auto& s : Subscriptions)
	{
		RCSOFTCHECK(rcl_wait_set_add_subscription(&wait_set, &s.RCLSubscription, nullptr));
	}

	for (auto& c : srvClients)
	{
		RCSOFTCHECK(rcl_wait_set_add_client(&wait_set, &c->client, nullptr));
	}

	for (auto& pair : services)
	{
		RCSOFTCHECK(rcl_wait_set_add_service(&wait_set, &pair.Value, nullptr));
	}

	// rcl_action_wait_set_add_action_client
	// rcl_action_wait_set_add_action_server

	rcl_ret_t rc = rcl_wait(&wait_set, 0);
  	RCLC_UNUSED(rc);

	// based on _rclc_default_scheduling
	for (int i=0; i<wait_set.size_of_subscriptions; i++)
	{
		if (wait_set.subscriptions[i]) // need to iterate on all subscriptions instead? since there's no index
		{
			const rcl_subscription_t* currentSub = wait_set.subscriptions[i];
			for (auto& s : Subscriptions)
			{
				if (&s.RCLSubscription == currentSub)
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
			void * data = s.TopicMsg->Get();
			rmw_message_info_t messageInfo;
			rc = rcl_take(&s.RCLSubscription, data, &messageInfo, NULL);

			FSubscriptionCallback *cb = &s.Callback;

			if (cb)
			{
				cb->ExecuteIfBound(s.TopicMsg);
			}

			s.Ready = false;
		}
	}

	TMap<UROS2GenericSrv *, rcl_service_t> readyServices;
	for (int i=0; i<wait_set.size_of_services; i++)
	{
		if (wait_set.services[i])
		{
			const rcl_service_t* currentService = wait_set.services[i];
			for (auto& pair : services)
			{
				if (&pair.Value == currentService)
				{
					readyServices.Add(pair);
				}
			}
		}
	}

	for (auto& pair : readyServices)
	{	
		// this should all go in the callback?
		// can't go in the callback unless the rcl functions are wrapped
		rmw_service_info_t req_info;
		void * data = pair.Key->GetRequest();
		rc = rcl_take_request_with_info(&pair.Value, &req_info, data);
		
    	UE_LOG(LogTemp, Warning, TEXT("Executing Service"));
		pair.Key->PrintRequestToLog(rc, Name);

		// there's a variant with req_id in the callback and one with context
		FServiceCallback *cb = srvCallbacks.Find(pair.Key);

		if (cb)
		{
			cb->ExecuteIfBound(pair.Key);
		}

		rc = rcl_send_response(&pair.Value, &req_info.request_id, pair.Key->GetResponse());
	}

	TArray<UROS2ServiceClient *> readyClients;
	for (int i=0; i<wait_set.size_of_clients; i++)
	{
		if (wait_set.clients[i])
		{
			const rcl_client_t* currentClient = wait_set.clients[i];
			for (auto& c : srvClients)
			{
				if (&c->client == currentClient)
				{
					readyClients.Add(c);
				}
			}
		}
	}

	for (auto& c : readyClients)
	{	
		// this should all go in the callback?
		// can't go in the callback unless the rcl functions are wrapped
		rmw_service_info_t req_info;
		void * data = c->Service->GetResponse();
		rc = rcl_take_response_with_info(&c->client, &req_info, data);
		
    	UE_LOG(LogTemp, Warning, TEXT("Executing Answer Delegate"));

		// there's a variant with req_id in the callback
		FServiceClientCallback *cb = &c->AnswerDelegate;

		if (cb)
		{
			cb->ExecuteIfBound(c->Service);
		}
	}	
	
	//UE_LOG(LogTemp, Warning, TEXT("Spin Some - Done"));
}

void AROS2Node::AddPublisher(UROS2Publisher* Publisher)
{
	check(IsValid(Publisher));

	Publisher->RegisterComponent();
	Publisher->ownerNode = this;
	pubs.Add(Publisher);
}

void AROS2Node::AddClient(UROS2ServiceClient* Client)
{
	check(IsValid(Client));

	Client->RegisterComponent();
	Client->ownerNode = this;
	srvClients.Add(Client);
	NClients++;
}

void AROS2Node::AddService(FString ServiceName, TSubclassOf<UROS2GenericSrv> SrvClass, FServiceCallback Callback)
{
	ServicesToProvide.Add(ServiceName, SrvClass);
	ServicesToCallback.Add(ServiceName, Callback);
}


// Queries/Diagnostics
TMap<FString, FString> AROS2Node::GetListOfNodes()
{
	TMap<FString, FString> Result;

	rcutils_string_array_t NodeNames = rcutils_get_zero_initialized_string_array();
	rcutils_string_array_t NodeNamespaces = rcutils_get_zero_initialized_string_array();

	RCSOFTCHECK(rcl_get_node_names(&node, rcl_get_default_allocator(), &NodeNames, &NodeNamespaces));
	
	check(NodeNames.size == NodeNamespaces.size);
	for (int i=0; i<NodeNames.size; i++)
	{
		if (NodeNames.data[i] != nullptr && NodeNamespaces.data[i] != nullptr && NodeNames.data[i][0] != '_')
		{
			Result.Add(FString(NodeNames.data[i]), FString(NodeNamespaces.data[i]));
		}
	}

	for (auto& pair : Result)
	{
		UE_LOG(LogTemp, Warning, TEXT("Node: %s - Namespace: %s"), *pair.Key, *pair.Value);
	}

	RCSOFTCHECK(rcutils_string_array_fini(&NodeNames));
	RCSOFTCHECK(rcutils_string_array_fini(&NodeNamespaces));

	return Result;
}

// need a way to convert the message type as well
TMap<FString, FString> AROS2Node::GetListOfTopics()
{
	TMap<FString, FString> Result;

	rcl_names_and_types_t TopicNamesAndTypes = rcl_get_zero_initialized_names_and_types();
	rcl_allocator_t Allocator = rcl_get_default_allocator();

	RCSOFTCHECK(rcl_get_topic_names_and_types(&node, &Allocator, false, &TopicNamesAndTypes));

	for (int i=0; i<TopicNamesAndTypes.names.size; i++)
	{
		if (TopicNamesAndTypes.names.data[i] != nullptr &&
		    TopicNamesAndTypes.types != nullptr && 
			TopicNamesAndTypes.types->data[i] != nullptr && 
			TopicNamesAndTypes.types->size >= i)
		{
			Result.Add(FString(TopicNamesAndTypes.names.data[i]), FString(TopicNamesAndTypes.types->data[i]));
		}
	}

	for (auto& pair : Result)
	{
		UE_LOG(LogTemp, Warning, TEXT("Topic: %s - MsgTypes: %s"), *pair.Key, *pair.Value);
	}

	RCSOFTCHECK(rcl_names_and_types_fini(&TopicNamesAndTypes));

	return Result;
}


TMap<FString, FString> AROS2Node::GetListOfServices()
{
	TMap<FString, FString> Result;

	return Result;
}