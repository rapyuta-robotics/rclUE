// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/SpawnWorld.srv

#pragma once

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/spawn_world.h"

#include <CoreMinimal.h>

#include "ROS2SpawnWorldSrv.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROS2SpawnWorldRequest
{
    GENERATED_BODY()

public:
    UPROPERTY()
    FString WorldModelName;

    UPROPERTY()
    FString WorldActorName;

    UPROPERTY()
    double PositionX = 0.f;
    UPROPERTY()
    double PositionY = 0.f;
    UPROPERTY()
    double PositionZ = 0.f;

    UPROPERTY()
    FQuat Orientation = FQuat::Identity;

    void SetFromROS2(const ue_msgs__srv__SpawnWorld_Request& in_ros_data)
    {
        WorldModelName.AppendChars(in_ros_data.world_model.data, in_ros_data.world_model.size);

        WorldActorName.AppendChars(in_ros_data.state.name.data, in_ros_data.state.name.size);

        PositionX = in_ros_data.state.pose.position.x;
        PositionY = in_ros_data.state.pose.position.y;
        PositionZ = in_ros_data.state.pose.position.z;

        Orientation.X = in_ros_data.state.pose.orientation.x;
        Orientation.Y = in_ros_data.state.pose.orientation.y;
        Orientation.Z = in_ros_data.state.pose.orientation.z;
        Orientation.W = in_ros_data.state.pose.orientation.w;
    }

    void SetROS2(ue_msgs__srv__SpawnWorld_Request& out_ros_data) const
    {
        // world_model
        {
            FTCHARToUTF8 strUtf8(*WorldModelName);
            int32 strLength = strUtf8.Length();
            if (out_ros_data.world_model.data != nullptr)
            {
                free(out_ros_data.world_model.data);
            }
            out_ros_data.world_model.data =
                (decltype(out_ros_data.world_model.data))malloc((strLength + 1) * sizeof(decltype(*out_ros_data.world_model.data)));
            memcpy(out_ros_data.world_model.data, TCHAR_TO_UTF8(*WorldModelName), (strLength + 1) * sizeof(char));
            out_ros_data.world_model.size = strLength;
            out_ros_data.world_model.capacity = strLength + 1;
        }

        // state_name
        {
            FTCHARToUTF8 strUtf8(*WorldActorName);
            int32 strLength = strUtf8.Length();
            if (out_ros_data.state.name.data != nullptr)
            {
                free(out_ros_data.state.name.data);
            }
            out_ros_data.state.name.data =
                (decltype(out_ros_data.state.name.data))malloc((strLength + 1) * sizeof(decltype(*out_ros_data.state.name.data)));
            memcpy(out_ros_data.state.name.data, TCHAR_TO_UTF8(*WorldActorName), (strLength + 1) * sizeof(char));
            out_ros_data.state.name.size = strLength;
            out_ros_data.state.name.capacity = strLength + 1;
        }

        out_ros_data.state.pose.position.x = PositionX;
        out_ros_data.state.pose.position.y = PositionY;
        out_ros_data.state.pose.position.z = PositionZ;

        out_ros_data.state.pose.orientation.x = Orientation.X;
        out_ros_data.state.pose.orientation.y = Orientation.Y;
        out_ros_data.state.pose.orientation.z = Orientation.Z;
        out_ros_data.state.pose.orientation.w = Orientation.W;
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROS2SpawnWorldResponse
{
    GENERATED_BODY()

public:
    UPROPERTY()
    bool bSuccess;

    UPROPERTY()
    FString StatusMessage;

    void SetFromROS2(const ue_msgs__srv__SpawnWorld_Response& in_ros_data)
    {
        bSuccess = in_ros_data.success;
        StatusMessage.AppendChars(in_ros_data.status_message.data, in_ros_data.status_message.size);
    }

    void SetROS2(ue_msgs__srv__SpawnWorld_Response& out_ros_data) const
    {
        out_ros_data.success = bSuccess;

        {
            FTCHARToUTF8 strUtf8(*StatusMessage);
            int32 strLength = strUtf8.Length();
            if (out_ros_data.status_message.data != nullptr)
            {
                free(out_ros_data.status_message.data);
            }
            out_ros_data.status_message.data = (decltype(out_ros_data.status_message.data))malloc(
                (strLength + 1) * sizeof(decltype(*out_ros_data.status_message.data)));
            memcpy(out_ros_data.status_message.data, TCHAR_TO_UTF8(*StatusMessage), (strLength + 1) * sizeof(char));
            out_ros_data.status_message.size = strLength;
            out_ros_data.status_message.capacity = strLength + 1;
        }
    }
};

UCLASS()
class RCLUE_API UROS2SpawnWorldSrv : public UROS2GenericSrv
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    virtual void Init() override;

    UFUNCTION(BlueprintCallable)
    virtual void Fini() override;

    virtual const rosidl_service_type_support_t* GetTypeSupport() const override;

    // used by client
    UFUNCTION(BlueprintCallable)
    void SetRequest(const FROS2SpawnWorldRequest& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROS2SpawnWorldRequest& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROS2SpawnWorldResponse& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROS2SpawnWorldResponse& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    ue_msgs__srv__SpawnWorld_Request SpawnWorld_req;
    ue_msgs__srv__SpawnWorld_Response SpawnWorld_res;
};
