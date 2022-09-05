/**
 * @file ROS2ServiceServer.h
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

#include "ROS2ServiceServer.generated.h"

/**
 * @brief Class implementing ROS2 service clients.
 *  Service type is defined by SrvClass
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ServiceServer : public UROS2Service
{
    GENERATED_BODY()

public:

    /**
     * @brief Destroy publisher with rcl_client_fini
     *
     */
    virtual void Destroy();

    /**
     * @brief Determine the relevant action client functions to call.
     *
     */
    virtual void ProcessReady() override;

    //! used to receive the answer
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceCallback SrvCallback;

    //! ROS2 Service server
    rcl_service_t rcl_service;

    //! Service is ready or not
    bool Ready;

    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FServiceCallback& InSrvCallback);

protected :

    /**
     * @brief Initialize ROS2 action client with rcl_action_client_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     * @param QoS Quality of Service
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    virtual void InitializeServiceComponent(const TEnumAsByte<UROS2QoS> QoS) override;
};
