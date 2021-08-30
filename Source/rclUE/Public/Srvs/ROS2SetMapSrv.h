// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/SetMap.srv - do not modify

#pragma once

#include "CoreMinimal.h"

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "nav_msgs/srv/set_map.h"

#include "ROS2SetMapSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSetMap_Request
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int map_header_stamp_sec;

	unsigned int map_header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString map_header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int map_info_map_load_time_sec;

	unsigned int map_info_map_load_time_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float map_info_resolution;

	unsigned int map_info_width;

	unsigned int map_info_height;

	double map_info_origin_position_x;

	double map_info_origin_position_y;

	double map_info_origin_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat map_info_origin_orientation;

	TArray<int8> map_data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int initial_pose_header_stamp_sec;

	unsigned int initial_pose_header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString initial_pose_header_frame_id;

	double initial_pose_pose_pose_position_x;

	double initial_pose_pose_pose_position_y;

	double initial_pose_pose_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat initial_pose_pose_pose_orientation;

	TArray<double> initial_pose_pose_covariance;

	

	void SetFromROS2(nav_msgs__srv__SetMap_Request in_ros_data)
	{
    	map_header_stamp_sec = in_ros_data.map.header.stamp.sec;

		map_header_stamp_nanosec = in_ros_data.map.header.stamp.nanosec;

		map_header_frame_id.AppendChars(in_ros_data.map.header.frame_id.data, in_ros_data.map.header.frame_id.size);

		map_info_map_load_time_sec = in_ros_data.map.info.map_load_time.sec;

		map_info_map_load_time_nanosec = in_ros_data.map.info.map_load_time.nanosec;

		map_info_resolution = in_ros_data.map.info.resolution;

		map_info_width = in_ros_data.map.info.width;

		map_info_height = in_ros_data.map.info.height;

		map_info_origin_position_x = in_ros_data.map.info.origin.position.x;

		map_info_origin_position_y = in_ros_data.map.info.origin.position.y;

		map_info_origin_position_z = in_ros_data.map.info.origin.position.z;

		map_info_origin_orientation.X = in_ros_data.map.info.origin.orientation.x;
		map_info_origin_orientation.Y = in_ros_data.map.info.origin.orientation.y;
		map_info_origin_orientation.Z = in_ros_data.map.info.origin.orientation.z;
		map_info_origin_orientation.W = in_ros_data.map.info.origin.orientation.w;

		for (int i = 0; i < in_ros_data.map.data.size; i++)
		{
			map_data[i] = in_ros_data.map.data.data[i];
		}

		initial_pose_header_stamp_sec = in_ros_data.initial_pose.header.stamp.sec;

		initial_pose_header_stamp_nanosec = in_ros_data.initial_pose.header.stamp.nanosec;

		initial_pose_header_frame_id.AppendChars(in_ros_data.initial_pose.header.frame_id.data, in_ros_data.initial_pose.header.frame_id.size);

		initial_pose_pose_pose_position_x = in_ros_data.initial_pose.pose.pose.position.x;

		initial_pose_pose_pose_position_y = in_ros_data.initial_pose.pose.pose.position.y;

		initial_pose_pose_pose_position_z = in_ros_data.initial_pose.pose.pose.position.z;

		initial_pose_pose_pose_orientation.X = in_ros_data.initial_pose.pose.pose.orientation.x;
		initial_pose_pose_pose_orientation.Y = in_ros_data.initial_pose.pose.pose.orientation.y;
		initial_pose_pose_pose_orientation.Z = in_ros_data.initial_pose.pose.pose.orientation.z;
		initial_pose_pose_pose_orientation.W = in_ros_data.initial_pose.pose.pose.orientation.w;

		for (int i = 0; i < 36; i++)
		{
			initial_pose_pose_covariance[i] = in_ros_data.initial_pose.pose.covariance[i];
		}

		
	}

	void SetROS2(nav_msgs__srv__SetMap_Request& out_ros_data) const
	{
    	out_ros_data.map.header.stamp.sec = map_header_stamp_sec;

		out_ros_data.map.header.stamp.nanosec = map_header_stamp_nanosec;

		if (out_ros_data.map.header.frame_id.data != nullptr)
		{
			free(out_ros_data.map.header.frame_id.data);
		}
		out_ros_data.map.header.frame_id.data = (decltype(out_ros_data.map.header.frame_id.data))malloc((map_header_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.map.header.frame_id.data)));
		memcpy(out_ros_data.map.header.frame_id.data, TCHAR_TO_ANSI(*map_header_frame_id), (map_header_frame_id.Len()+1)*sizeof(char));
		out_ros_data.map.header.frame_id.size = map_header_frame_id.Len();
		out_ros_data.map.header.frame_id.capacity = map_header_frame_id.Len() + 1;

		out_ros_data.map.info.map_load_time.sec = map_info_map_load_time_sec;

		out_ros_data.map.info.map_load_time.nanosec = map_info_map_load_time_nanosec;

		out_ros_data.map.info.resolution = map_info_resolution;

		out_ros_data.map.info.width = map_info_width;

		out_ros_data.map.info.height = map_info_height;

		out_ros_data.map.info.origin.position.x = map_info_origin_position_x;

		out_ros_data.map.info.origin.position.y = map_info_origin_position_y;

		out_ros_data.map.info.origin.position.z = map_info_origin_position_z;

		out_ros_data.map.info.origin.orientation.x = map_info_origin_orientation.X;
		out_ros_data.map.info.origin.orientation.y = map_info_origin_orientation.Y;
		out_ros_data.map.info.origin.orientation.z = map_info_origin_orientation.Z;
		out_ros_data.map.info.origin.orientation.w = map_info_origin_orientation.W;

		if (out_ros_data.map.data.data != nullptr)
		{
			free(out_ros_data.map.data.data);
		}
		out_ros_data.map.data.data = (decltype(out_ros_data.map.data.data))malloc((map_data.Num())*sizeof(decltype(*out_ros_data.map.data.data)));
		
		for (int i = 0; i < map_data.Num(); i++)
		{
			out_ros_data.map.data.data[i] = map_data[i];
		}

		out_ros_data.map.data.size = map_data.Num();
		out_ros_data.map.data.capacity = map_data.Num();

		out_ros_data.initial_pose.header.stamp.sec = initial_pose_header_stamp_sec;

		out_ros_data.initial_pose.header.stamp.nanosec = initial_pose_header_stamp_nanosec;

		if (out_ros_data.initial_pose.header.frame_id.data != nullptr)
		{
			free(out_ros_data.initial_pose.header.frame_id.data);
		}
		out_ros_data.initial_pose.header.frame_id.data = (decltype(out_ros_data.initial_pose.header.frame_id.data))malloc((initial_pose_header_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.initial_pose.header.frame_id.data)));
		memcpy(out_ros_data.initial_pose.header.frame_id.data, TCHAR_TO_ANSI(*initial_pose_header_frame_id), (initial_pose_header_frame_id.Len()+1)*sizeof(char));
		out_ros_data.initial_pose.header.frame_id.size = initial_pose_header_frame_id.Len();
		out_ros_data.initial_pose.header.frame_id.capacity = initial_pose_header_frame_id.Len() + 1;

		out_ros_data.initial_pose.pose.pose.position.x = initial_pose_pose_pose_position_x;

		out_ros_data.initial_pose.pose.pose.position.y = initial_pose_pose_pose_position_y;

		out_ros_data.initial_pose.pose.pose.position.z = initial_pose_pose_pose_position_z;

		out_ros_data.initial_pose.pose.pose.orientation.x = initial_pose_pose_pose_orientation.X;
		out_ros_data.initial_pose.pose.pose.orientation.y = initial_pose_pose_pose_orientation.Y;
		out_ros_data.initial_pose.pose.pose.orientation.z = initial_pose_pose_pose_orientation.Z;
		out_ros_data.initial_pose.pose.pose.orientation.w = initial_pose_pose_pose_orientation.W;

		for (int i = 0; i < 36; i++)
		{
			out_ros_data.initial_pose.pose.covariance[i] = initial_pose_pose_covariance[i];
		}

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSetMap_Response
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool success;

	

	void SetFromROS2(nav_msgs__srv__SetMap_Response in_ros_data)
	{
    	success = in_ros_data.success;

		
	}

	void SetROS2(nav_msgs__srv__SetMap_Response& out_ros_data) const
	{
    	out_ros_data.success = success;

		
	}
};

UCLASS()
class RCLUE_API UROS2SetMapSrv : public UROS2GenericSrv
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
	void SetRequest(const FROSSetMap_Request& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSSetMap_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSSetMap_Response& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSSetMap_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	nav_msgs__srv__SetMap_Request SetMap_req;
	nav_msgs__srv__SetMap_Response SetMap_res;
};