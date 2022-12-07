// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/MeshFile.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MESH_FILE__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MESH_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "visualization_msgs/msg/detail/mesh_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_MeshFile_data
{
public:
  explicit Init_MeshFile_data(::visualization_msgs::msg::MeshFile & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::MeshFile data(::visualization_msgs::msg::MeshFile::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::MeshFile msg_;
};

class Init_MeshFile_filename
{
public:
  Init_MeshFile_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeshFile_data filename(::visualization_msgs::msg::MeshFile::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_MeshFile_data(msg_);
  }

private:
  ::visualization_msgs::msg::MeshFile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::MeshFile>()
{
  return visualization_msgs::msg::builder::Init_MeshFile_filename();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MESH_FILE__BUILDER_HPP_
