// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

// Class implementing ROS2 nodes
// This class also handles tasks performed by the executor in rclc
// Additionally, helper structs FSubscription and FService are defined here as they are considered components of the node and not
// additional distinct entities Publishers, subscribers, services, service clients, action servers and action clients should
// register to the node with the appropriate methods (Add*)

#pragma once

// UE
#include "Components/ActorComponent.h"
#include "Containers/Map.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// rclUE
#include "Actions/ROS2GenericAction.h"
#include "Msgs/ROS2GenericMsg.h"
#include "Srvs/ROS2GenericSrv.h"

#include "ROS2Node.generated.h"

class UROS2Support;
class UROS2Publisher;
class UROS2ServiceClient;
class UROS2ActionServer;
class UROS2ActionClient;

// Reminder: functions bound to delegates must be UFUNCTION
DECLARE_DYNAMIC_DELEGATE_OneParam(FSubscriptionCallback, const UROS2GenericMsg*, InMessage);
DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceCallback, UROS2GenericSrv*, InService /*Service*/);
DECLARE_DYNAMIC_DELEGATE_OneParam(FActionCallback, UROS2GenericAction*, InAction /*Action*/);
DECLARE_DELEGATE(FSimpleCallback);


// TODO: This should be moved to its own class
USTRUCT(Blueprintable)
struct RCLUE_API FSubscription
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> TopicType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QosHistoryPolicy QosHistoryPolicy = UROS2QosHistoryPolicy::KEEP_LAST;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 QosDepth = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QosReliabilityPolicy QosReliabilityPolicy = UROS2QosReliabilityPolicy::RELIABLE;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QosDurabilityPolicy QosDurabilityPolicy = UROS2QosDurabilityPolicy::VOLATILE;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2GenericMsg* TopicMsg = nullptr;

    rcl_subscription_t rcl_subscription;

    FSubscriptionCallback Callback;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Ready;
};

USTRUCT(Blueprintable)
struct RCLUE_API FService
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ServiceName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericSrv> ServiceType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2GenericSrv* Service = nullptr;

    rcl_service_t rcl_service;

    FServiceCallback Callback;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Ready = false;
};

UCLASS(Blueprintable)
class RCLUE_API AROS2Node : public AActor
{
    GENERATED_BODY()

public:
    AROS2Node();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

public:
    // must be called before using
    UFUNCTION(BlueprintCallable)
    void Init();

    UFUNCTION(BlueprintCallable)
    void BringDown();

    rcl_node_t* GetNode();

    // Methods to register subscribers, publishers, clients (for services), services, action clients and action servers
    // It is up to the user to ensure that they are only added once
    UFUNCTION(BlueprintCallable)
    void AddSubscription(const FString& TopicName,
                                TSubclassOf<UROS2GenericMsg> MsgClass,
                                const FSubscriptionCallback& Callback,
                                UROS2QosHistoryPolicy SubQosHistoryPolicy=UROS2QosHistoryPolicy::KEEP_LAST,
                                int32 SubQosDepth=10,
                                UROS2QosReliabilityPolicy SubQosReliabilityPolicy=UROS2QosReliabilityPolicy::RELIABLE,
                                UROS2QosDurabilityPolicy SubQosDurabilityPolicy=UROS2QosDurabilityPolicy::VOLATILE);

    UFUNCTION(BlueprintCallable)
    void AddPublisher(UROS2Publisher* InPublisher);

    UFUNCTION(BlueprintCallable)
    void AddServiceClient(UROS2ServiceClient* InClient);

    UFUNCTION(BlueprintCallable)
    void AddServiceServer(const FString& ServiceName,
                          const TSubclassOf<UROS2GenericSrv> SrvClass,
                          const FServiceCallback& Callback);

    UFUNCTION(BlueprintCallable)
    void AddActionClient(UROS2ActionClient* InActionClient);

    UFUNCTION(BlueprintCallable)
    void AddActionServer(UROS2ActionServer* InActionServer);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2State State = UROS2State::Created;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name = TEXT("node");

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Namespace = TEXT("");

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool InitialiseOnBeginPlay = true;

    // wait_set quantities - currently unused
    UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
    int NGuardConditions = 0;

    UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
    int NTimers = 0;

    UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
    int NEvents = 0;

protected:
    // method used to wait on communication and call delegates when appropriate
    // modeled after executor + actions
    UFUNCTION()
    void SpinSome();

    rcl_wait_set_t wait_set;

    UPROPERTY()
    UROS2Support* Support;

    rcl_node_t node;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSubscription> Subscriptions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FService> Services;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2Publisher*> Publishers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2ServiceClient*> Clients;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2ActionClient*> ActionClients;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2ActionServer*> ActionServers;

    UPROPERTY()
    FTimerHandle TimerHandle;

private:
    // these 3 methods are based on _rclc_default_scheduling of the rclc executor
    UFUNCTION()
    void HandleSubscriptions();

    UFUNCTION()
    void HandleServices();

    UFUNCTION()
    void HandleClients();
};
