// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Char.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/char.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Char.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSChar
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 Data = 0;

    FROSChar()
    {
    }

    void SetFromROS2(const example_interfaces__msg__Char& in_ros_data)
    {
        Data = in_ros_data.data;
    }

    void SetROS2(example_interfaces__msg__Char& out_ros_data) const
    {
        out_ros_data.data = Data;
    }
};

UCLASS()
class RCLUE_API UROS2CharMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSChar& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSChar& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__Char char_msg;
};
