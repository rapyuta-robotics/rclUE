// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/QuaternionStamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/quaternion_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2QuatStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSQuatStamped
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat Quaternion = FQuat::Identity;

    FROSQuatStamped()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__QuaternionStamped& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Quaternion = UROS2Utils::QuatROSToUE(in_ros_data.quaternion);
    }

    void SetROS2(geometry_msgs__msg__QuaternionStamped& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        out_ros_data.quaternion = UROS2Utils::QuatUEToROS(Quaternion);
    }
};

UCLASS()
class RCLUE_API UROS2QuatStampedMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSQuatStamped& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSQuatStamped& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__QuaternionStamped quaternion_stamped_msg;
};
