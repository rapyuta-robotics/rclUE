/**
 * @file ROS2ActionClient.h
 * @brief Class implementing ROS2 action clients.
 * Wrapper class of rclc action client.
 * Callbacks are set through the SetDelegates method
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

#include "ROS2Action.h"
#include "ROS2NodeComponent.h"

#include <rcl_action/action_client.h>

#include "ROS2ActionClient.generated.h"

/**
 * @brief  Class implementing ROS2 action clients. Wrapper class of rclc action client. Callbacks are set through the SetDelegates
 * method
 * @sa [rclc action client](https://docs.ros2.org/dashing/api/rcl_action/action__client_8h.html)
 * @sa [Unreal Engine Delegates](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/)
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ActionClient : public UROS2Action
{
    GENERATED_BODY()

public:
    /**
     * @brief Create Action Client
     *
     * @param InOwner
     * @param InActionName
     * @param InActionClass
     * @param InFeedbackDelegate
     * @param InResultResponseDelegate
     * @param InGoalResponseDelegate
     * @param InCancelResponseDelegate
     * @return UROS2ActionClient*
     */
    static UROS2ActionClient* CreateActionClient(UObject* InOwner,
                                                 const FString& InActionName,
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
     * @brief Destroy action client from rclc
     *
     */
    virtual void Destroy() override;

    /**
     * @brief Determine the relevant action client functions to call.
     *
     * @param wait_set
     */
    virtual void ProcessReady(rcl_wait_set_t* wait_set) override;

    /**
     * @brief Send action goal with rcl_action_send_goal_request
     *
     */
    UFUNCTION(BlueprintCallable)
    bool SendGoal();

    /**
     * @brief Send a goal
     *
     * @tparam TUEStruct
     * @param InGoalData
     */
    template<typename TAction, typename TUEStruct>
    void SendGoal(const TUEStruct& InGoalData)
    {
        if (IsValid(OwnerNode) && OwnerNode->State == UROS2State::Initialized && State == UROS2State::Initialized)
        {
            // Update [TopicMessage] with [InMessageData]
            CastChecked<TAction>(Action)->SetGoalRequest(InGoalData);

            // Send [Action]
            SendGoal();
        }
        else
        {
            UE_LOG_WITH_INFO_NAMED(LogTemp, Log, TEXT("Action client or node is not yet initialized"));
        }
    }

    /**
     * @brief Send result request to get result with rcl_action_send_result_request
     *
     */
    UFUNCTION(BlueprintCallable)
    void SendResultRequest();

    /**
     * @brief Send cancel request with rcl_action_send_cancel_request
     *
     */
    UFUNCTION(BlueprintCallable)
    void SendCancelRequest();

    /**
     * @brief Set the Delegates
     *
     * @param SetGoal
     * @param Feedback
     * @param Result
     * @param GoalResponse
     * @param Cancel
     */
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FActionCallback& InFeedbackDelegate,
                      const FActionCallback& InResultResponseDelegate,
                      const FActionCallback& InGoalResponseDelegate,
                      const FSimpleCallback& InCancelResponseDelegate);

    //! ROS2 action client from rclc
    rcl_action_client_t client;

private:
    rmw_request_id_t goal_res_id;
    rmw_request_id_t result_res_id;
    rmw_request_id_t cancel_res_id;

    FActionCallback GoalResponseDelegate;
    FActionCallback ResultResponseDelegate;
    FActionCallback FeedbackDelegate;
    FSimpleCallback CancelResponseDelegate;

    /**
     * @brief Initialize ROS2 action client with rcl_action_client_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     */
    virtual void InitializeActionComponent() override;
};

/**
 * @brief ROS2 Action client Component. Wrapper of #UROS2ActionClient for BP.
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ActionClientComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2ActionClient* ActionClient = nullptr;

    //! this is pass to #UROS2ActionClient::ActionName in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ActionName = TEXT("");

    //! this is pass to #UROS2ActionClient::ActionClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericAction> ActionClass;

    //! this is pass to #UROS2ActionClient::CancelQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS CancelQoS = UROS2QoS::Services;

    //! this is pass to #UROS2ActionClient::GoalQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS GoalQoS = UROS2QoS::Services;

    //! this is pass to #UROS2ActionClient::ResultQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS ResultQoS = UROS2QoS::Services;

    //! this is pass to #UROS2ActionClient::FeedbackQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS FeedbackQoS = UROS2QoS::Default;

    FActionCallback GoalResponseDelegate;
    FActionCallback ResultResponseDelegate;
    FActionCallback FeedbackDelegate;
    FSimpleCallback CancelResponseDelegate;

    UFUNCTION(BlueprintCallable)
    virtual void DefaultCreateActionClient()
    {
        if (ActionClient == nullptr)
        {
            ActionClient = UROS2ActionClient::CreateActionClient(this,
                                                                 ActionName,
                                                                 ActionClass,
                                                                 GoalResponseDelegate,
                                                                 ResultResponseDelegate,
                                                                 FeedbackDelegate,
                                                                 CancelResponseDelegate,
                                                                 GoalQoS,
                                                                 ResultQoS,
                                                                 FeedbackQoS,
                                                                 CancelQoS);
        }
    }

    virtual void BeginPlay() override
    {
        DefaultCreateActionClient();
        Super::BeginPlay();
    };
};
