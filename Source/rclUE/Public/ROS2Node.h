// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

// Class implementing ROS2 nodes
// This class also handles tasks performed by the executor in rclc

#pragma once

#include "Components/ActorComponent.h"
#include "Containers/Map.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Engine/GameInstance.h>

#include "ROS2Subsystem.h"
#include "Actions/ROS2GenericAction.h"
#include "ROS2GenericMsg.h"
#include "Srvs/ROS2GenericSrv.h"
#include "ROS2Node.generated.h"

class UROS2Support;
class UROS2Publisher;
class UROS2Subscriber;
class UROS2ServiceClient;
class UROS2ActionServer;
class UROS2ActionClient;

// Reminder: functions bound to delegates must be UFUNCTION
DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceCallback, UROS2GenericSrv*, InService /*Service*/);
DECLARE_DYNAMIC_DELEGATE_OneParam(FActionCallback, UROS2GenericAction*, InAction /*Action*/);
DECLARE_DELEGATE(FSimpleCallback);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNodeInitialisedDelegate);

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
    virtual void Tick(float DeltaTime) override;

    void InvalidateWaitSet();

    UFUNCTION(BlueprintCallable)
    void Init();

    UFUNCTION(BlueprintCallable)
    void BringDown();

    UFUNCTION(BlueprintCallable)
    void AddSubscriber(UROS2Subscriber* Subscriber);

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

    UPROPERTY(BlueprintReadOnly)
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

    UPROPERTY(BlueprintAssignable)
    FOnNodeInitialisedDelegate OnNodeInitialised;

    UROS2Subsystem* ROSSubsystem()
    {
        return GetGameInstance()->GetSubsystem<UROS2Subsystem>();
    }
    
    FCriticalSection* GetMutex()
    {
        return &GetGameInstance()->GetSubsystem<UROS2Subsystem>()->RCLCritical;
    }
    
    rcl_node_t* GetRCLNode()
    {
        return &_rcl_node;
    }

protected:
    // method used to wait on communication and call delegates when appropriate
    // modeled after executor + actions
    UFUNCTION()
    void SpinSome();

    rcl_node_t _rcl_node;
    rcl_wait_set_t wait_set;

    UPROPERTY()
    UROS2Support* Support;

    UPROPERTY(BlueprintReadWrite)
    TArray<UROS2Subscriber*> Subscribers;

    UPROPERTY(BlueprintReadWrite)
    TArray<FService> Services;

    UPROPERTY(BlueprintReadWrite)
    TArray<UROS2Publisher*> Publishers;

    UPROPERTY(BlueprintReadWrite)
    TArray<UROS2ServiceClient*> Clients;

    UPROPERTY(BlueprintReadWrite)
    TArray<UROS2ActionClient*> ActionClients;

    UPROPERTY(BlueprintReadWrite)
    TArray<UROS2ActionServer*> ActionServers;

    UPROPERTY()
    FTimerHandle TimerHandle;

private:
    // these 3 methods are based on _rclc_default_scheduling of the rclc executor
    UFUNCTION()
    void HandleSubscribers();

    UFUNCTION()
    void HandleServices();

    UFUNCTION()
    void HandleClients();
};
