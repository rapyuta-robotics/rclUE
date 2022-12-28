/**
 * @file ROS2Service.h
 * @brief Class implementing ROS2 service.
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
#include "Srvs/ROS2GenericSrv.h"

#include "ROS2Service.generated.h"

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
     * @brief Initialize Publisher
     *
     * @param InROS2Node ROS2Node which this publisher belongs to
     */
    void InitializeWithROS2(UROS2NodeComponent* InROS2Node);

    /**
     * @brief Initialize ROS2 service client with rcl_client_init, set QoS, etc.
     *
     */
    UFUNCTION(BlueprintCallable)
    void Init();

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

    //! Quality of service
    //! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TEnumAsByte<UROS2QoS> QoS = UROS2QoS::Services;

protected:
    //! Service is ready or not
    bool Ready;

    /**
     * @brief Initialize ROS2 Action. Should be implemented in ActionServer and ActionClient
     *
     */
    UFUNCTION()
    virtual void InitializeServiceComponent();
};
