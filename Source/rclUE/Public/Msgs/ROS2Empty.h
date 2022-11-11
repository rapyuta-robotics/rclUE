#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/empty.h"



#include "ROS2Empty.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSEmpty
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Empty;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int structure_needs_at_least_one_member;
    // rclc type: uint8_t structure_needs_at_least_one_member

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        structure_needs_at_least_one_member = in_ros_data.structure_needs_at_least_one_member;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.structure_needs_at_least_one_member = structure_needs_at_least_one_member;
    }
};

UCLASS()
class RCLUE_API UROS2Empty : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Empty;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Empty__init(&empty_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Empty__fini(&empty_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Empty);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSEmpty& Input)
    {
        Input.SetROS2(empty_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSEmpty& Output) const
    {
        Output.SetFromROS2(empty_msg);
    }

    virtual void* Get() override
    {
        return &empty_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename empty_msg;
};
