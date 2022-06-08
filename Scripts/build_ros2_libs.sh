#!/bin/bash
# Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

Help()
{
    # Display Help
    echo "Syntax: ${BASH_SOURCE[0]} [-h] <UE_DIR> <ROS_WS> <RCLC_WS> <UE_MSGS_WS>"
    echo "options:"
    echo "-h Print this Help."
    echo "arguments:"
    echo "-UE_DIR: Path to the UnrealEngine dir"
    echo "-ROS_WS: Path to ROS source workspace"
    echo "-RCLC_WS: Path to rclc source workspace"
    echo "-UE_MSGS_WS: Path to UE_msgs workspace"
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

# Verify input dirs
check_dir_valid() {
    if [[ "" == "$1" ]]; then
        printf "[$2] is empty!"
        Help
        exit 1
    elif [[ ! -d "$1" ]]; then
        printf "[$2] does not exist!"
        Help
        exit 1
    fi
}
UE_DIR=$1
check_dir_valid $UE_DIR "UE_DIR"
ROS_WS=$2
check_dir_valid $ROS_WS "ROS_WS"
RCLC_WS=$3
check_dir_valid $RCLC_WS "RCLC_WS"
UE_MSGS_WS=$4
check_dir_valid $UE_MSGS_WS "UE_MSGS_WS"

# rclUE scripts generate and rename this folders. Need to cleanup:
cleanup() {
    rm -rf $1/build $1/install $1/log
    rm -rf $1/build_renamed $1/install_renamed
}
cleanup $ROS_WS
cleanup $RCLC_WS
cleanup $UE_MSGS_WS

# Env vars 
export ROS_DOMAIN_ID=10
# !Note: rmw_fastrtps_cpp/rmw_fastrtps_dynamic_cpp
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp

# UE clang toolchain
# https://docs.ros.org/en/foxy/Installation/Alternatives/Ubuntu-Development-Setup.html#alternate-compilers
TOOLCHAIN_ROOT=$UE_DIR"/Engine/Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v19_clang-11.0.1-centos7/x86_64-unknown-linux-gnu"
printf "Building ROS libs with UE Toolchain [${TOOLCHAIN_ROOT}]...\n"
export CC=$TOOLCHAIN_ROOT"/bin/clang"
export CXX=$TOOLCHAIN_ROOT"/bin/clang++"
# -latomic issue - see more here https://github.com/ros2/ros2/issues/418
LINKER_FLAGS="-latomic "\
"-Wl,-rpath=\${ORIGIN} "\
"-Wl,-rpath-link="$TOOLCHAIN_ROOT" "\
"-Wl,-rpath-link="$TOOLCHAIN_ROOT"/lib64 "\
"-Wl,-rpath-link="$TOOLCHAIN_ROOT"/usr/lib "\
"-Wl,-rpath-link="$TOOLCHAIN_ROOT"/usr/lib64 "\
"-Wl,-rpath-link=/usr/lib/x86_64-linux-gnu "\
"-Wl,-rpath-link=/usr/lib/gcc/x86_64-linux-gnu/9 "\
"-Wl,-rpath-link=/usr/lib "

CMAKE_ARGS="-DCMAKE_SHARED_LINKER_FLAGS=${LINKER_FLAGS} -DCMAKE_EXE_LINKER_FLAGS=${LINKER_FLAGS} -DBUILD_TESTING=OFF --no-warn-unused-cli"

# Build ROS
cd $ROS_WS
colcon build --cmake-clean-cache --cmake-force-configure --cmake-args ${CMAKE_ARGS}

chmod a+x install/local_setup.bash
source install/local_setup.bash

# Build rclc & ue_msgs
build_ros_pkg() {
    cd $1
    colcon build --packages-up-to --allow-overriding $2 --cmake-args ${CMAKE_ARGS}
}

build_ros_pkg $RCLC_WS rclc
build_ros_pkg $UE_MSGS_WS ue_msgs