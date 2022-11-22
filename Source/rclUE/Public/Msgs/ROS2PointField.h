// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/PointField.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/point_field.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2PointField.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointField
{
    GENERATED_BODY()

public:
    static constexpr uint8 INT8 = 1;
    static constexpr uint8 UINT8 = 2;
    static constexpr uint8 INT16 = 3;
    static constexpr uint8 UINT16 = 4;
    static constexpr uint8 INT32 = 5;
    static constexpr uint8 UINT32 = 6;
    static constexpr uint8 FLOAT32 = 7;
    static constexpr uint8 FLOAT64 = 8;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere)
    unsigned int Offset = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 Datatype = 0;

    UPROPERTY(EditAnywhere)
    unsigned int Count = 0;

    FROSPointField()
    {
    }

    void SetFromROS2(const sensor_msgs__msg__PointField& in_ros_data)
    {
        Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);

        Offset = in_ros_data.offset;

        Datatype = in_ros_data.datatype;

        Count = in_ros_data.count;
    }

    void SetROS2(sensor_msgs__msg__PointField& out_ros_data) const
    {
        UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Name, out_ros_data.name);

        out_ros_data.offset = Offset;

        out_ros_data.datatype = Datatype;

        out_ros_data.count = Count;
    }
};

UCLASS()
class RCLUE_API UROS2PointFieldMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointField& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointField& Output) const;

    virtual void* Get() override;

    UFUNCTION(BlueprintCallable)
    static uint8 CONST_INT8()
    {
        return FROSPointField::INT8;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_UINT8()
    {
        return FROSPointField::UINT8;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_INT16()
    {
        return FROSPointField::INT16;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_UINT16()
    {
        return FROSPointField::UINT16;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_INT32()
    {
        return FROSPointField::INT32;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_UINT32()
    {
        return FROSPointField::UINT32;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_FLOAT32()
    {
        return FROSPointField::FLOAT32;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_FLOAT64()
    {
        return FROSPointField::FLOAT64;
    }

private:
    virtual FString MsgToString() const override;

    sensor_msgs__msg__PointField point_field_msg;
};
