#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>
#include <ROS2Node.h>

#include "ROS2Subscriber.generated.h"

UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Subscriber : public UActorComponent
{
    GENERATED_BODY()

public:
    UROS2Subscriber();

    UFUNCTION(BlueprintCallable)
    void Init();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition="!bQosOverride"))
    UROS2QoS QosProfilePreset = UROS2QoS::Default;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bQosOverride = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition="bQosOverride"))
    UROS2QosHistoryPolicy QosHistoryPolicy = UROS2QosHistoryPolicy::KEEP_LAST;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition="bQosOverride"))
    int32 QosDepth = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition="bQosOverride"))
    UROS2QosReliabilityPolicy QosReliabilityPolicy = UROS2QosReliabilityPolicy::RELIABLE;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (EditCondition="bQosOverride"))
    UROS2QosDurabilityPolicy QosDurabilityPolicy = UROS2QosDurabilityPolicy::VOLATILE;

    UFUNCTION()
    virtual void Destroy();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> TopicType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AROS2Node* ROSNode = nullptr;

    UPROPERTY(BlueprintReadOnly)
    UROS2State State = UROS2State::Created;

    UFUNCTION(BlueprintNativeEvent)
    void IncomingMessage(UROS2GenericMsg* Message);

    void IncomingMessage_Implementation(UROS2GenericMsg* Message)
    {
        checkNoEntry();
    }

    bool Ready;

// public:
    UPROPERTY(BlueprintReadOnly)
    UROS2GenericMsg* TopicMessage;

    rcl_subscription_t rcl_subscription;

protected:
    void InitializeMessage();
};
