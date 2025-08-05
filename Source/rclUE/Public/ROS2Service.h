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

DECLARE_LOG_CATEGORY_EXTERN(LogROS2Srv, Log, All);

#define IS_SRV_INITED(InNode, InName, OutRes)                                                                                    \
    IS_ROS2NODE_INITED(InNode, InName, OutRes);                                                                                  \
                                                                                                                                 \
    if (State != UROS2State::Initialized)                                                                                        \
    {                                                                                                                            \
        UE_LOG_WITH_INFO(                                                                                                        \
            LogROS2Srv, Warning, TEXT("[%s] Service Client/Server is not initialized yet. Please initialize Action."), *InName); \
        OutRes = false;                                                                                                          \
    }

/**
 * @brief Class implementing ROS2 service clients.
 *  Service type is defined by SrvClass
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Service : public UObject
{
    GENERATED_BODY()

public:
    /**
     * @brief Initialize Service with ROS2Node
     *
     * @param InROS2Node ROS2Node which this publisher belongs to
    * @return true
    * @return false
    */
    virtual bool InitializeWithROS2(UROS2NodeComponent* InROS2Node);

    /**
     * @brief Initialize ROS2 service client with rcl_client_init, set QoS, #InitializeService and #InitializeServiceComponent .
     *
     * @return true
     * @return false
     */
    UFUNCTION(BlueprintCallable)
    virtual bool Init();

    /**
     * @brief Create #Service instance and initialize it.
     *
     * @return true
     * @return false
     */
    UFUNCTION(BlueprintCallable)
    virtual bool InitializeService();

    /**
     * @brief Destroy service with rcl_client_fini
     *
     */
    UFUNCTION()
    virtual void Destroy();

    /**
     * @brief Determine the relevant service functions to call.
     * Should be implemented in #UROS2ServiceServer and #UROS2ServiceClient
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
    UROS2QoS QoS = UROS2QoS::Services;

protected:
    //! Service is ready or not
    bool Ready;

    /**
     * @brief Initialize ROS2 Action. Should be implemented in #UROS2ServiceServer and #UROS2ServiceClient
     *
     */
    UFUNCTION()
    virtual void InitializeServiceComponent();
};
