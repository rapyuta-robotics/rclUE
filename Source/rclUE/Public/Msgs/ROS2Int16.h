#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/int16.h"



#include "ROS2Int16.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSInt16
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Int16;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int data;
    // rclc type: int16_t data

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        data = in_ros_data.data;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.data = data;
    }
};

UCLASS()
class RCLUE_API UROS2Int16 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Int16;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Int16__init(&int16_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Int16__fini(&int16_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int16);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSInt16& Input)
    {
        Input.SetROS2(int16_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSInt16& Output) const
    {
        Output.SetFromROS2(int16_msg);
    }

    virtual void* Get() override
    {
        return &int16_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename int16_msg;
};
