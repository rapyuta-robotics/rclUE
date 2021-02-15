// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Node.h"
#include "ROS2Subsystem.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AROS2Node::AROS2Node()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AROS2Node::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay"));
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay - SuperDone"));
	
	UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay - rcl_wait_set_init"));
	wait_set = rcl_get_zero_initialized_wait_set();
	RCSOFTCHECK(rcl_wait_set_init(&wait_set, NSubscriptions, NGuardConditions, NTimers, NClients, NServices, NEvents, &context->Get().context, rcl_get_default_allocator()));

	UROS2Topic* SubTopic = NewObject<UROS2Topic>();
	SubTopic->Name = TEXT("clock");
	SubTopic->Msg = NewObject<UROS2ClockMsg>();
	if (SubTopic != nullptr && SubTopic->Msg != nullptr)
	{
		SubTopic->Msg->Init();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SubTopic (%s) or Msg (%s) is nullptr!"), SubTopic != nullptr, SubTopic->Msg != nullptr);
	}
	Subscribe(SubTopic);

	UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay - Done"));
}

void AROS2Node::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// this is called before the components
	UE_LOG(LogTemp, Warning, TEXT("Node EndPlay"));

	for (auto& s : subs)
	{
		RCSOFTCHECK(rcl_subscription_fini(&s.Value, &node));
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
	UE_LOG(LogTemp, Warning, TEXT("Node EndPlay - Done"));
}

// Called every frame
void AROS2Node::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SpinSome(DeltaTime*1000*1000*1000);
}

// this stuff can't be placed in BeginPlay as the order of rcl(c) instructions is relevant
void AROS2Node::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Node Init"));

	//UE_LOG(LogTemp, Warning, TEXT("check if we need to initialize the node"));
	if (!rcl_node_is_valid(&node)) // ensures that it stays safe when called multiple times
	{
		//UE_LOG(LogTemp, Warning, TEXT("Init Node"));
		context = GetWorld()->GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetContext();
		
		UE_LOG(LogTemp, Warning, TEXT("Node Init - rclc_node_init_default"));
		RCSOFTCHECK(rclc_node_init_default(&node, TCHAR_TO_ANSI(*Name.ToString()), TCHAR_TO_ANSI(*Namespace.ToString()), &context->Get()));
		//UE_LOG(LogTemp, Warning, TEXT("Init Node done"));
	}

	UE_LOG(LogTemp, Warning, TEXT("Node Init - Done"));
}

FName AROS2Node::GetName() const
{
	return Name;
}

FName AROS2Node::GetNamespace() const
{
	return Namespace;
}

void AROS2Node::SetName(FName NodeName)
{
	Name = NodeName;
}

void AROS2Node::SetNamespace(FName NodeNamespace)
{
	Namespace = NodeNamespace;
}

UROS2Context* AROS2Node::GetContext()
{
	return context;
}

rcl_node_t* AROS2Node::GetNode()
{
	return &node;
}

// assumes Topic->Msg has been created with NewObject already
void AROS2Node::Subscribe(UROS2Topic* Topic)
{
	UE_LOG(LogTemp, Warning, TEXT("Subscribe to Topic %s"), *Topic->Name.ToString());
	if (!subs.Contains(Topic))
	{
		subs.Add(Topic, rcl_get_zero_initialized_subscription());
		const rosidl_message_type_support_t * type_support = Topic->Msg->GetTypeSupport();
  		rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();
  		RCSOFTCHECK(rcl_subscription_init(&subs[Topic], &node, type_support, TCHAR_TO_ANSI(*Topic->Name.ToString()), &sub_opt));
	}
	UE_LOG(LogTemp, Warning, TEXT("Subscribe to Topic %s - Done"), *Topic->Name.ToString());
}

void AROS2Node::SpinSome(const uint64 timeout_ns)
{
	UE_LOG(LogTemp, Warning, TEXT("Spin Some for %d subscriptions"), wait_set.size_of_subscriptions);
	
	if (!rcl_wait_set_is_valid(&wait_set))
	{
		wait_set = rcl_get_zero_initialized_wait_set();
		RCSOFTCHECK(rcl_wait_set_init(&wait_set, NSubscriptions, NGuardConditions, NTimers, NClients, NServices, NEvents, &context->Get().context, rcl_get_default_allocator()));
	}
	
	RCSOFTCHECK(rcl_wait_set_clear(&wait_set));

	for (auto& pair : subs)
	{
		RCSOFTCHECK(rcl_wait_set_add_subscription(&wait_set, &pair.Value, nullptr));
	}

	rcl_ret_t rc = rcl_wait(&wait_set, timeout_ns);
  	RCLC_UNUSED(rc);

	UE_LOG(LogTemp, Warning, TEXT("Spin Some - Looping"));
	for (int i=0; i<wait_set.size_of_subscriptions; i++)
	{
		if (wait_set.subscriptions[i]) // need to iterate on all subscriptions instead? since there's no index
		{
			UE_LOG(LogTemp, Warning, TEXT("Spin Some - Getting message"));
			const rcl_subscription_t* currentSub = wait_set.subscriptions[i];
			UROS2Topic* topic; // somehow using FindKey produces errors (caused by the comparison of rcl_subscription_t structs)
			for (auto& pair : subs)
			{
				if (&pair.Value == currentSub)
				{
					topic = pair.Key;
				}
			}
			void * data = topic->Msg->Get();
			rmw_message_info_t messageInfo;
			rc = rcl_take(wait_set.subscriptions[i], data, &messageInfo, NULL);

			// callback here
			topic->Msg->PrintSubToLog(rc);
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Spin Some - Done"));
}
