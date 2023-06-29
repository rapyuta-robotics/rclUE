// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/CompressedImage.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/compressed_image.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2CompImg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSCompImg
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Format;

    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;

    FROSCompImg()
    {
    }

    void SetFromROS2(const sensor_msgs__msg__CompressedImage& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Format = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.format);

        UROS2Utils::SequenceROSToUEArray<uint8, uint8>(in_ros_data.data.data, Data, in_ros_data.data.size);
    }

    void SetROS2(sensor_msgs__msg__CompressedImage& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        UROS2Utils::StringUEToROS(Format, out_ros_data.format);

        if (out_ros_data.data.data)
        {
            rosidl_runtime_c__uint8__Sequence__fini(&out_ros_data.data);
        }
        if (!rosidl_runtime_c__uint8__Sequence__init(&out_ros_data.data, Data.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.data  "));
        }
        UROS2Utils::ArrayUEToROSSequence<uint8, uint8>(Data, out_ros_data.data.data, Data.Num());
    }
};

UCLASS()
class RCLUE_API UROS2CompImgMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSCompImg& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSCompImg& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    sensor_msgs__msg__CompressedImage compressed_image_msg;
};
