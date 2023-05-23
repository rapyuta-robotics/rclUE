/**
 * @file ROS2NodeComponent.h
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
#include "Actions/ROS2GenericAction.h"
#include "Msgs/ROS2GenericMsg.h"
#include "ROS2Support.h"
#include "Srvs/ROS2GenericSrv.h"

#include "ROS2NodeComponent.generated.h"

class UROS2Publisher;
class UROS2Subscriber;
class UROS2ServiceServer;
class UROS2ServiceClient;
class UROS2ActionServer;
class UROS2ActionClient;

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Node, Log, All);

// Reminder: functions bound to delegates must be UFUNCTION
DECLARE_DYNAMIC_DELEGATE_OneParam(FActionCallback, UROS2GenericAction*, InAction /*Action*/);
DECLARE_DYNAMIC_DELEGATE(FSimpleCallback);

//! BP requires a custom-made callback thus it must be Dynamic
DECLARE_DYNAMIC_DELEGATE_OneParam(FSubscriptionCallback, const UROS2GenericMsg*, InMessage);
DECLARE_DYNAMIC_DELEGATE_OneParam(FTopicCallback, UROS2GenericMsg*, InTopicMessage);
DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceCallback, UROS2GenericSrv*, InService /*Service*/);

/**
 * @brief Create #FTopicCallback and call #UROS2NodeComponent::CreateLoopPublisher
 * FTopicCallback is of dynamic delegate type to be serializable for BP use
 * FTopicCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InTopicName pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InPublisherClass pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InMsgClass pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InPubFrequency pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InCallback convert to #FTopicCallback and pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param OutPublisher return value of #UROS2NodeComponent::CreateLoopPublisher
 */
#define ROS2_CREATE_LOOP_PUBLISHER(                                                                                    \
    InROS2Node, InUserObject, InTopicName, InPublisherClass, InMsgClass, InPubFrequency, InCallback, OutPublisher)     \
    if (ensure(IsValid(InROS2Node)))                                                                                   \
    {                                                                                                                  \
        FTopicCallback cb;                                                                                             \
        cb.BindDynamic(InUserObject, InCallback);                                                                      \
        OutPublisher = InROS2Node->CreateLoopPublisher(InTopicName, InPublisherClass, InMsgClass, InPubFrequency, cb); \
    }

/**
 * @brief Create #FTopicCallback and call #UROS2NodeComponent::CreateLoopPublisher
 * FTopicCallback is of dynamic delegate type to be serializable for BP use
 * FTopicCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InTopicName pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InPublisherClass pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InMsgClass pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InPubFrequency pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InCallback convert to #FTopicCallback and pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param InQoS pass to #UROS2NodeComponent::CreateLoopPublisher
 * @param OutPublisher return value of #UROS2NodeComponent::CreateLoopPublisher
 *
 */
#define ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS(                                                                                  \
    InROS2Node, InUserObject, InTopicName, InPublisherClass, InMsgClass, InPubFrequency, InCallback, InQoS, OutPublisher)     \
    if (ensure(IsValid(InROS2Node)))                                                                                          \
    {                                                                                                                         \
        FTopicCallback cb;                                                                                                    \
        cb.BindDynamic(InUserObject, InCallback);                                                                             \
        OutPublisher = InROS2Node->CreateLoopPublisher(InTopicName, InPublisherClass, InMsgClass, InPubFrequency, cb, InQoS); \
    }

/**
 * @brief Create #FsSubscriptionCallback and call #UROS2NodeComponent::CreateSubscriber
 * FSubscriptionCallback is of dynamic delegate type to be serializable for BP use
 * FSubscriptionCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InTopicName pass to #UROS2NodeComponent::CreateSubscriber
 * @param InMsgClass pass to #UROS2NodeComponent::CreateSubscriber
 * @param InCallback convert to #FSubscriptionCallback and pass to #UROS2NodeComponent::CreateSubscriber
 */
#define ROS2_CREATE_SUBSCRIBER(InROS2Node, InUserObject, InTopicName, InMsgClass, InCallback) \
    if (ensure(IsValid(InROS2Node)))                                                          \
    {                                                                                         \
        FSubscriptionCallback cb;                                                             \
        cb.BindDynamic(InUserObject, InCallback);                                             \
        InROS2Node->CreateSubscriber(InTopicName, InMsgClass, cb);                            \
    }

