#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/int64.h"



#include "ROS2Int64.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSInt64
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Int64;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int64 data;
    // rclc type: int64_t data

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
class RCLUE_API UROS2Int64 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Int64;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Int64__init(&int64_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Int64__fini(&int64_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int64);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSInt64& Input)
    {
        Input.SetROS2(int64_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSInt64& Output) const
    {
        Output.SetFromROS2(int64_msg);
    }

    virtual void* Get() override
    {
        return &int64_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename int64_msg;
};
