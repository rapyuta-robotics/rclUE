#!/bin/bash
# Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

# Set exit on any non-zero status cmd
set -e

RCLUE_DIR=${1:-"$(pwd)"}
RCLUE_DIR_NAME=${RCLUE_DIR##*/}

if [[ "rclUE" != "${RCLUE_DIR_NAME}" ]]; then
	printf "${BASH_SOURCE[0]} must be run from rclUE dir (current dir: ${RCLUE_DIR_NAME})\n"
	exit 1
fi

ROS2LIB_DIR="${RCLUE_DIR}/Source/ThirdParty/ros2lib"

# https://github.com/rapyuta-robotics/rclUE/blob/master/Source/rclUE/rclUE.Build.cs
ROS2_LIBS=('ue4_interfaces' 'ue_msgs'\
		   'rcutils' 'rmw' 'tracetools' 'builtin_interfaces' 'std_msgs' 'rosgraph_msgs' 'example_interfaces'\
		   'geometry_msgs' 'sensor_msgs' 'nav_msgs' 'tf2_msgs' 'unique_identifier_msgs' 'action_msgs'\
		   'rosidl_typesupport_c' 'rosidl_typesupport_interface' 'rosidl_typesupport_introspection_c' 'rosidl_runtime_c'\
		   'rcl' 'rcl_action' 'rcl_lifecycle' 'rcl_yaml_param_parser' 'rcl_interfaces'\
		   'rclc' 'rclc_lifecycle')

export LD_LIBRARY_PATH="${ROS2LIB_DIR}"
for lib_name in "${ROS2_LIBS[@]}"
do
	export LD_LIBRARY_PATH="${ROS2LIB_DIR}/${lib_name}/lib":${LD_LIBRARY_PATH}
done

#export ROS_MASTER_URI=http://localhost:11311
#unset ROS_DOMAIN_ID