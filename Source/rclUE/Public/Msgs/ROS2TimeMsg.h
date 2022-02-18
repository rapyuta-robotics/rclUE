#pragma once

#include <CoreMinimal.h>

#include "builtin_interfaces/msg/time.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2TimeMsg.generated.h"

USTRUCT(Blueprintable, meta=(DisplayName="builtin_interfaces/msg/Time")) // TODO how do I escape this?
struct RCLUE_API FROSTime
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 sec;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int64 nanosec; // original uint32

    void SetFromROS2(const builtin_interfaces__msg__Time& in_ros_data)
    {
        sec = in_ros_data.sec;
        nanosec = in_ros_data.nanosec;
    }

    void SetROS2(builtin_interfaces__msg__Time& out_ros_data) const
    {
        out_ros_data.sec = sec;
        out_ros_data.nanosec = static_cast<uint32_t>(nanosec);
    }
};

// Does there need to be a class as well as the struct?
UCLASS()
class RCLUE_API UROS2TimeMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
    
      UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTime& Input);
    
      UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTime& Output) const;
    
    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    builtin_interfaces__msg__Time time_msg;
};