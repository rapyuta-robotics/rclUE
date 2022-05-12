// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from UE_msgs/SpawnEntities.srv - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/spawn_entities.h"

#include "ROS2SpawnEntitiesSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntitiesRequest
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> TypeList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> NameList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> PositionList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FQuat> OrientationList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> TwistLinearList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> TwistAngularList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> ReferenceFrameList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> TagsList;

    void SetFromROS2(const ue_msgs__srv__SpawnEntities_Request& in_ros_data)
    {
        for (auto i = 0; i < in_ros_data.type.size; ++i)
        {
            TypeList.Add("");
            TypeList[i].AppendChars(in_ros_data.type.data[i].data, in_ros_data.type.data[i].size);
        }

        for (auto i = 0; i < in_ros_data.state.size; ++i)
        {
            NameList.Add("");
            NameList[i].AppendChars(in_ros_data.state.data[i].name.data, in_ros_data.state.data[i].name.size);
        }

        for (auto i = 0; i < in_ros_data.state.size; ++i)
        {
            PositionList.Add(FVector(in_ros_data.state.data[i].pose.position.x,
                                     in_ros_data.state.data[i].pose.position.y,
                                     in_ros_data.state.data[i].pose.position.z));
            OrientationList.Add(FQuat(in_ros_data.state.data[i].pose.orientation.x,
                                      in_ros_data.state.data[i].pose.orientation.y,
                                      in_ros_data.state.data[i].pose.orientation.z,
                                      in_ros_data.state.data[i].pose.orientation.w));
        }

        for (auto i = 0; i < in_ros_data.state.size; ++i)
        {
            TwistLinearList.Add(FVector(in_ros_data.state.data[i].twist.linear.x,
                                        in_ros_data.state.data[i].twist.linear.y,
                                        in_ros_data.state.data[i].twist.linear.z));
            TwistAngularList.Add(FVector(in_ros_data.state.data[i].twist.angular.x,
                                         in_ros_data.state.data[i].twist.angular.y,
                                         in_ros_data.state.data[i].twist.angular.z));
        }

        for (auto i = 0; i < in_ros_data.state.size; ++i)
        {
            ReferenceFrameList.Add("");
            ReferenceFrameList[i].AppendChars(in_ros_data.state.data[i].reference_frame.data,
                                              in_ros_data.state.data[i].reference_frame.size);
        }

        for (auto i = 0; i < in_ros_data.tags.size; ++i)
        {
            TagsList.Add("");
            TagsList[i].AppendChars(in_ros_data.tags.data[i].data, in_ros_data.tags.data[i].size);
        }
    }

    void SetROS2(ue_msgs__srv__SpawnEntities_Request& out_ros_data) const
    {
        if (out_ros_data.type.data != nullptr)
        {
            free(out_ros_data.type.data);
        }
        out_ros_data.type.data =
            (decltype(out_ros_data.type.data))malloc((TypeList.Num()) * sizeof(decltype(*out_ros_data.type.data)));
        for (auto i = 0; i < TypeList.Num(); ++i)
        {
            {
                FTCHARToUTF8 strUtf8(*TypeList[i]);
                int32 strLength = strUtf8.Length();
                if (out_ros_data.type.data[i].data != nullptr)
                {
                    free(out_ros_data.type.data[i].data);
                }
                out_ros_data.type.data[i].data = (char*)malloc((strLength + 1) * sizeof(char));
                memcpy(out_ros_data.type.data[i].data, TCHAR_TO_UTF8(*TypeList[i]), (strLength + 1) * sizeof(char));
                out_ros_data.type.data[i].size = strLength;
                out_ros_data.type.data[i].capacity = strLength + 1;
            }
        }

        if (out_ros_data.state.data != nullptr)
        {
            free(out_ros_data.state.data);
        }
        out_ros_data.state.data = (decltype(out_ros_data.state.data))malloc(
            NameList.Num() * (sizeof(TypeList) + sizeof(NameList) + sizeof(PositionList) + sizeof(OrientationList) +
                              sizeof(TwistLinearList) + sizeof(TwistAngularList) + sizeof(ReferenceFrameList)));
        out_ros_data.state.size = NameList.Num();
        out_ros_data.state.capacity = NameList.Num();
        for (auto i = 0; i < NameList.Num(); ++i)
        {
            {
                FTCHARToUTF8 strUtf8(*NameList[i]);
                int32 strLength = strUtf8.Length();
                out_ros_data.state.data[i].name.data = (decltype(out_ros_data.state.data[i].name.data))malloc(
                    (strLength + 1) * sizeof(decltype(*out_ros_data.state.data[i].name.data)));
                memcpy(out_ros_data.state.data[i].name.data, TCHAR_TO_UTF8(*NameList[i]), (strLength + 1) * sizeof(char));
                out_ros_data.state.data[i].name.size = strLength;
                out_ros_data.state.data[i].name.capacity = strLength + 1;
            }

            out_ros_data.state.data[i].pose.position.x = PositionList[i].X;
            out_ros_data.state.data[i].pose.position.y = PositionList[i].Y;
            out_ros_data.state.data[i].pose.position.z = PositionList[i].Z;

            out_ros_data.state.data[i].pose.orientation.x = OrientationList[i].X;
            out_ros_data.state.data[i].pose.orientation.y = OrientationList[i].Y;
            out_ros_data.state.data[i].pose.orientation.z = OrientationList[i].Z;
            out_ros_data.state.data[i].pose.orientation.w = OrientationList[i].W;

            out_ros_data.state.data[i].twist.linear.x = TwistLinearList[i].X;
            out_ros_data.state.data[i].twist.linear.y = TwistLinearList[i].Y;
            out_ros_data.state.data[i].twist.linear.z = TwistLinearList[i].Z;
            out_ros_data.state.data[i].twist.angular.x = TwistAngularList[i].X;
            out_ros_data.state.data[i].twist.angular.y = TwistAngularList[i].Y;
            out_ros_data.state.data[i].twist.angular.z = TwistAngularList[i].Z;

            {
                FTCHARToUTF8 strUtf8(*ReferenceFrameList[i]);
                int32 strLength = strUtf8.Length();
                out_ros_data.state.data[i].reference_frame.data = (decltype(out_ros_data.state.data[i].reference_frame.data))malloc(
                    (strLength + 1) * sizeof(decltype(*out_ros_data.state.data[i].reference_frame.data)));
                memcpy(out_ros_data.state.data[i].reference_frame.data,
                       TCHAR_TO_UTF8(*ReferenceFrameList[i]),
                       (strLength + 1) * sizeof(char));
                out_ros_data.state.data[i].reference_frame.size = strLength;
                out_ros_data.state.data[i].reference_frame.capacity = strLength + 1;
            }
        }
        if (out_ros_data.tags.data != nullptr)
        {
            free(out_ros_data.tags.data);
        }
        out_ros_data.tags.data =
            (decltype(out_ros_data.tags.data))malloc((TagsList.Num()) * sizeof(decltype(*out_ros_data.tags.data)));
        for (auto i = 0; i < TagsList.Num(); ++i)
        {
            {
                FTCHARToUTF8 strUtf8(*TagsList[i]);
                int32 strLength = strUtf8.Length();
                if (out_ros_data.tags.data[i].data != nullptr)
                {
                    free(out_ros_data.tags.data[i].data);
                }
                out_ros_data.tags.data[i].data = (char*)malloc((strLength + 1) * sizeof(char));
                memcpy(out_ros_data.tags.data[i].data, TCHAR_TO_UTF8(*TagsList[i]), (strLength + 1) * sizeof(char));
                out_ros_data.tags.data[i].size = strLength;
                out_ros_data.tags.data[i].capacity = strLength + 1;
            }
        }
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntitiesResponse
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString StatusMessage;

    void SetFromROS2(const ue_msgs__srv__SpawnEntities_Response& in_ros_data)
    {
        bSuccess = in_ros_data.success;

        StatusMessage.AppendChars(in_ros_data.status_message.data, in_ros_data.status_message.size);
    }

    void SetROS2(ue_msgs__srv__SpawnEntities_Response& out_ros_data) const
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
class RCLUE_API UROS2SpawnEntitiesSrv : public UROS2GenericSrv
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
    void SetRequest(const FROSSpawnEntitiesRequest& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSSpawnEntitiesRequest& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSSpawnEntitiesResponse& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSSpawnEntitiesResponse& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    ue_msgs__srv__SpawnEntities_Request SpawnEntitiesReq;
    ue_msgs__srv__SpawnEntities_Response SpawnEntitiesRes;
};