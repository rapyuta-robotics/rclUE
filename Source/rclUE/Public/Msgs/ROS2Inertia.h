#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/inertia.h"


// Include directives for member types
#include "Msgs/ROS2Vector3.h"

#include "ROS2Inertia.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSInertia
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Inertia;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float m;
    // rclc type: double m

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector com = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 com

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ixx;
    // rclc type: double ixx

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ixy;
    // rclc type: double ixy

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ixz;
    // rclc type: double ixz

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float iyy;
    // rclc type: double iyy

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float iyz;
    // rclc type: double iyz

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float izz;
    // rclc type: double izz

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        m = in_ros_data.m;
        com = ROS2MsgToUE::From(in_ros_data.com);
        ixx = in_ros_data.ixx;
        ixy = in_ros_data.ixy;
        ixz = in_ros_data.ixz;
        iyy = in_ros_data.iyy;
        iyz = in_ros_data.iyz;
        izz = in_ros_data.izz;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.m = m;
        UEToROS2Msg::Set(com, out_ros_data.com);
        out_ros_data.ixx = ixx;
        out_ros_data.ixy = ixy;
        out_ros_data.ixz = ixz;
        out_ros_data.iyy = iyy;
        out_ros_data.iyz = iyz;
        out_ros_data.izz = izz;
    }
};

UCLASS()
class RCLUE_API UROS2Inertia : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Inertia;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Inertia__init(&inertia_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Inertia__fini(&inertia_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Inertia);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSInertia& Input)
    {
        Input.SetROS2(inertia_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSInertia& Output) const
    {
        Output.SetFromROS2(inertia_msg);
    }

    virtual void* Get() override
    {
        return &inertia_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename inertia_msg;
};
