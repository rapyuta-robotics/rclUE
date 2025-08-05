#pragma once

#include "CoreMinimal.h"
#include "guided_vr_interfaces/msg/notification2_d.h"
#include "Msgs/ROS2GenericMsg.h"
#include "geometry_msgs/msg/point.h"
#include "rclcUtilities.h"
#include "ROS2Time.h"
#include "ROSNotification2D.generated.h"

USTRUCT(BlueprintType)
struct RCLUE_API FROSNotification2D
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Source;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Desc;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 Level;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTime Stamp;    // Assume you have a Blueprintable wrapper for builtin_interfaces/Time

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Id;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector2D> Polygon;

    void SetROS2(guided_vr_interfaces__msg__Notification2D& OutROSData) const
    {
        UROS2Utils::StringUEToROS(Source, OutROSData.source.data);
        UROS2Utils::StringUEToROS(Source, OutROSData.desc.data);
        OutROSData.level.data = Level;
        Stamp.SetROS2(OutROSData.stamp);
        OutROSData.id = Id;
        // Convert Polygon array
        size_t sz = Polygon.Num();
        if (OutROSData.polygon.size != sz) {
            geometry_msgs__msg__Point__Sequence__fini(&OutROSData.polygon);
            geometry_msgs__msg__Point__Sequence__init(&OutROSData.polygon, sz);
        }
        for (size_t i = 0; i < sz; ++i) {
            OutROSData.polygon.data[i].x = Polygon[i].X;
            OutROSData.polygon.data[i].y = Polygon[i].Y;
            OutROSData.polygon.data[i].z = 0.0;
        }
    }

    void SetFromROS2(const guided_vr_interfaces__msg__Notification2D& InROSData)
    {
        Source = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(InROSData.source.data);
        Desc = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(InROSData.desc.data);
        Level = InROSData.level.data;
        Stamp.SetFromROS2(InROSData.stamp);
        Id = InROSData.id;
        Polygon.Empty();
        for (size_t i = 0; i < InROSData.polygon.size; ++i) {
            auto& pt = InROSData.polygon.data[i];
            Polygon.Add(FVector2D(pt.x, pt.y));
        }
    }
};

UCLASS()
class RCLUE_API UROSNotification2DMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;
    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSNotification2D& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSNotification2D& Output) const;

    virtual void* Get() override;
    virtual FString MsgToString() const override;

private:
    guided_vr_interfaces__msg__Notification2D Notification2D_msg;
};