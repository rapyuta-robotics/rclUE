// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/msg/OverlappingObjects.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/msg/overlapping_objects.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "rosidl_runtime_c/string_functions.h"

// Generated
#include "ROS2OverlappingObjects.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSOverlappingObjects
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> Actors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> Components;

    FROSOverlappingObjects()
    {
    }

    void SetFromROS2(const ue_msgs__msg__OverlappingObjects& in_ros_data)
    {
        UROS2Utils::StringSequenceROSToUEArray<rosidl_runtime_c__String>(in_ros_data.actors.data, Actors, in_ros_data.actors.size);

        UROS2Utils::StringSequenceROSToUEArray<rosidl_runtime_c__String>(
            in_ros_data.components.data, Components, in_ros_data.components.size);
    }

    void SetROS2(ue_msgs__msg__OverlappingObjects& out_ros_data) const
    {
        if (out_ros_data.actors.data)
        {
            rosidl_runtime_c__String__Sequence__fini(&out_ros_data.actors);
        }
        if (!rosidl_runtime_c__String__Sequence__init(&out_ros_data.actors, Actors.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.actors  "));
        }
        UROS2Utils::StringArrayUEToROSSequence(Actors, out_ros_data.actors.data, Actors.Num());

        if (out_ros_data.components.data)
        {
            rosidl_runtime_c__String__Sequence__fini(&out_ros_data.components);
        }
        if (!rosidl_runtime_c__String__Sequence__init(&out_ros_data.components, Components.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.components  "));
        }
        UROS2Utils::StringArrayUEToROSSequence(Components, out_ros_data.components.data, Components.Num());
    }
};

UCLASS()
class RCLUE_API UROS2OverlappingObjectsMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSOverlappingObjects& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSOverlappingObjects& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    ue_msgs__msg__OverlappingObjects overlapping_objects_msg;
};
