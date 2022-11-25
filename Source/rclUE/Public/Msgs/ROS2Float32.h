// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Float32.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/float32.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Float32.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSFloat32
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Data = 0.f;

    FROSFloat32()
    {
    }

    void SetFromROS2(const example_interfaces__msg__Float32& in_ros_data)
    {
        Data = in_ros_data.data;
    }

    void SetROS2(example_interfaces__msg__Float32& out_ros_data) const
    {
        out_ros_data.data = Data;
    }
};

UCLASS()
class RCLUE_API UROS2Float32Msg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSFloat32& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSFloat32& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__Float32 float32_msg;
};
