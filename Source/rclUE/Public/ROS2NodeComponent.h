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
#include "Actions/ROS2GenericAction.h"
#include "Msgs/ROS2GenericMsg.h"
#include "ROS2Support.h"
#include "Srvs/ROS2GenericSrv.h"

#include "ROS2NodeComponent.generated.h"

class UROS2Publisher;
class UROS2ServiceServer;
class UROS2ServiceClient;
class UROS2ActionServer;
class UROS2ActionClient;

// Reminder: functions bound to delegates must be UFUNCTION
DECLARE_DYNAMIC_DELEGATE_OneParam(FActionCallback, UROS2GenericAction*, InAction /*Action*/);
DECLARE_DYNAMIC_DELEGATE(FSimpleCallback);

/**
 * Class implementing ROS2 node.
 * This class also handles tasks performed by the executor in rclc.
 * Components of the node and not additional distinct entities Publishers, subscribers, services, service clients, action servers
 * and action clients should register to the node with the appropriate methods (Add*).
 */
UCLASS(Blueprintable)
class RCLUE_API UROS2NodeComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    //! A constructor.
    /*!
      Constructor
    */
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
     * This can't be pre-placed in UROS2NodeComponent::BeginPlay() as the order of rcl(c) instructions could be different/relevant
     * in each of Child classes
     *
     */
    UFUNCTION(BlueprintCallable)
    void Init();

    rcl_node_t* GetNode();

    /**
     * @brief Methods to register subscribers.
     * It is up to the user to ensure that they are only added once
     * @param TopicName
     * @param MsgClass
     * @param Callback
     */
    UFUNCTION(BlueprintCallable)
    void AddSubscription(UROS2Subscriber* InSubscriber);

    /**
     * @brief Set this node to UROS2Publisher::OwnerNode of InPublisher and add to #Publishers.
     *
     * @param InPublisher
     */
    UFUNCTION(BlueprintCallable)
    void AddPublisher(UROS2Publisher* InPublisher);

    /**
     * @brief Set this node to UROS2ServiceClient::OwnerNode and add to #ServiceClients.
     *
     * @param InClient
     */
    UFUNCTION(BlueprintCallable)
    void AddServiceClient(UROS2ServiceClient* InServiceClient);

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

    //! Node state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name = TEXT("node");

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Namespace = TEXT("ros_global");

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