/**
 * @brief Create #FsSubscriptionCallback and call #UROS2NodeComponent::CreateSubscriberWithQoS
 * FSubscriptionCallback is of dynamic delegate type to be serializable for BP use
 * FSubscriptionCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InTopicName pass to #UROS2NodeComponent::CreateSubscriberWithQoS
 * @param InMsgClass pass to #UROS2NodeComponent::CreateSubscriberWithQoS
 * @param InCallback convert to #FSubscriptionCallback and pass to #UROS2NodeComponent::CreateSubscriber
 * @param InQoS pass to #UROS2NodeComponent::CreateSubscriber
 */
#define ROS2_CREATE_SUBSCRIBERW_WITH_QOS(InROS2Node, InUserObject, InTopicName, InMsgClass, InCallback, InQoS) \
    if (ensure(IsValid(InROS2Node)))                                                                           \
    {                                                                                                          \
        FSubscriptionCallback cb;                                                                              \
        cb.BindDynamic(InUserObject, InCallback);                                                              \
        InROS2Node->CreateSubscriber(InTopicName, InMsgClass, cb, InQoS);                                      \
    }

/**
 * @brief Create #FServiceCallback and call #UROS2NodeComponent::CreateServiceClient
 * FServiceCallback is of dynamic delegate type to be serializable for BP use
 * FServiceCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InServiceName pass to #UROS2NodeComponent::CreateServiceClient
 * @param InSrvClass pass to #UROS2NodeComponent::CreateServiceClient
 * @param InRequestCallback convert to #FServiceCallback and pass to #UROS2NodeComponent::CreateServiceClient
 * @param OutClient return value of #UROS2NodeComponent::CreateServiceClient
 */
#define ROS2_CREATE_SERVICE_CLIENT(InROS2Node, InUserObject, InServiceName, InSrvClass, InRequestCallback, OutClient) \
    if (ensure(IsValid(InROS2Node)))                                                                                  \
    {                                                                                                                 \
        FServiceCallback req;                                                                                         \
        req.BindDynamic(InUserObject, InRequestCallback);                                                             \
        OutClient = InROS2Node->CreateServiceClient(InServiceName, InSrvClass, req);                                  \
    }

/**
 * @brief Create #FServiceCallback and call #UROS2NodeComponent::CreateServiceClient
 * FServiceCallback is of dynamic delegate type to be serializable for BP use
 * FServiceCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InServiceName pass to #UROS2NodeComponent::CreateServiceClient
 * @param InSrvClass pass to #UROS2NodeComponent::CreateServiceClient
 * @param InRequestCallback convert to #FServiceCallback and pass to #UROS2NodeComponent::CreateServiceClient
 * @param InQoS pass to #UROS2NodeComponent::CreateServiceClient
 * @param OutClient return value of #UROS2NodeComponent::CreateServiceClient
 */
#define ROS2_CREATE_SERVICE_CLIENT_WITH_QOS(                                                  \
    InROS2Node, InUserObject, InServiceName, InSrvClass, InRequestCallback, InQoS, OutClient) \
    if (ensure(IsValid(InROS2Node)))                                                          \
    {                                                                                         \
        FServiceCallback req;                                                                 \
        req.BindDynamic(InUserObject, InRequestCallback);                                     \
        OutClient = InROS2Node->CreateServiceClient(InServiceName, InSrvClass, req, InQoS);   \
    }

/**
 * @brief Create #FServiceCallback and call #UROS2NodeComponent::CreateServiceServer
 * FServiceCallback is of dynamic delegate type to be serializable for BP use
 * FServiceCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InServiceName pass to #UROS2NodeComponent::CreateServiceServer
 * @param InSrvClass pass to #UROS2NodeComponent::CreateServiceServer
 * @param InResponseCallback convert to #FServiceCallback and pass to #UROS2NodeComponent::CreateServiceServer
 */
#define ROS2_CREATE_SERVICE_SERVER(InROS2Node, InUserObject, InServiceName, InSrvClass, InResponseCallback) \
    if (ensure(IsValid(InROS2Node)))                                                                        \
    {                                                                                                       \
        FServiceCallback res;                                                                               \
        res.BindDynamic(InUserObject, InResponseCallback);                                                  \
        InROS2Node->CreateServiceServer(InServiceName, InSrvClass, res);                                    \
    }

