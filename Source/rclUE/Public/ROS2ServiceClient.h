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

    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FServiceCallback& InRequestDelegate, const FServiceCallback& InResponseDelegate);

protected :

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
