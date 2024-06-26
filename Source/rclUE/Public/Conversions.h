#pragma once

#include <iterator>

#include "rosidl_runtime_c/string_functions.h"
#include "geometry_msgs/msg/vector3.h"
#include "geometry_msgs/msg/quaternion.h"
#include "geographic_msgs/msg/geo_point.h"
#include "geometry_msgs/msg/point.h"
#include "geometry_msgs/msg/point32.h"
#include "geometry_msgs/msg/polygon.h"
#include "builtin_interfaces/msg/time.h"
#include "unique_identifier_msgs/msg/uuid.h"
#include "std_msgs/msg/color_rgba.h"

#include "GeographicCoordinates.h"
#include "Engine/Polys.h"

namespace ConversionsUtils
{
template <typename ROSSequenceT>
inline void ResetSequence(ROSSequenceT & out)
{
  out.data = nullptr;
  out.size = 0;
  out.capacity = 0;
}
}

namespace ArrayInitialisers
{

  template <typename T>
inline TArray<T> FloatArray(ssize_t elems)
{
  TArray<T> a;
  a.Init(0.0, elems);
  return a;
}

template <typename T>
inline TArray<T> IntArray(ssize_t elems)
{
  TArray<T> a;
  a.Init(0, elems);
  return a;
}
}

namespace ROS2MsgToUE
{

  inline double From(const float & in)
{
  return in;
}

  inline double From(const double & in)
  {
    return in;
  }
  
// forgive me father for I have sinned
inline int From(const int64_t & in)
{
  return static_cast<int>(in);
}

inline int32 From(const int32_t & in)
{
  return in;
}

inline int32 From(const int16_t & in)
{
  return static_cast<int32>(in);
}

inline int From(const int8_t & in)
{
  return static_cast<int>(in);
}

inline int64 From(const uint64_t & in)
{
  return static_cast<int64>(in);
}

inline int64 From(const uint32_t & in)
{
  return static_cast<int64>(in);
}

inline int32 From(const uint16_t & in)
{
  return static_cast<int32>(in);
}

inline uint8 From(const uint8_t & in)
{
  return in;
}

inline FGeographicCoordinates From(const geographic_msgs__msg__GeoPoint & in)
{
  return FGeographicCoordinates(in.longitude, in.latitude, in.altitude);
}

inline FVector From(const geometry_msgs__msg__Vector3 & in)
{
  return FVector(in.x, in.y, in.z);
}

inline FVector From(const geometry_msgs__msg__Point & in)
{
  return FVector(in.x, in.y, in.z);
}

inline UE::Math::TVector<double> From(const geometry_msgs__msg__Point32 & in)
{
  return UE::Math::TVector(static_cast<double>(in.x), static_cast<double>(in.y), static_cast<double>(in.z));
}

inline FString From(const rosidl_runtime_c__String & in)
{
  return FString(in.size, in.data);
}

inline FQuat From(const geometry_msgs__msg__Quaternion & in)
{
  return FQuat(in.x, in.y, in.z, in.w);
}

inline FGuid From(const unique_identifier_msgs__msg__UUID & in)
{
  uint32 * uuid = (uint32 *)&in.uuid; // todo - ensure the endianness is correct
  return FGuid(uuid[0], uuid[1], uuid[2], uuid[3]);
}

inline FDateTime From(const builtin_interfaces__msg__Time & in)
{
  return FDateTime::FromUnixTimestamp(in.sec) + FTimespan(0, 0, 0, 0, in.nanosec);
}

  inline FColor From(const std_msgs__msg__ColorRGBA & in)
  {
    return FColor(in.r * 255, in.g * 255, in.b * 255, in.a * 255);
  }

template <typename T, size_t N, std::enable_if_t<std::is_same<T, uint8>::value, bool> = false>
inline TArray<int> FromArray(const T (&in)[N])
{
  TArray<int> out;
  for (int i = 0; i < N; i++)
  {
    out.Add(in[i]);
  }
  return out;
}

template <size_t N>
inline TArray<uint8> FromArray(const uint8 (&in)[N])
{
  TArray<uint8> out;
  for (int i = 0; i < N; i++)
  {
    out.Add(in[i]);
  }
  return out;
}

template <size_t N>
inline TArray<double> FromArray(const double (&in)[N])
{
  TArray<double> out;
  for (int i = 0; i < N; i++)
  {
    out.Add(in[i]);
  }
  return out;
}

template <typename T, typename ROST>
inline TArray<T> FromStructSequence(const ROST & in)
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
inline TArray<T> FromSequence(const ROSSequenceT & in)
{
  TArray<T> Out;

  for (int i = 0; i < in.size; i++)
  {
    // TODO - case where uint8[] converts to TArray<FColor>
    Out.Add(From(in.data[i]));
  }

  return Out;
}
}

namespace UEToROS2Msg
{
inline void Set(const FGeographicCoordinates & in, geographic_msgs__msg__GeoPoint & out)
{
  out.longitude = in.Longitude;
  out.latitude = in.Latitude;
  out.altitude = in.Altitude;
}

