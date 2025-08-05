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
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ServiceClient : public UROS2Service
{
    GENERATED_BODY()

public:
    /**
     * @brief Create a Service Client object
     *
     * @param InOwner
     * @param InServiceName
     * @param InSrvClass
     * @param InResponseDelegate
     * @return UROS2ServiceClient*
     */
    static UROS2ServiceClient* CreateServiceClient(UObject* InOwner,
                                                   const FString& InServiceName,
                                                   const TSubclassOf<UROS2GenericSrv>& InSrvClass,
                                                   const FServiceCallback& InResponseDelegate,
                                                   const UROS2QoS InQoS = UROS2QoS::Services);

    /**
     * @brief Destroy service with rcl_client_fini
     *
     */
    virtual void Destroy();

    /**
     * @brief Determine the relevant service client functions to call.
     *
     */
    virtual void ProcessReady() override;

    //! used to receive the answer
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceCallback ResponseDelegate;

    //! ROS2 Service client
    rcl_client_t client;

    //! Service is ready or not
    bool Ready = false;

    /**
     * @brief Send service request
     *
     */
    UFUNCTION(BlueprintCallable)
    void SendRequest();

    /**
     * @brief Send service request
     *
     * @tparam TService
     * @tparam TServiceRequest
     * @param InService
     * @param InServiceRequest
     */
    template<typename TService, typename TServiceRequest>
    void SendRequest(TService* InService, const TServiceRequest& InServiceRequest)
    {
        if (IsValid(OwnerNode) && OwnerNode->State == UROS2State::Initialized && State == UROS2State::Initialized)
        {
            if (!IsServiceReady())
            {
                UE_LOG_WITH_INFO(LogROS2Srv, Error, TEXT("Service named %s is not ready yet"), *ServiceName);
                return;
            }

            InService->SetRequest(InServiceRequest);

            int64_t Seq;
            RCSOFTCHECK(rcl_send_request(&client, InService->GetRequest(), &Seq));
        }
        else
        {
            UE_LOG_WITH_INFO_NAMED(LogTemp, Log, TEXT("Service Client or node is not yet initialized"));
        }
    }

    /**
     * @brief Return true if service is available.
     * @sa https://github.com/ros2/rclcpp/blob/11edf82c7d960e76a00a470033b99cc88a5eb082/rclcpp/src/rclcpp/client.cpp#L107
     */
    UFUNCTION(BlueprintCallable)
    bool IsServiceReady();

    /**
     * @brief Set #ResponseDelegate
     *
     * @param InResponseCallback
     */
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FServiceCallback& InResponseCallback);

protected:
    const void* req;
    const void* res;

    /**
     * @brief Initialize ROS2 service client with rcl_client_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     */
    virtual void InitializeServiceComponent() override;
};

/**
 * @brief ROS2 ServiceClient Component. Wrapper of #UROS2ServiceClient for BP.
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ServiceClientComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2ServiceClient* ServiceClient = nullptr;

    //! this is pass to #UROS2ServiceClient::ServiceName in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ServiceName = TEXT("");

    //! this is pass to #UROS2ServiceClient::SrvClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericSrv> SrvClass = UROS2GenericSrv::StaticClass();

    //! this is pass to #UROS2ServiceClient::QoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS QoS = UROS2QoS::Services;

    //! this is pass to #UROS2ServiceClient::ResponseDelegate in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FServiceCallback ResponseDelegate;

    UFUNCTION(BlueprintCallable)
    virtual void DefaultCreateServiceClient()
    {
        if (ServiceClient == nullptr)
        {
            ServiceClient = UROS2ServiceClient::CreateServiceClient(this, ServiceName, SrvClass, ResponseDelegate, QoS);
        }
    }
    virtual void BeginPlay() override
    {
        DefaultCreateServiceClient();
        Super::BeginPlay();
    };
};
