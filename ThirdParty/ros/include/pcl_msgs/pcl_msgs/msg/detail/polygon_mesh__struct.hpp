// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POLYGON_MESH__STRUCT_HPP_
#define PCL_MSGS__MSG__DETAIL__POLYGON_MESH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'polygons'
#include "pcl_msgs/msg/detail/vertices__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pcl_msgs__msg__PolygonMesh __attribute__((deprecated))
#else
# define DEPRECATED__pcl_msgs__msg__PolygonMesh __declspec(deprecated)
#endif

namespace pcl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PolygonMesh_
{
  using Type = PolygonMesh_<ContainerAllocator>;

  explicit PolygonMesh_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    cloud(_init)
  {
    (void)_init;
  }

  explicit PolygonMesh_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_type cloud;
  using _polygons_type =
    std::vector<pcl_msgs::msg::Vertices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pcl_msgs::msg::Vertices_<ContainerAllocator>>>;
  _polygons_type polygons;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud = _arg;
    return *this;
  }
  Type & set__polygons(
    const std::vector<pcl_msgs::msg::Vertices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pcl_msgs::msg::Vertices_<ContainerAllocator>>> & _arg)
  {
    this->polygons = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pcl_msgs::msg::PolygonMesh_<ContainerAllocator> *;
  using ConstRawPtr =
    const pcl_msgs::msg::PolygonMesh_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::PolygonMesh_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pcl_msgs::msg::PolygonMesh_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pcl_msgs__msg__PolygonMesh
    std::shared_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pcl_msgs__msg__PolygonMesh
    std::shared_ptr<pcl_msgs::msg::PolygonMesh_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolygonMesh_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cloud != other.cloud) {
      return false;
    }
    if (this->polygons != other.polygons) {
      return false;
    }
    return true;
  }
  bool operator!=(const PolygonMesh_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolygonMesh_

// alias to use template instance with default allocator
using PolygonMesh =
  pcl_msgs::msg::PolygonMesh_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__POLYGON_MESH__STRUCT_HPP_
