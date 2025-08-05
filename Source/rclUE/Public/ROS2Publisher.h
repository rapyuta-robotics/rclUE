/**
 * @file ROS2Publisher.h
 * @brief  Class implementing ROS2 publishers
 * Message type is defined by MsgClass
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "ROS2NodeComponent.h"
#include "ROS2Topic.h"

#include "ROS2Publisher.generated.h"

/**
 * @brief ROS2 Publisher class.
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Publisher : public UROS2Topic
{
    GENERATED_BODY()

public:
    /**
     * @brief Create a new UROS2Publisher of custom publisher class and andd to Node.
     * Custom Publisher class is expected to override #UROS2Publisher::Update which in loop with frequency.
     * @param InOwner
     * @param InTopicName Topic name
     * @param InPublisherClass Custom output publisher type class
     * @param InPubFrequency Publishing frequency
     */
    UFUNCTION(BlueprintCallable)
    static UROS2Publisher* CreateLoopPublisherWithClass(UObject* InOwner,
                                                        const FString& InTopicName,
                                                        const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                        const float InPubFrequency);

    /**
     * @brief Create a Loop Publisher object
     *
     * @param InOwner
     * @param InTopicName Topic name
     * @param InPublisherClass Custom output publisher type class
     * @param InMsgClass Custom message type class
     * @param InPubFrequency Publishing frequency
     * @param InUpdateDelegate
     * @param InQoS
     * @return UROS2Publisher*
     */
    UFUNCTION(BlueprintCallable)
    static UROS2Publisher* CreateLoopPublisher(UObject* InOwner,
                                               const FString& InTopicName,
                                               const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                               const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                               float InPubFrequency,
                                               const FTopicCallback& InUpdateDelegate,
                                               const UROS2QoS InQoS = UROS2QoS::Default);
    /**
     * @brief Create a new UROS2Publisher and add to Node.
     *
     * @param InOwner
     * @param InPublisherClass
     * @param InTopicName
     * @return UROS2Publisher*
     */
    UFUNCTION(BlueprintCallable)
    static UROS2Publisher* CreatePublisherWithClass(UObject* InOwner,
                                                    const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                                    const FString& InTopicName = TEXT(""));

    /**
     * @brief Create a new UROS2Publisher of custom type
     *
     * @param InOwner
     * @param InTopicName Topic name
     * @param InPublisherClass Custom output publisher type class
     * @param InMsgClass Custom message type class
     * @param InPubFrequency Publishing frequency
     * @param InQoS
     * @return UROS2Publisher*
     */
    UFUNCTION(BlueprintCallable)
    static UROS2Publisher* CreatePublisher(UObject* InOwner,
                                           const FString& InTopicName,
                                           const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                           const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                           float InPubFrequency,
                                           const UROS2QoS InQoS = UROS2QoS::Default);

    /**
     * @brief Update Msg with delegate and publish msg.
     *
     */
    UFUNCTION(BlueprintCallable)
    void UpdateAndPublish();

    /**
     * @brief Publish msg
     *
     */
    UFUNCTION(BlueprintCallable)
    void Publish();

    /**
     * @brief Publish a message
     *
     * @tparam TMessageStruct
     * @param InMessage
     */
    template<typename TUEMessage, typename TUEStruct>
    void Publish(const TUEStruct& InMessageData)
    {
        // can't use macro in here.
        // if (IsValid(OwnerNode) && OwnerNode->State == UROS2State::Initialized && State == UROS2State::Initialized)
        if (State == UROS2State::Initialized)
        {
            // Update [TopicMessage] with [InMessageData]
            CastChecked<TUEMessage>(TopicMessage)->SetMsg(InMessageData);

            // Publish [TopicMessage]
            Publish();
        }
        else
        {
            UE_LOG_WITH_INFO_NAMED(LogTemp, Log, TEXT("Publisher or node is not yet initialized"));
        }
    }

    /**
     * @brief Destroy publisher with rcl_publisher_fini
     *
     */
    virtual void Destroy();

    /**
     * @brief Stope publishing timer
     *
     */
    UFUNCTION(BlueprintCallable)
    void StopPublishTimer();

    /**
     * @brief Start publishing topic with #PublicationFrequencyHz
     *
     */
    UFUNCTION(BlueprintCallable)
    void StartPublishTimer();

    //! Publish frequency. if this value > 0, this will update and publish msg periodically.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PublicationFrequencyHz = 1.f;

    //! Delegate which is Bound with #UpdateMessage by #SetDefaultDelegates
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTopicCallback UpdateDelegate;

    /**
     * @brief Update msg. Should be implemented in child class.
     *
     * @param InMessage Input Message.
     */
    UFUNCTION()
    virtual void UpdateMessage(UROS2GenericMsg* InMessage)
    {
        checkNoEntry();
    }

    /**
     * @brief Bind #UpdateMessage with #UpdateDelegate
     *
     */
    UFUNCTION(BlueprintCallable)
    void SetDefaultDelegates();

    /**
     * @brief Set the Delegates object.
     *
     * @param InUpdateDelegate
     */
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FTopicCallback& InUpdateDelegate);

