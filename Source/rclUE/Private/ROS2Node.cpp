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
	Super::BeginPlay();

	context = GetWorld()->GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetContext();
    RCSOFTCHECK(rclc_node_init_default(&node, TCHAR_TO_ANSI(*Name), TCHAR_TO_ANSI(*Namespace), &context->Get()));

	executor = NewObject<UROS2Executor>();
}

void AROS2Node::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (auto& s : subs)
	{
		RCSOFTCHECK(rcl_subscription_fini(&s.Value, &node));
	}
	RCSOFTCHECK(rcl_node_fini(&node));
}

// Called every frame
void AROS2Node::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ...
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