/**
 * @brief Create #FServiceCallback and call #UROS2NodeComponent::CreateServiceServer
 * FServiceCallback is of dynamic delegate type to be serializable for BP use
 * FServiceCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InServiceName pass to #UROS2NodeComponent::CreateServiceServer
 * @param InSrvClass pass to #UROS2NodeComponent::CreateServiceServer
 * @param InResponseCallback convert to #FServiceCallback and pass to #UROS2NodeComponent::CreateServiceServer
 * @param InQoS pass to #UROS2NodeComponent::CreateServiceServer
 */
#define ROS2_CREATE_SERVICE_SERVER_WITH_QOS(InROS2Node, InUserObject, InServiceName, InSrvClass, InQoS, InResponseCallback) \
    if (ensure(IsValid(InROS2Node)))                                                                                        \
    {                                                                                                                       \
        FServiceCallback res;                                                                                               \
        res.BindDynamic(InUserObject, InResponseCallback);                                                                  \
        InROS2Node->CreateServiceServer(InServiceName, InSrvClass, res, InQoS);                                             \
    }

/**
 * @brief Create #FActionCallback and call #UROS2NodeComponent::CreateActionClient
 * FActionCallback is of dynamic delegate type to be serializable for BP use
 * FActionCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InActionName pass to #UROS2NodeComponent::CreateActionClient
 * @param InActionClass pass to #UROS2NodeComponent::CreateActionClient
 * @param InGoalResponseDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param InResultResponseDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param InFeedbackDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param InCancelResponseDelegate convert to #FSimpleCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param OutClient return value of #UROS2NodeComponent::CreateActionClient
 */
#define ROS2_CREATE_ACTION_CLIENT(InROS2Node,                                                                    \
                                  InUserObject,                                                                  \
                                  InActionName,                                                                  \
                                  InActionClass,                                                                 \
                                  InGoalResponseDelegate,                                                        \
                                  InResultResponseDelegate,                                                      \
                                  InFeedbackDelegate,                                                            \
                                  InCancelResponseDelegate,                                                      \
                                  OutClient)                                                                     \
    if (ensure(IsValid(InROS2Node)))                                                                             \
    {                                                                                                            \
        FActionCallback Feedback, Result, Goal;                                                                  \
        FSimpleCallback Cancel;                                                                                  \
        Goal.BindDynamic(InUserObject, InGoalResponseDelegate);                                                  \
        Result.BindDynamic(InUserObject, InResultResponseDelegate);                                              \
        Feedback.BindDynamic(InUserObject, InFeedbackDelegate);                                                  \
        Cancel.BindDynamic(InUserObject, InCancelResponseDelegate);                                              \
        OutClient = InROS2Node->CreateActionClient(InActionName, InActionClass, Goal, Result, Feedback, Cancel); \
    }

/**
 * @brief Create #FActionCallback and call #UROS2NodeComponent::CreateActionClient
 * FActionCallback is of dynamic delegate type to be serializable for BP use
 * FActionCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InActionName pass to #UROS2NodeComponent::CreateActionClient
 * @param InActionClass pass to #UROS2NodeComponent::CreateActionClient
 * @param InGoalResponseDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param InResultResponseDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param InFeedbackDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param InCancelResponseDelegate convert to #FSimpleCallback and pass to #UROS2NodeComponent::CreateActionClient
 * @param InGoalQoS pass to #UROS2NodeComponent::CreateActionClient
 * @param InResultQoS pass to #UROS2NodeComponent::CreateActionClient
 * @param InFeedbackQoS pass to #UROS2NodeComponent::CreateActionClient
 * @param InCancelQoS pass to #UROS2NodeComponent::CreateActionClient
 * @param OutClient return value of #UROS2NodeComponent::CreateActionClient
 */
#define ROS2_CREATE_ACTION_CLIENT_WITH_QOS(InROS2Node,                                                                        \
                                           InUserObject,                                                                      \
                                           InActionName,                                                                      \
                                           InActionClass,                                                                     \
                                           InGoalResponseDelegate,                                                            \
                                           InResultResponseDelegate,                                                          \
                                           InFeedbackDelegate,                                                                \
                                           InCancelResponseDelegate,                                                          \
                                           InGoalQoS,                                                                         \
                                           InResultQoS,                                                                       \
                                           InFeedbackQoS,                                                                     \
                                           InCancelQoS,                                                                       \
                                           OutClient)                                                                         \
    if (ensure(IsValid(InROS2Node)))                                                                                          \
    {                                                                                                                         \
        FActionCallback Feedback, Result, Goal;                                                                               \
        FSimpleCallback Cancel;                                                                                               \
        Goal.BindDynamic(InUserObject, InGoalResponseDelegate);                                                               \
        Result.BindDynamic(InUserObject, InResultResponseDelegate);                                                           \
        Feedback.BindDynamic(InUserObject, InFeedbackDelegate);                                                               \
        Cancel.BindDynamic(InUserObject, InCancelResponseDelegate);                                                           \
        OutClient = InROS2Node->CreateActionClient(                                                                           \
            InActionName, InActionClass, Goal, Result, Feedback, Cancel, InGoalQoS, InResultQoS, InFeedbackQoS, InCancelQoS); \
    }

