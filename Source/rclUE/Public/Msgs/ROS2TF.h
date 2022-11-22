// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Transform.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/transform.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2TF.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTF
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Translation = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat Rotation = FQuat::Identity;

    FROSTF()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__Transform& in_ros_data)
    {
        Translation = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.translation);

        Rotation = UROS2Utils::QuatROSToUE(in_ros_data.rotation);
    }

    void SetROS2(geometry_msgs__msg__Transform& out_ros_data) const
    {
        out_ros_data.translation = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Translation);

        out_ros_data.rotation = UROS2Utils::QuatUEToROS(Rotation);
    }
};

UCLASS()
class RCLUE_API UROS2TFMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTF& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTF& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__Transform transform_msg;
};
