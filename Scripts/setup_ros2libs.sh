#!/bin/bash
# Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

Help()
{
    # Display Help
    echo "Syntax: ${BASH_SOURCE[0]} [-h] <rclUE_dir>"
    echo "options:"
    echo "-h Print this Help."
    echo "arguments:"
    echo "-rclUE_dir: Path to the rclUE dir"
}

while getopts ":h" option; do
    case $option in
        h) # display Help
            Help
            exit;;
        \?) # Invalid option
            echo "Error: Invalid option"
            Help
            exit;;
    esac
done

# Set exit on any non-zero status cmd
set -e

CURRENT_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)
RCLUE_DIR=${1:-"$(dirname ${CURRENT_DIR})"}
RCLUE_DIR_NAME=${RCLUE_DIR##*/}
#echo "${BASH_SOURCE[0]}'s dir: ${CURRENT_DIR}"

if [[ "rclUE" != "${RCLUE_DIR_NAME}" ]]; then
	printf "RCLUE_DIR: ${RCLUE_DIR}\n"
	printf "${BASH_SOURCE[0]} must be run with first arg as rclUE dir path\n"
	Help
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

printf "ROS2 libs setup successfully!\n"