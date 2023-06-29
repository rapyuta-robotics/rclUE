// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/msg/HitResult.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/msg/hit_result.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2HitResult.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSHitResult
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bBlockingHit = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bStartPenetrating = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ComponentName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ActorName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Distance = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 ElementIndex = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int FaceIndex = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString BoneName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Item = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString MyBoneName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int MyItem = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PenetrationDepth = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString PhysicsMaterialName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Time = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ImpactNormal = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ImpactPoint = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Normal = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Location = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceStart = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector TraceEnd = FVector::ZeroVector;

    FROSHitResult()
    {
    }

    void SetFromROS2(const ue_msgs__msg__HitResult& in_ros_data)
    {
        bBlockingHit = in_ros_data.blocking_hit;

        bStartPenetrating = in_ros_data.start_penetrating;

        ComponentName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.component_name);

        ActorName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.actor_name);

        Distance = in_ros_data.distance;

        ElementIndex = in_ros_data.element_index;

        FaceIndex = in_ros_data.face_index;

        BoneName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.bone_name);

        Item = in_ros_data.item;

        MyBoneName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.my_bone_name);

        MyItem = in_ros_data.my_item;

        PenetrationDepth = in_ros_data.penetration_depth;

        PhysicsMaterialName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.physics_material_name);

        Time = in_ros_data.time;

        ImpactNormal = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.impact_normal);

        ImpactPoint = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.impact_point);

        Normal = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.normal);

        Location = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.location);

        TraceStart = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.trace_start);

        TraceEnd = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.trace_end);
    }

    void SetROS2(ue_msgs__msg__HitResult& out_ros_data) const
    {
        out_ros_data.blocking_hit = bBlockingHit;

        out_ros_data.start_penetrating = bStartPenetrating;

        UROS2Utils::StringUEToROS(ComponentName, out_ros_data.component_name);

        UROS2Utils::StringUEToROS(ActorName, out_ros_data.actor_name);

        out_ros_data.distance = Distance;

        out_ros_data.element_index = ElementIndex;

        out_ros_data.face_index = FaceIndex;

        UROS2Utils::StringUEToROS(BoneName, out_ros_data.bone_name);

        out_ros_data.item = Item;

        UROS2Utils::StringUEToROS(MyBoneName, out_ros_data.my_bone_name);

        out_ros_data.my_item = MyItem;

        out_ros_data.penetration_depth = PenetrationDepth;

        UROS2Utils::StringUEToROS(PhysicsMaterialName, out_ros_data.physics_material_name);

        out_ros_data.time = Time;

        out_ros_data.impact_normal = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(ImpactNormal);

        out_ros_data.impact_point = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(ImpactPoint);

        out_ros_data.normal = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Normal);

        out_ros_data.location = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(Location);

        out_ros_data.trace_start = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(TraceStart);

        out_ros_data.trace_end = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(TraceEnd);
    }
};

UCLASS()
class RCLUE_API UROS2HitResultMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSHitResult& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSHitResult& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    ue_msgs__msg__HitResult hit_result_msg;
};
