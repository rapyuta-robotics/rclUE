#pragma once

#include <GeographicCoordinates.h>
#include <iterator>

#include "geometry_msgs/msg/vector3.h"
#include "geometry_msgs/msg/quaternion.h"
#include "geographic_msgs/msg/geo_point.h"
#include "builtin_interfaces/msg/time.h"
#include "Msgs/ROS2TimeMsg.h"

// builtin_interfaces__msg__Time --> FDateTime ???

namespace ROS2MsgToUE
{
	inline FGeographicCoordinates FromGeoPoint(const geographic_msgs__msg__GeoPoint& in)
	{
		return FGeographicCoordinates(in.longitude, in.latitude, in.altitude);
	}

	inline FVector FromVector3(const geometry_msgs__msg__Vector3& in)
	{
		return FVector(in.x, in.y, in.z);
	}

	inline FQuat FromQuaternion(const geometry_msgs__msg__Quaternion& in)
	{
		return FQuat(in.x, in.y, in.z, in.w);
	}

	template <size_t N>
	inline TArray<float> FromArray(const double (&in)[N])
	{
		TArray<float> out;
		for (int i = 0; i < N; i++)
		{
			out.Add(in[i]);
		}
		return out;
	}

	inline FDateTime FromTime(const builtin_interfaces__msg__Time &in)
	{
		return FDateTime::FromUnixTimestamp(in.sec) + FTimespan(0,0,0,0, in.nanosec);
	}
}

namespace UEToROS2Msg
{
	inline void SetGeoPoint(const FGeographicCoordinates& in, geographic_msgs__msg__GeoPoint& out)
	{
		out.longitude = in.Longitude;
		out.latitude = in.Latitude;
		out.altitude = in.Altitude;
	}

	inline void SetVector3(const FVector& in, geometry_msgs__msg__Vector3& out)
	{
		out.x = in.X;
		out.y = in.Y;
		out.z = in.Z;
	}

	inline void SetQuaternion(const FQuat& in, geometry_msgs__msg__Quaternion& out)
	{
		out.x = in.X;
		out.y = in.Y;
		out.z = in.Z;
		out.w = in.W;
	}

	template <size_t N>
	inline void SetSequence(const TArray<float>& in, double (&out)[N])
	{
		ensure(std::distance(std::begin(out), std::end(out)) == in.Num()); // SetSequence called when arrays lengths are different.

		for (int i = 0; i < N; i++)
		{
			out[i] = in[i];
		}
	}

	inline void SetTime(const FDateTime& in, builtin_interfaces__msg__Time& out)
	{
		FTimespan delta = in - FDateTime(1970, 1, 1);
		out.sec = delta.GetTotalSeconds();
		out.nanosec = delta.GetFractionNano();
	}

	inline void SetTime(const FDateTime& in, FROSTime& out)
	{
		FTimespan delta = in - FDateTime(1970, 1, 1);
		out.sec = delta.GetTotalSeconds();
		out.nanosec = delta.GetFractionNano();
	}
}
