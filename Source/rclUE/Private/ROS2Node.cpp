// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2Node.h"

#include "ROS2ActionClient.h"
#include "ROS2ActionServer.h"
#include "ROS2Publisher.h"
#include "ROS2ServiceClient.h"
#include "ROS2ServiceServer.h"
#include "ROS2Subscriber.h"
#include "ROS2Subsystem.h"

#include <Engine/GameInstance.h>
#include <Kismet/GameplayStatics.h>

AROS2Node::AROS2Node()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    ActorComponent = CreateDefaultSubobject<UROS2NodeComponent>(TEXT("ROS2NodeComponent"));
}

// This can't be pre-placed in AROS2Node::BeginPlay() as the order of rcl(c) instructions could be
// different/relevant in each of Child classes
void AROS2Node::Init()
{
    if (nullptr == ActorComponent)
    {
        return;
    }
    ActorComponent->Name = Name;
    ActorComponent->Namespace = Namespace;
    ActorComponent->Init();
}

rcl_node_t* AROS2Node::GetNode()
{
    if (nullptr == ActorComponent)
    {
        return nullptr;
    }
    return ActorComponent->GetNode();
}

void AROS2Node::AddSubscription(const FString& TopicName,
                                TSubclassOf<UROS2GenericMsg> MsgClass,
                                const FSubscriptionCallback& Callback)
{
    if (nullptr == ActorComponent)
    {
        return;
    }

    UROS2Subscriber* NewSub = NewObject<UROS2Subscriber>(this);
    NewSub->TopicName = TopicName;
    NewSub->MsgClass = MsgClass;
    NewSub->Callback = Callback;
    ActorComponent->AddSubscription(NewSub);
}

void AROS2Node::AddServiceServer(const FString& ServiceName,
                                 const TSubclassOf<UROS2GenericSrv> SrvClass,
                                 const FServiceCallback& Callback)
{
    if (nullptr == ActorComponent)
    {
        return;
    }

    UROS2ServiceServer* NewSrv = NewObject<UROS2ServiceServer>(this);
    NewSrv->ServiceName = ServiceName;
    NewSrv->SrvClass = SrvClass;
    NewSrv->SrvCallback = Callback;

    ActorComponent->AddServiceServer(NewSrv);
}

void AROS2Node::AddPublisher(UROS2Publisher* InPublisher)
{
    if (nullptr == ActorComponent)
    {
        return;
    }
    ActorComponent->AddPublisher(InPublisher);
}

void AROS2Node::AddServiceClient(UROS2ServiceClient* InClient)
{
    if (nullptr == ActorComponent)
    {
        return;
    }
    ActorComponent->AddServiceClient(InClient);
}

void AROS2Node::AddActionClient(UROS2ActionClient* InActionClient)
{
    if (nullptr == ActorComponent)
    {
        return;
    }
    ActorComponent->AddActionClient(InActionClient);
}

void AROS2Node::AddActionServer(UROS2ActionServer* InActionServer)
{
    if (nullptr == ActorComponent)
    {
        return;
    }
    ActorComponent->AddActionServer(InActionServer);
}
