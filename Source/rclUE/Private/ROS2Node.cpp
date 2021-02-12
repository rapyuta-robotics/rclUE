// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Node.h"
#include "ROS2Subsystem.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AROS2Node::AROS2Node()
{
}

// Called when the game starts or when spawned
void AROS2Node::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay"));
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay - SuperDone"));
	wait_set = rcl_get_zero_initialized_wait_set();
	RCSOFTCHECK(rcl_wait_set_init(&wait_set, NSubscriptions, NGuardConditions, NTimers, NClients, NServices, NEvents, &context->Get().context, rcl_get_default_allocator()));

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

	// ...
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
		
		UE_LOG(LogTemp, Warning, TEXT("Node BeginPlay - rclc_node_init_default"));
		RCSOFTCHECK(rclc_node_init_default(&node, TCHAR_TO_ANSI(*Name), TCHAR_TO_ANSI(*Namespace), &context->Get()));

		executor = NewObject<UROS2Executor>();
		//UE_LOG(LogTemp, Warning, TEXT("Init Node done"));
	}
	UE_LOG(LogTemp, Warning, TEXT("Node Init - Done"));
}

FString AROS2Node::GetName()
{
	return Name;
}

FString AROS2Node::GetNamespace()
{
	return Namespace;
}

void AROS2Node::SetName(FString NodeName)
{
	Name = NodeName;
}

void AROS2Node::SetNamespace(FString NodeNamespace)
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

void AROS2Node::Subscribe(UROS2Topic* Topic)
{
	if (!subs.Contains(Topic->Name))
	{
		subs.Add(Topic->Name, rcl_get_zero_initialized_subscription());
		const rosidl_message_type_support_t * type_support = Topic->Msg->GetTypeSupport();
  		rcl_subscription_options_t sub_opt = rcl_subscription_get_default_options();
  		RCSOFTCHECK(rcl_subscription_init(&subs[Topic->Name], &node, type_support, TCHAR_TO_ANSI(*Topic->Name), &sub_opt));

		//rcl_wait_set_add_subscription(&wait_set, &subs[Topic->Name], &((size_t)SubIdx));
		SubIdx++;
	}
}