/**
 * @brief Create #FActionCallback and call #UROS2NodeComponent::CreateActionServer
 * FActionCallback is of dynamic delegate type to be serializable for BP use
 * FActionCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InActionName pass to #UROS2NodeComponent::CreateActionServer
 * @param InActionClass pass to #UROS2NodeComponent::CreateActionServer
 * @param InGoalDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionServer
 * @param InResultDelegate convert to #FSimpleCallback and pass to #UROS2NodeComponent::CreateActionServer
 * @param InCancelDelegate convert to #FSimpleCallback and pass to #UROS2NodeComponent::CreateActionServer
 * @param OutServer return value of #UROS2NodeComponent::CreateActionServer
 */
#define ROS2_CREATE_ACTION_SERVER(                                                                                        \
    InROS2Node, InUserObject, InActionName, InActionClass, InGoalDelegate, InResultDelegate, InCancelDelegate, OutServer) \
    if (ensure(IsValid(InROS2Node)))                                                                                      \
    {                                                                                                                     \
        FActionCallback Goal;                                                                                             \
        FSimpleCallback Result, Cancel;                                                                                   \
        Goal.BindDynamic(InUserObject, InGoalDelegate);                                                                   \
        Result.BindDynamic(InUserObject, InResultDelegate);                                                               \
        Cancel.BindDynamic(InUserObject, InCancelDelegate);                                                               \
        OutServer = InROS2Node->CreateActionServer(InActionName, InActionClass, Goal, Result, Cancel);                    \
    }

/**
 * @brief Create #FActionCallback and call #UROS2NodeComponent::CreateActionServer
 * FActionCallback is of dynamic delegate type to be serializable for BP use
 * FActionCallback::BindDynamic is a macro, instead of a function.
 * Thus InCallback can only be a direct UFUNCTION() method & cannot be used as typed param!
 * @param InROS2Node #UROS2NodeComponent
 * @param InUserObject Objects of InCallback
 * @param InActionName pass to #UROS2NodeComponent::CreateActionServer
 * @param InActionClass pass to #UROS2NodeComponent::CreateActionServer
 * @param InGoalDelegate convert to #FActionCallback and pass to #UROS2NodeComponent::CreateActionServer
 * @param InResultDelegate convert to #FSimpleCallback and pass to #UROS2NodeComponent::CreateActionServer
 * @param InCancelDelegate convert to #FSimpleCallback and pass to #UROS2NodeComponent::CreateActionServer
 * @param InGoalQoS pass to #UROS2NodeComponent::CreateActionServer
 * @param InResultQoS pass to #UROS2NodeComponent::CreateActionServer
 * @param InFeedbackQoS pass to #UROS2NodeComponent::CreateActionServer
 * @param InCancelQoS pass to #UROS2NodeComponent::CreateActionServer
 * @param OutServer return value of #UROS2NodeComponent::CreateActionServer
 */
#define ROS2_CREATE_ACTION_SERVER_WITH_QOS(InROS2Node,                                                              \
                                           InUserObject,                                                            \
                                           InActionName,                                                            \
                                           InActionClass,                                                           \
                                           InGoalDelegate,                                                          \
                                           InResultDelegate,                                                        \
                                           InCancelDelegate,                                                        \
                                           InGoalQoS,                                                               \
                                           InResultQoS,                                                             \
                                           InFeedbackQoS,                                                           \
                                           InCancelQoS,                                                             \
                                           OutServer)                                                               \
    if (ensure(IsValid(InROS2Node)))                                                                                \
    {                                                                                                               \
        FActionCallback Goal;                                                                                       \
        FSimpleCallback Result, Cancel;                                                                             \
        Goal.BindDynamic(InUserObject, InGoalDelegate);                                                             \
        Result.BindDynamic(InUserObject, InResultDelegate);                                                         \
        Cancel.BindDynamic(InUserObject, InCancelDelegate);                                                         \
        OutServer = InROS2Node->CreateActionServer(                                                                 \
            InActionName, InActionClass, Goal, Result, Cancel, InGoalQoS, InResultQoS, InFeedbackQoS, InCancelQoS); \
    }