protected:
    //! Timer handler for periodic publisher
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FTimerHandle TimerHandle;

    //! Last published msg.
    const void* PublishedMsg = nullptr;

    //! ROS2 publisher
    rcl_publisher_t RclPublisher;

    //! Timer Manager
    UPROPERTY()
    URRTimerManager* TimerManager = nullptr;

    /**
     * @brief Initialize Publisher and start timer.
     *
     */
    virtual void InitializeTopicComponent();
};

/**
 * @brief ROS2 Publisher Component. Wrapper of #UROS2Publisher for BP.
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2PublisherComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2Publisher* Publisher = nullptr;

    //! this is pass to #UROS2Publisher::TopicName in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName = TEXT("");

    //! this is pass to #UROS2Publisher::PublisherClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2Publisher> PublisherClass = UROS2Publisher::StaticClass();

    //! this is pass to #UROS2Publisher::MsgClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> MsgClass = UROS2GenericMsg::StaticClass();

    //! this is pass to #UROS2Publisher::PublicationFrequencyHz in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PublicationFrequencyHz = 1.f;

    //! this is pass to #UROS2Publisher::QoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS QoS = UROS2QoS::Default;

    //! this is pass to #UROS2Publisher::UpdateDelegate in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTopicCallback UpdateDelegate;

    UFUNCTION(BlueprintCallable)
    virtual void DefaultCreatePublisher()
    {
        if (Publisher == nullptr)
        {
            Publisher = UROS2Publisher::CreateLoopPublisher(
                this, TopicName, PublisherClass, MsgClass, PublicationFrequencyHz, UpdateDelegate, QoS);
        }
    }

    virtual void BeginPlay() override
    {
        DefaultCreatePublisher();
        Super::BeginPlay();
    };

    /**
     * @brief Pass this class's parameter #TopicName, #PublicationFrequencyHz, #QoS to #Publisher
     */
    UFUNCTION(BlueprintCallable)
    virtual void SetParams()
    {
        if (Publisher != nullptr)
        {
            Publisher->TopicName = TopicName;
            Publisher->PublicationFrequencyHz = PublicationFrequencyHz;
            Publisher->QoS = QoS;
        }
        else
        {
            UE_LOG_WITH_INFO(LogTemp, Warning, TEXT("Publisher is not created yet."));
        }
    }
};

/**
 * @brief ROS2 Custom Publisher Component. Wrapper of #UROS2Publisher for BP.
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2CustomPublisherComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2Publisher* Publisher = nullptr;

    //! this is pass to #UROS2Publisher::TopicName in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName = TEXT("");

    //! this is pass to #UROS2Publisher::PublisherClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2Publisher> PublisherClass = UROS2Publisher::StaticClass();

    //! this is pass to #UROS2Publisher::PublicationFrequencyHz in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PublicationFrequencyHz = 1.f;

    UFUNCTION(BlueprintCallable)
    virtual void DefaultCreatePublisher()
    {
        if (Publisher == nullptr)
        {
            Publisher = UROS2Publisher::CreateLoopPublisherWithClass(this, TopicName, PublisherClass, PublicationFrequencyHz);
        }
    }
    virtual void BeginPlay() override
    {
        DefaultCreatePublisher();
        Super::BeginPlay();
    };
};
