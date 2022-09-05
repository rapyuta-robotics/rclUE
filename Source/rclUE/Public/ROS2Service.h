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
#include "Srvs/ROS2GenericSrv.h"
#include "ROS2NodeComponent.h"

#include "ROS2Service.generated.h"

//! Servoce call back delegate.  BP requires a custom-made callback thus it must be Dynamic
DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceCallback, UROS2GenericSrv*, InService /*Service*/);

/**
 * @brief Class implementing ROS2 service clients.
 *  Service type is defined by SrvClass
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Service : public UActorComponent
{
    GENERATED_BODY()

public:
    /**
     * @brief Construct a new UROS2ServiceClient object
     *
     */
    UROS2Service();

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
     * @brief Destroy publisher with rcl_client_fini
     *
     */
    UFUNCTION()
    virtual void Destroy();

    /**
     * @brief Determine the relevant action client functions to call.
     * Should be implemented in ActionServer and ActionClient
     *
     * @param wait_set
     */
    virtual void ProcessReady();

    //! this information is redundant with Topic, but it's used to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ServiceName;

    //! type of Srv class
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericSrv> SrvClass;

    //! ROS2Node which own this service client.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2NodeComponent* OwnerNode;

    //! Service client state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

    //! Service Instance
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericSrv* Service;

protected :

    //! Service is ready or not
    bool Ready;

    /**
     * @brief Initialize ROS2 Action. Should be implemented in ActionServer and ActionClient
     *
     * @param QoS Quality of Service
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    UFUNCTION()
    virtual void InitializeServiceComponent(const TEnumAsByte<UROS2QoS> QoS);
};
