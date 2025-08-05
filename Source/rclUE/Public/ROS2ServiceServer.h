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
 * @brief Class implementing ROS2 service server.
 *  Service type is defined by SrvClass
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ServiceServer : public UROS2Service
{
    GENERATED_BODY()

public:
    /**
     * @brief Create a new UROS2ServiceServer of custom type
     *
     * @param InTopicName Topic name
     * @param InSrvClass Custom message type class
     * @param InCallback Callback function
     */
    static UROS2ServiceServer* CreateServiceServer(UObject* InOwner,
                                                   const FString& InServiceName,
                                                   const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                                   const FServiceCallback& InCallback,
                                                   const UROS2QoS InQoS = UROS2QoS::Services);

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

    /**
     * @brief Set #SrvCallback
     *
     * @param InSrvCallback
     */
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FServiceCallback& InSrvCallback);

protected:
    /**
     * @brief Initialize ROS2 service server with rcl_service_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     */
    virtual void InitializeServiceComponent() override;

    rmw_service_info_t LastReqInfo;

    //! Rejct consecutive identical requests
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRejectConsecutiveIdenticalRequest = true;
};

/**
 * @brief ROS2 ServiceServer Component. Wrapper of #UROS2ServiceServer for BP.
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ServiceServerComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2ServiceServer* ServiceServer = nullptr;

    //! this is pass to #UROS2ServiceServer::ServiceName in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ServiceName = TEXT("");

    //! this is pass to #UROS2ServiceServer::SrvClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericSrv> SrvClass = UROS2GenericSrv::StaticClass();

    //! this is pass to #UROS2ServiceServer::QoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS QoS = UROS2QoS::Services;

    //! this is pass to #UROS2ServiceServer::ResponseDelegate in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceCallback SrvCallback;

    UFUNCTION(BlueprintCallable)
    virtual void DefaultCreateServiceServer()
    {
        if (ServiceServer == nullptr)
        {
            ServiceServer = UROS2ServiceServer::CreateServiceServer(this, ServiceName, SrvClass, SrvCallback, QoS);
        }
    }
    virtual void BeginPlay() override
    {
        DefaultCreateServiceServer();
        Super::BeginPlay();
    };
};
