// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Node.h"


// Sets default values
AROS2Node::AROS2Node()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AROS2Node::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AROS2Node::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AROS2Node::Subscribe()
{
	
}

UROS2Context* AROS2Node::GetContext()
{
	return context;
}

