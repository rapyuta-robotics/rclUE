// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Point32.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/point32.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Point32.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoint32
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float X = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Y = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Z = 0.f;

    FROSPoint32()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__Point32& in_ros_data)
    {
        X = in_ros_data.x;

        Y = in_ros_data.y;

        Z = in_ros_data.z;
    }

    void SetROS2(geometry_msgs__msg__Point32& out_ros_data) const
    {
        out_ros_data.x = X;

        out_ros_data.y = Y;

        out_ros_data.z = Z;
    }
};

UCLASS()
class RCLUE_API UROS2Point32Msg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPoint32& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPoint32& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__Point32 point32_msg;
};
