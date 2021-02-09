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

void AROS2Node::Subscribe(FString Topic, FString MsgType)
{
	if (!subs.Contains(Topic))
	{
		subs.Add(Topic, rcl_get_zero_initialized_subscription());
		const rosidl_message_type_support_t * type_support = GetTypeSupport(MsgType);
  		RCSOFTCHECK(rclc_subscription_init_default(&subs[Topic], &node, type_support, TCHAR_TO_ANSI(*Topic)));
	}
}

// this should go in a common space as Publisher will need it too
const rosidl_message_type_support_t* AROS2Node::GetTypeSupport(FString MsgType)
{
    // a quick google search suggests that switch-case might not be supported for FString
    if (MsgType.Equals(TEXT("String")))
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);
    }
    else
    {
        return nullptr;
    }
}