  template <typename T>
inline void Set(const UE::Math::TVector<T> & in, geometry_msgs__msg__Vector3 & out)
{
  out.x = in.X;
  out.y = in.Y;
  out.z = in.Z;
}

  template <typename T>
inline void Set(const UE::Math::TVector<T> & in, geometry_msgs__msg__Point & out)
{
  out.x = in.X;
  out.y = in.Y;
  out.z = in.Z;
}

  template <typename T>
inline void Set(const UE::Math::TVector<T> & in, geometry_msgs__msg__Point32 & out)
{
  out.x = in.X;
  out.y = in.Y;
  out.z = in.Z;
}

inline void Set(const FGuid & in, unique_identifier_msgs__msg__UUID & out)
{
  uint32 * uuid = (uint32 *)&out.uuid; // TODO - ensure the endianness is correct
  uuid[0] = in.A;
  uuid[1] = in.B;
  uuid[2] = in.C;
  uuid[3] = in.D;
}

inline void Set(const float & in, float & out)
{
  out = in;
}

inline void Set(const float & in, double & out)
{
  out = in;
}

  inline void Set(const double & in, double & out)
{
  out = in;
}
  inline void Set(const double & in, float & out)
{
  out = in;
}
  
inline void Set(const int & in, int64_t & out)
{
  out = in;
}

inline void Set(const int & in, int32_t & out)
{
  out = in;
}

inline void Set(const int & in, int16_t & out)
{
  out = in;
}

inline void Set(const int & in, int8_t & out)
{
  out = in;
}

inline void Set(const int & in, uint64_t & out)
{
  out = in;
}

inline void Set(const int & in, uint32_t & out)
{
  out = in;
}

inline void Set(const int & in, uint16_t & out)
{
  out = in;
}

inline void Set(const int & in, uint8_t & out)
{
  out = in;
}

inline void Set(const FString & in, rosidl_runtime_c__String & out)
{
  auto Str = StringCast<ANSICHAR>(*in);
  out.data = (decltype(out.data))FMemory::Realloc(
    out.data, (Str.Length() + 1) * sizeof(decltype(*out.data)));
  memcpy(out.data, Str.Get(), Str.Length());
  out.data[Str.Length()] = '\0'; // rosidl c Strings are null terminated
  out.size = Str.Length();
  out.capacity = Str.Length() + 1;
}

inline void Set(const FQuat & in, geometry_msgs__msg__Quaternion & out)
{
  out.x = in.X;
  out.y = in.Y;
  out.z = in.Z;
  out.w = in.W;
}

  inline void Set(const FColor & in, std_msgs__msg__ColorRGBA & out)
  {
    out.r = in.R / 255.0;
    out.g = in.G / 255.0;
    out.b = in.B / 255.0;
    out.a = in.A / 255.0;
  }

template <typename T, typename ROST>
inline void SetStructSequence(const TArray<T> & in, ROST & out)
{
  if (out.data != nullptr)
  {
    FMemory::Free(out.data);
    out.data = nullptr;
  }

  if (in.Num() > 0)
  {
    out.data = (decltype(out.data))FMemory::MallocZeroed(in.Num() * sizeof(decltype(*out.data)));

    for (int i = 0; i < in.Num(); i++)
    {
      in[i].SetROS2(out.data[i]);
    }
  }

  out.size = in.Num();
  out.capacity = in.Num();
}

template <typename T, typename TAlloc, typename ROSSequenceT>
inline void SetSequence(const TArray<T, TAlloc> & in, ROSSequenceT & out)
{
  if (out.data != nullptr)
  {
    FMemory::Free(out.data);
    out.data = nullptr;
  }

  if (in.Num() > 0)
  {
    out.data = (decltype(out.data))FMemory::MallocZeroed(in.Num() * sizeof(decltype(*out.data)));

    for (int i = 0; i < in.Num(); i++)
    {
      Set(in[i], out.data[i]);
    }
  }

  out.size = in.Num();
  out.capacity = in.Num();
}

template <typename InT, typename OutT, size_t N>
inline void SetSequence(const TArray<InT> & in, OutT (&out)[N])
{
  ensure(std::distance(std::begin(out), std::end(out)) == in.Num());
  // SetSequence called when arrays lengths are different.

  for (int i = 0; i < N; i++)
  {
    out[i] = in[i];
  }
}

template <typename T, typename TAlloc>
inline void SetSequencePointer(
  const TArray<T, TAlloc> & in, rosidl_runtime_c__uint8__Sequence & out)
{
  // this prevents unnecessary memory copies of buffers

  // if (out.data != nullptr)
  // {
  //   FMemory::Free(out.data);
  //   out.data = nullptr;
  // }
  out.data = (uint8_t *)in.GetData();
  out.size = in.Num() * sizeof(T);
  out.capacity = in.Num() * sizeof(T);
}

inline void Set(const FPoly & in, geometry_msgs__msg__Polygon & out)
{
  SetSequence(in.Vertices, out.points);
}

inline void Set(const FDateTime & in, builtin_interfaces__msg__Time & out)
{
  FTimespan delta = in - FDateTime(1970, 1, 1);
  out.sec = delta.GetTotalSeconds();
  out.nanosec = delta.GetFractionNano();
}
}