/**
 * @brief Check #UROS2NodeComponent is initialized or not.
 * @param InNode #UROS2NodeComponent
 * @param InName Node name. Used only for logging.
 * @param OutRes bool result. true if initialized, false otherwise.
 */
#define IS_ROS2NODE_INITED(InNode, InName, OutRes)                                                                       \
    if (!IsValid(InNode))                                                                                                \
    {                                                                                                                    \
        UE_LOG_WITH_INFO(LogROS2Node, Warning, TEXT("[%s] ROS2 Node is nullptr. Please set OwnerNode."), *InName);       \
        OutRes = false;                                                                                                  \
    }                                                                                                                    \
    else if (InNode->State != UROS2State::Initialized)                                                                   \
    {                                                                                                                    \
        UE_LOG_WITH_INFO(                                                                                                \
            LogROS2Node, Warning, TEXT("[%s] ROS2 Node is not initialized yet. Please initialize OwnerNode."), *InName); \
        OutRes = false;                                                                                                  \
    }                                                                                                                    \
    else                                                                                                                 \
    {                                                                                                                    \
        OutRes = true;                                                                                                   \
    }

/**
 * @brief Class implementing ROS2 node.
 * This class also handles tasks performed by the executor in rclc.
 * Components of the node and not additional distinct entities publishers, subscribers, services, service clients, action servers
 * and action clients should register to the node with the appropriate methods (Add*).
 */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2NodeComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    /**
     * @brief Create a New Node object.
     * Used outside of  constructor.
     * @param InNodeName
     * @param InNodeNamespace
     * @param InCompName
     * @return UROS2NodeComponent*
     */
    UFUNCTION(BlueprintCallable)
    static UROS2NodeComponent* CreateNewNode(UObject* InOwner,
                                             const FString& InNodeName,
                                             const FString& InNodeNamespace,
                                             const FString& InCompName = TEXT("ROS2NodeComponent"),
                                             const bool Init = true);

    //! A constructor.
    UROS2NodeComponent();

