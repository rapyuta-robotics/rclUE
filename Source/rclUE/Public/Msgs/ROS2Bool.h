#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/bool.h"



#include "ROS2Bool.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSBool
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Bool;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool data;
    // rclc type: bool data

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
class RCLUE_API UROS2Bool : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Bool;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Bool__init(&bool_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Bool__fini(&bool_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Bool);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSBool& Input)
    {
        Input.SetROS2(bool_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSBool& Output) const
    {
        Output.SetFromROS2(bool_msg);
    }

    virtual void* Get() override
    {
        return &bool_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename bool_msg;
};
