// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Node.h"


// Sets default values
UROS2Node::UROS2Node()
{

}

// Called when the game starts or when spawned
void UROS2Node::BeginPlay()
{
	Super::BeginPlay();
    //RCSOFTCHECK(rclc_node_init_default(&node, "node", "ros_global", &context->Get()));
}

// Called every frame
void UROS2Node::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FString UROS2Node::GetName()
{
	return NodeName;
}

FString UROS2Node::GetNamespace()
{
	return NodeNamespace;
}

UROS2Context* UROS2Node::GetContext()
{
	return context;
}

