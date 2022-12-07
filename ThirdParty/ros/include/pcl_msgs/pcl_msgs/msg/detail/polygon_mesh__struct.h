// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POLYGON_MESH__STRUCT_H_
#define PCL_MSGS__MSG__DETAIL__POLYGON_MESH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'polygons'
#include "pcl_msgs/msg/detail/vertices__struct.h"

/// Struct defined in msg/PolygonMesh in the package pcl_msgs.
/**
  * Separate header for the polygonal surface
 */
typedef struct pcl_msgs__msg__PolygonMesh
{
  std_msgs__msg__Header header;
  /// Vertices of the mesh as a point cloud
  sensor_msgs__msg__PointCloud2 cloud;
  /// List of polygons
  pcl_msgs__msg__Vertices__Sequence polygons;
} pcl_msgs__msg__PolygonMesh;

// Struct for a sequence of pcl_msgs__msg__PolygonMesh.
typedef struct pcl_msgs__msg__PolygonMesh__Sequence
{
  pcl_msgs__msg__PolygonMesh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pcl_msgs__msg__PolygonMesh__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PCL_MSGS__MSG__DETAIL__POLYGON_MESH__STRUCT_H_
