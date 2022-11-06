/**
 * @file ROS2Node.h
 * @brief Class implementing ROS2 node.
 * This class also handles tasks performed by the executor in rclc.
 * Additionally, helper structs FSubscription and FService are defined here as they are considered components of the node and not
 * additional distinct entities Publishers, subscribers, services, service clients, action servers and action clients should
 * register to the node with the appropriate methods (Add*).
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

// UE
#include "Components/ActorComponent.h"
#include "Containers/Map.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// rclUE
#include "ROS2NodeComponent.h"
#include "ROS2Service.h"
#include "ROS2Subscriber.h"

#include "ROS2Node.generated.h"

class UROS2Publisher;
class UROS2ServiceClient;
class UROS2ActionServer;
class UROS2ActionClient;

// Reminder: functions bound to delegates must be UFUNCTION
// DECLARE_DYNAMIC_DELEGATE_OneParam(FSubscriptionCallback, const UROS2GenericMsg*, InMessage);
// DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceCallback, UROS2GenericSrv*, InService /*Service*/);
// DECLARE_DYNAMIC_DELEGATE_OneParam(FActionCallback, UROS2GenericAction*, InAction /*Action*/);

/**
 * @brief RR_ROS2_SUBSCRIBE_TO_TOPIC
 * FSubscriptionCallback is of dynamic delegate type to be serializable for BP use
 * FSubscriptionCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 */
// #define RR_ROS2_SUBSCRIBE_TO_TOPIC(InROS2Node, InUserObject, InTopicName, InMsgClass, InCallback) \
//     if (ensure(IsValid(InROS2Node)))                                                              \
//     {                                                                                             \
//         FSubscriptionCallback cb;                                                                 \
//         cb.BindDynamic(InUserObject, InCallback);                                                 \
//         InROS2Node->AddSubscription(InTopicName, InMsgClass, cb);                                 \
//     }

#define RR_ROS2_CREATE_SERVICE_CLIENT(                                                                        \
    InROS2Node, InUserObject, InFullServiceName, InServiceClass, InServiceResponseCallback, OutServiceClient) \
    OutServiceClient = NewObject<UROS2ServiceClient>(InUserObject);                                           \
    OutServiceClient->RegisterComponent();                                                                    \
    OutServiceClient->ServiceName = InFullServiceName;                                                        \
    OutServiceClient->SrvClass = InServiceClass;                                                              \
                                                                                                              \
    /* Bounded method will be called when receive response*/                                                  \
    OutServiceClient->ResponseDelegate.BindDynamic(InUserObject, InServiceResponseCallback);                  \
                                                                                                              \
    /* Register service to InROS2Node*/                                                                       \
    InROS2Node->AddServiceClient(OutServiceClient);

#define RR_ROS2_STOP_SERVICE_CLIENT(InServiceClient) InServiceClient->RevokeRequestResponseCallbacks();

/**
 * @brief Helper structs which is components of the node and should register to
 * the node with the appropriate methods (AddSubscription).
 *
 */
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
    UROS2GenericMsg* TopicMsg = nullptr;

    rcl_subscription_t rcl_subscription;

    FSubscriptionCallback Callback;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Ready;
};

/**
 * @brief Helper structs which is components of the node and should register to
 * the node with the appropriate methods (AddServiceServer).
 */
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

/**
 * Class implementing ROS2 node.
 * This class also handles tasks performed by the executor in rclc.
 * Components of the node and not additional distinct entities Publishers, subscribers, services, service clients, action servers
 * and action clients should register to the node with the appropriate methods (Add*).
 */
UCLASS(Blueprintable)
class RCLUE_API AROS2Node : public AActor
{
    GENERATED_BODY()

public:
    //! A constructor.
    /*!
      Constructor
    */
    AROS2Node();

protected:
    /**
     * @brief Overridable function called whenever this actor is being removed from a level
     * @param EndPlayReason
     * \sa [AActor::EndPlay](https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/GameFramework/AActor/EndPlay/)
     */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    /**
     * @brief Called every frame
     *
     * @param DeltaTime
     * @sa [Actor Ticking](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Actors/Ticking/)
     */
    virtual void Tick(float DeltaTime) override;


public:
    UROS2NodeComponent* ActorComponent = nullptr;

    /**
     * @brief Initilize rosnode with rclc_node_init_default
     * This can't be pre-placed in AROS2Node::BeginPlay() as the order of rcl(c) instructions could be different/relevant in
     * each of Child classes
     *
     */
    UFUNCTION(BlueprintCallable) void Init();

    rcl_node_t* GetNode();

    /**
     * @brief Methods to register subscribers.
     * It is up to the user to ensure that they are only added once
     * @param TopicName
     * @param MsgClass
     * @param Callback
     */
    UFUNCTION(BlueprintCallable)
    void AddSubscription(const FString& TopicName, TSubclassOf<UROS2GenericMsg> MsgClass, const FSubscriptionCallback& Callback);

    /**
     * @brief Set this node to UROS2Publisher::OwnerNode of InPublisher and add to #Publishers.
     *
     * @param InPublisher
     */
    UFUNCTION(BlueprintCallable)
    void AddPublisher(UROS2Publisher* InPublisher);

    /**
     * @brief Set this node to UROS2ServiceClient::OwnerNode and add to #Clients.
     *
     * @param InClient
     */
    UFUNCTION(BlueprintCallable)
    void AddServiceClient(UROS2ServiceClient* InClient);

    /**
     * @brief Create ServiceServer with rcl_service_init and add to #Services.
     * @note Keep original arguments, instead of take ServiceServer as arg in ROS2NodeComponent.
     * @param ServiceName
     * @param SrvClass
     * @param Callback
     */
    UFUNCTION(BlueprintCallable)
    void AddServiceServer(const FString& ServiceName,
                          const TSubclassOf<UROS2GenericSrv> SrvClass,
                          const FServiceCallback& Callback);

    /**
     * @brief Set this node to UROS2ActionClient::OwnerNode and add to #ActionClients.
     *
     * @param InActionClient
     */
    UFUNCTION(BlueprintCallable)
    void AddActionClient(UROS2ActionClient* InActionClient);

    /**
     * @brief Set this node to UROS2ActionClient::OwnerNode and add to #ActionServers.
     *
     * @param InActionServer
     */
    UFUNCTION(BlueprintCallable)
    void AddActionServer(UROS2ActionServer* InActionServer);

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name = TEXT("node");

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Namespace = TEXT("");

private:

};