protected:
    /**
     * @brief Overridable function called whenever this actor is being removed from a level
     * @param EndPlayReason
     * \sa [AActor::EndPlay](https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AActor/EndPlay/)
     */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    /**
     * @brief Called every frame.
     *
     * @param DeltaTime
     * @param TickType
     * @param ThisTickFunction
     */
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
    /**
     * @brief Initilize rosnode with rclc_node_init_default
     * This can't be pre-placed in #UROS2NodeComponent::BeginPlay() as the order of rcl(c) instructions could be different/relevant
     * in each of Child classes
     *
     */
    UFUNCTION(BlueprintCallable)
    void Init();

    rcl_node_t* GetNode();

    /**
     * @brief Set this node to #UROS2Publisher::OwnerNode of InPublisher and add to #Publishers.
     *
     * @param InPublisher
     */
    UFUNCTION(BlueprintCallable)
    void AddPublisher(UROS2Publisher* InPublisher);

    /**
     * @brief Create a new #UROS2Publisher of custom publisher class and add to Node.
     * Custom Publisher class is expected to override #UROS2Publisher::Update which in loop with frequency.
     * @param InTopicName Topic name
     * @param InPublisherClass Custom output publisher type class
     * @param InPubFrequency Publishing frequency
     */
    UFUNCTION(BlueprintCallable)
    UROS2Publisher* CreateLoopPublisherWithClass(const FString& InTopicName,
                                                 const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                 const float InPubFrequency);

    /**
     * @brief Create a new #UROS2Publisher and add to Node.
     *
     * @param InTopicName Topic name
     * @param InPublisherClass Custom output publisher type class
     * @param InMsgClass Custom message type class
     * @param InPubFrequency Publishing frequency
     * @param InUpdateDelegate Delegate which is called with given frequency.
     * @param InQoS QoS. Default is #UROS2QoS::Default
     */
    UFUNCTION(BlueprintCallable)
    UROS2Publisher* CreateLoopPublisher(const FString& InTopicName,
                                        const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                        const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                        const float InPubFrequency,
                                        const FTopicCallback& InUpdateDelegate,
                                        const UROS2QoS InQoS = UROS2QoS::Default);

    /**
     * @brief Create a new #UROS2Publisher of custom publisher class and add to Node.
     *
     * @param InPublisherClass
     * @param InTopicName
     * @return UROS2Publisher*
     */
    UFUNCTION(BlueprintCallable)
    UROS2Publisher* CreatePublisherWithClass(const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                             const FString& InTopicName = TEXT(""));

    /**
     * @brief Create a new #UROS2Publisher and add to Node.
     *
     * @param InTopicName Topic name
     * @param InPublisherClass Custom output publisher type class
     * @param InMsgClass Custom message type class
     * @param InQoS QoS. Default is #UROS2QoS::Default
     */
    UFUNCTION(BlueprintCallable)
    UROS2Publisher* CreatePublisher(const FString& InTopicName,
                                    const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                    const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                    const UROS2QoS InQoS = UROS2QoS::Default);

    /**
     * @brief Methods to register subscribers.
     * @param TopicName
     * @param MsgClass
     * @param Callback
     */
    UFUNCTION(BlueprintCallable)
    void AddSubscription(UROS2Subscriber* InSubscriber);

    /**
     * @brief Create a new #UROS2Subscriber and add to Node.
     *
     * @param InTopicName
     * @param InMsgClass
     * @param InCallback
     * @return UROS2Subscriber*
     */
    UFUNCTION(BlueprintCallable)
    UROS2Subscriber* CreateSubscriber(const FString& InTopicName,
                                      const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                      const FSubscriptionCallback& InCallback,
                                      const UROS2QoS InQoS = UROS2QoS::Default);

    /**
     * @brief Set this node to #UROS2ServiceClient::OwnerNode and add to #ServiceClients.
     *
     * @param InClient
     */
    UFUNCTION(BlueprintCallable)
    void AddServiceClient(UROS2ServiceClient* InServiceClient);

    /**
     * @brief Create a new #UROS2ServiceClient and add to Node.
     *
     * @param InServiceName
     * @param InSrvClass
     * @param InRequestDelegate
     * @param InResponseDelegate
     * @param InQoS QoS. Default is #UROS2QoS::Default
     * @return UROS2NodeComponent*
     */
    UFUNCTION(BlueprintCallable)
    UROS2ServiceClient* CreateServiceClient(const FString& InServiceName,
                                            const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                            const FServiceCallback& InResponseDelegate,
                                            const UROS2QoS InQoS = UROS2QoS::Services);

    /**
     * @brief Create ServiceServer with rcl_service_init and add to #ServiceServers.
     *
     * @param ServiceName
     * @param SrvClass
     * @param Callback
     */
    UFUNCTION(BlueprintCallable)
    void AddServiceServer(UROS2ServiceServer* InServiceServer);

    /**
     * @brief Create a new #UROS2ServiceServer and add to Node.
     *
     * @param InTopicName Topic name
     * @param InSrvClass Custom message type class
     * @param InCallback Callback function
     */
    UFUNCTION(BlueprintCallable)
    UROS2ServiceServer* CreateServiceServer(const FString& InServiceName,
                                            const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                            const FServiceCallback& InCallback,
                                            const UROS2QoS InQoS = UROS2QoS::Services);

    /**
     * @brief Set this node to #UROS2ActionClient::OwnerNode and add to #ActionClients.
     *
     * @param InActionClient
     */
    UFUNCTION(BlueprintCallable)
    void AddActionClient(UROS2ActionClient* InActionClient);

    /**
     * @brief Create a new #UROS2ActionClient and add to Node.
     *
     * @param InActionName
     * @param InActionClass
     * @param InFeedbackDelegate
     * @param InResultResponseDelegate
     * @param InGoalResponseDelegate
     * @param InCancelResponseDelegate
     * @param InFeedbackQoS
     * @param InResultQoS
     * @param InGoalQoS
     * @param InCancelQoS
     * @return UROS2ActionClient*
     */
    UROS2ActionClient* CreateActionClient(const FString& InActionName,
                                          const TSubclassOf<UROS2GenericAction>& InActionClass,
                                          const FActionCallback& InGoalResponseDelegate,
                                          const FActionCallback& InResultResponseDelegate,
                                          const FActionCallback& InFeedbackDelegate,
                                          const FSimpleCallback& InCancelResponseDelegate,
                                          const UROS2QoS InGoalQoS = UROS2QoS::Services,
                                          const UROS2QoS InResultQoS = UROS2QoS::Services,
                                          const UROS2QoS InFeedbackQoS = UROS2QoS::Default,
                                          const UROS2QoS InCancelQoS = UROS2QoS::Services);
    /**
     * @brief Set this node to #UROS2ActionClient::OwnerNode and add to #ActionServers.
     *
     * @param InActionServer
     */
    UFUNCTION(BlueprintCallable)
    void AddActionServer(UROS2ActionServer* InActionServer);

    /**
     * @brief Create a Action Server and add to Node
     *
     * @param InActionName
     * @param InActionClass
     * @param InGoalDelegate
     * @param InCancelDelegate
     * @param InResultDelegate
     * @param InFeedbackQoS
     * @param InResultQoS
     * @param InGoalQoS
     * @param InCancelQoS
     * @return UROS2ActionServer*
     */
    UROS2ActionServer* CreateActionServer(const FString& InActionName,
                                          const TSubclassOf<UROS2GenericAction>& InActionClass,
                                          const FActionCallback& InGoalDelegate,
                                          const FSimpleCallback& InResultDelegate,
                                          const FSimpleCallback& InCancelDelegate,
                                          const UROS2QoS InGoalQoS = UROS2QoS::Services,
                                          const UROS2QoS InResultQoS = UROS2QoS::Services,
                                          const UROS2QoS InFeedbackQoS = UROS2QoS::Default,
                                          const UROS2QoS InCancelQoS = UROS2QoS::Services);

    //! Node state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name = TEXT("node");

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Namespace = TEXT("");

    //! wait_set quantities - currently unused
    UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
    int NGuardConditions = 0;

    UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
    int NTimers = 0;

    UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
    int NEvents = 0;

