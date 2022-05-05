#pragma once

#include <iterator>

#include "geometry_msgs/msg/vector3.h"
#include "geometry_msgs/msg/quaternion.h"
#include "geographic_msgs/msg/geo_point.h"
#include "geometry_msgs/msg/point32.h"
#include "geometry_msgs/msg/polygon.h"
#include "builtin_interfaces/msg/time.h"

#include "GeographicCoordinates.h"
#include "Engine/Polys.h"
#include "Msgs/ROS2OdometryMsg.h"
#include "Msgs/ROS2TimeMsg.h"

namespace ArrayInitialisers
{
	inline TArray<float> FloatArray(ssize_t elems)
	{
		TArray<float> a;
		a.Init(0.0, elems);
		return a;
	}
}

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

	inline FVector FromPoint(const geometry_msgs__msg__Point& in)
	{
		return FVector(in.x, in.y, in.z);
	}

	inline FVector From(const geometry_msgs__msg__Point32& in)
	{
		return FVector(in.x, in.y, in.z);
	}

	inline FString From(const rosidl_runtime_c__String& in)
	{
		return FString(in.size, in.data);
	}

	inline FQuat FromQuaternion(const geometry_msgs__msg__Quaternion& in)
	{
		return FQuat(in.x, in.y, in.z, in.w);
	}

	inline FGuid From(const unique_identifier_msgs__msg__UUID& in)
	{
		uint32* uuid = (uint32*) &in.uuid; // todo - ensure the endianness is correct
		return FGuid(uuid[0], uuid[1], uuid[2], uuid[3]);
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

	template <typename T, typename ROST>
	inline TArray<T> FromStructSequence(const ROST& in)
	{
		TArray<T> Out;
		
		for (int i = 0; i < in.size; i++)
		{
			T InStruct;
			InStruct.SetFromROS2(in.data[i]);
			Out.Add(InStruct);
		}
		
		return Out;
	}
	
	template <typename T, typename ROSSequenceT>
	inline T FromSequence(const ROSSequenceT& in) // TODO: change to be template param of TArray
	{
		T Out;
		for (int i = 0; i < in.size; i++)
		{
			Out.Add(From(in.data[i]));
		}
		
		return Out;
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

	inline void SetPoint(const FVector& in, geometry_msgs__msg__Point& out)
	{
		out.x = in.X;
		out.y = in.Y;
		out.z = in.Z;
	}
	
	inline void Set(const FVector& in, geometry_msgs__msg__Point32& out)
	{
		out.x = in.X;
		out.y = in.Y;
		out.z = in.Z;
	}

	inline void Set(const FGuid& in, unique_identifier_msgs__msg__UUID& out)
	{
		uint32* uuid = (uint32*) &out.uuid; // TODO - ensure the endianness is correct
		uuid[0] = in.A;
		uuid[1] = in.B;
		uuid[2] = in.C;
		uuid[3] = in.D;
	}

	inline void Set(const FString& in, rosidl_runtime_c__String& out)
	{
		auto Str = StringCast<ANSICHAR>(*in);
		out.data = (decltype(out.data)) FMemory::Realloc(out.data, (Str.Length() + 1) * sizeof(decltype(*out.data)));
		memcpy(out.data, Str.Get(), Str.Length());
		out.data[Str.Length()] = '\0'; // rosidl c Strings are null terminated
		out.size = Str.Length();
		out.capacity = Str.Length() + 1;
	}
	
	inline void SetQuaternion(const FQuat& in, geometry_msgs__msg__Quaternion& out)
	{
		out.x = in.X;
		out.y = in.Y;
		out.z = in.Z;
		out.w = in.W;
	}

	template <typename T, typename ROST>
	inline void SetStructSequence(const TArray<T>& in, ROST &out)
	{
		if (out.data != nullptr)
		{
			FMemory::Free(out.data);
			out.data = nullptr;
		}

		if (in.Num() > 0)
		{
			out.data = (decltype(out.data)) FMemory::MallocZeroed(in.Num() * sizeof(decltype(*out.data)));

			for (int i = 0; i < in.Num(); i++)
			{
				in[i].SetROS2(out.data[i]);
			}
		}

		out.size = in.Num();
		out.capacity = in.Num();
	}

	template <typename T, typename ROSSequenceT>
	inline void SetSequence(const T& in, ROSSequenceT &out) // TODO: change to be template param of TArray
	{
		if (out.data != nullptr)
		{
			FMemory::Free(out.data);
			out.data = nullptr;
		}

		if (in.Num() > 0)
		{
			out.data = (decltype(out.data)) FMemory::MallocZeroed(in.Num() * sizeof(decltype(*out.data)));

			for (int i = 0; i < in.Num(); i++)
			{
				Set(in[i], out.data[i]);
			}
		}

		out.size = in.Num();
		out.capacity = in.Num();
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

	inline void SetPolygon(const FPoly& in, geometry_msgs__msg__Polygon& out)
	{
		SetSequence(in.Vertices, out.points);
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
