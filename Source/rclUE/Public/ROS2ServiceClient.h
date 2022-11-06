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
#include "Msgs/ROS2GenericMsg.h"
#include "Srvs/ROS2GenericSrv.h"
#include "ROS2NodeComponent.h"

#include "ROS2ServiceClient.generated.h"

//! Servoce call back delegate.  BP requires a custom-made callback thus it must be Dynamic
DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceClientCallback, UROS2GenericSrv*, InService);
/**
 * @brief Class implementing ROS2 service clients.
 *  Service type is defined by SrvClass
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ServiceClient : public UActorComponent
{
    GENERATED_BODY()

public:
    /**
     * @brief Construct a new UROS2ServiceClient object
     *
     */
    UROS2ServiceClient();

public:
    /**
     * @brief Initialize ROS2 service client with rcl_client_init, set QoS, etc.
     *
     * @param QoS Quality of Service
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    UFUNCTION(BlueprintCallable)
    void Init(TEnumAsByte<UROS2QoS> QoS);

    /**
     * @brief Create #UROS2GenericSrv instance and initialize it.
     *
     */
    UFUNCTION(BlueprintCallable)
    void InitializeService();

    /**
     * @brief Update Srv with delegate and send request.
     *
     */
    UFUNCTION(BlueprintCallable)
    void UpdateAndSendRequest();

    /**
     * @brief Destroy publisher with rcl_client_fini
     *
     */
    UFUNCTION()
    virtual void Destroy();

    //! this information is redundant with Topic, but it's used to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ServiceName;

    //! type of Srv class
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericSrv> SrvClass;

    //! used to pass data for the request
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceClientCallback RequestDelegate;

    //! used to receive the answer
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceClientCallback ResponseDelegate;

    //! ROS2Node which own this service client.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2NodeComponent* OwnerNode;

    //! Service client state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

    //! ROS2 Service client
    rcl_client_t client;

    //! Service Instance
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericSrv* Service;

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
    /**
     * @brief Send service request
     *
     */
    UFUNCTION()
    void SendRequest();
    const void* req;
    const void* res;
};