protected:
    /**
     * @brief method used to wait on communication and call delegates when appropriate modeled after executor + actions.
     * @sa [rclc_executor_spin_some in
     * rclc/executor.c](https://github.com/ros2/rclc/blob/243ee63ca369f0fb90397ba9ae0ca1283ab16ad3/rclc/src/rclc/executor.c#L1802)
     */
    UFUNCTION()
    void SpinSome();

    rcl_wait_set_t wait_set;

    UPROPERTY()
    UROS2Support* Support;

    rcl_node_t node;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2Subscriber*> Subscriptions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2ServiceServer*> ServiceServers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2Publisher*> Publishers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2ServiceClient*> ServiceClients;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2ActionClient*> ActionClients;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UROS2ActionServer*> ActionServers;

    //! internal property used to log throttle.
    UPROPERTY()
    float LogLastHit = 0.f;

private:
    /**
     * @brief based on _rclc_default_scheduling of the rclc executor.
     * Called inside #SpinSome. rcl_take to get topic and execute Callback.
     *
     */
    UFUNCTION()
    void HandleSubscriptions();

    /**
     * @brief based on _rclc_default_scheduling of the rclc executor.
     * Called inside #SpinSome. rcl_take_request_with_info to get request, execute Callback and rcl_send_response to send response
     *
     */
    UFUNCTION()
    void HandleServiceServers();

    /**
     * @brief based on _rclc_default_scheduling of the rclc executor.
     * Called inside #SpinSome. rcl_take_response_with_info to get response and execute Callback.
     *
     */
    UFUNCTION()
    void HandleServiceClients();

    /**
     * @brief based on _rclc_default_scheduling of the rclc executor.
     * Called inside #SpinSome. rcl_take_response_with_info to get response and execute Callback.
     *
     */
    UFUNCTION()
    void HandleActionClients();

    /**
     * @brief based on _rclc_default_scheduling of the rclc executor.
     * Called inside #SpinSome. rcl_take_response_with_info to get response and execute Callback.
     *
     */
    UFUNCTION()
    void HandleActionServers();

    /**
     * @brief invalidate #wait_set so that in next spin_some() call the
     * #wait_set is updated accordingly in #SpinSome
     * @sa  [rclc_executor_add_subscription_with_context in
     * rclc/executor.c](https://github.com/ros2/rclc/blob/243ee63ca369f0fb90397ba9ae0ca1283ab16ad3/rclc/src/rclc/executor.c#L207)
     */
    UFUNCTION()
    void InvalidateWaitSet();
};
