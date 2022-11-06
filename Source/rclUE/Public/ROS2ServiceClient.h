/**
 * @file ROS2ServiceClient.h
 * @brief Class implementing ROS2 service clients.
 *  Service type is defined by SrvClass
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 */

// Class implementing ROS2 service clients
// Service type is defined by SrvClass

#pragma once

// UE
#include "Components/ActorComponent.h"
#include "CoreMinimal.h"

// rclUE
#include "ROS2NodeComponent.h"
#include "ROS2Service.h"
#include "Srvs/ROS2GenericSrv.h"

#include "ROS2ServiceClient.generated.h"

/**
 * @brief Class implementing ROS2 service clients.
 *  Service type is defined by SrvClass
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ServiceClient : public UROS2Service
{
    GENERATED_BODY()

public:

    /**
     * @brief Destroy publisher with rcl_client_fini
     *
     */
    virtual void Destroy();

    /**
     * @brief Update Srv with delegate and send request.
     *
     */
    UFUNCTION(BlueprintCallable)
    void UpdateAndSendRequest();

    /**
     * @brief Determine the relevant action client functions to call.
     * 
     */
    virtual void ProcessReady() override;

    //! used to pass data for the request
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceCallback RequestDelegate;

    //! used to receive the answer
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceCallback ResponseDelegate;

    //! ROS2 Service client
    rcl_client_t client;

    //! Service is ready or not
    bool Ready;
    template<typename TService, typename TServiceRequest>
    void SendRequest(TService* InService, const TServiceRequest& InServiceRequest)
    {
        check(State == UROS2State::Initialized);
        check(OwnerNode != nullptr);

        InService->SetRequest(InServiceRequest);
        int64_t Seq;
        RCSOFTCHECK(rcl_send_request(&client, InService->GetRequest(), &Seq));
    }

    /**
     * @brief Unbind #RequestDelegate & #ResponseDelegate
     *
     */
    UFUNCTION(BlueprintCallable)
    virtual void RevokeRequestResponseCallbacks()
    {
        RequestDelegate.Unbind();
        ResponseDelegate.Unbind();
    }

    /**
     * @brief Return true if service is available.
     * @sa https://github.com/ros2/rclcpp/blob/11edf82c7d960e76a00a470033b99cc88a5eb082/rclcpp/src/rclcpp/client.cpp#L107
     */
    UFUNCTION(BlueprintCallable)
    bool IsServiceReady();

protected:
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FServiceClientCallback& InRequestDelegate, const FServiceClientCallback& InResponseCallback);

    /**
     * @brief Send service request
     *
     */
    UFUNCTION() 
    void SendRequest();
    const void* req;
    const void* res;

    /**
     * @brief Initialize ROS2 action client with rcl_action_client_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     */
    virtual void InitializeServiceComponent() override;
};
