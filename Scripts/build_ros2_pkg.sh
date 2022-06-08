#!/bin/bash
# Copyright 2020-2022 Rapyuta Robotics Co., Ltd.

Help()
{
    # Display Help
    echo "Syntax: ${BASH_SOURCE[0]} [-h] <UE_DIR> <ROS_PKG_WS> <ROS_PKG_NAME>"
    echo "options:"
    echo "-h Print this Help."
    echo "arguments:"
    echo "-UE_DIR: Path to the UnrealEngine dir"
    echo "-ROS_PKG_WS: Path to target ROS pkg workspace"
    echo "-ROS_PKG_NAME: Name of the target ROS pkg"
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
check_empty() {
    if [[ "" == "$1" ]]; then
        printf "[$2] is empty!"
        Help
        exit 1
    fi
}
check_dir_valid() {
    check_empty $1 $2
    if [[ ! -d "$1" ]]; then
        printf "[$2] does not exist!"
        Help
        exit 1
    fi
}
UE_DIR=$1
check_dir_valid $UE_DIR "UE_DIR"
ROS_PKG_WS=$2
check_dir_valid $ROS_PKG_WS "ROS_PKG_WS"
ROS_PKG_NAME=$3

# rclUE scripts generate and rename this folders. Need to cleanup:
clean_ros_pkg() {
    rm -rf $1/build $1/install $1/log
}
clean_ros_pkg $ROS_PKG_WS

# Build ROS by UE clang toolchain
TOOLCHAIN_ROOT=$UE_DIR"/Engine/Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v19_clang-11.0.1-centos7/x86_64-unknown-linux-gnu"
printf "Building ${ROS_PKG_NAME} with UE Toolchain [${TOOLCHAIN_ROOT}]...\n"
export CC=$TOOLCHAIN_ROOT"/bin/clang"
export CXX=$TOOLCHAIN_ROOT"/bin/clang++"
# -latomic issue - https://github.com/ros2/ros2/issues/418
LINKER_FLAGS="-latomic "\
"-Wl,-rpath=\${ORIGIN} "\
"-Wl,-rpath-link="$TOOLCHAIN_ROOT" "\
"-Wl,-rpath-link="$TOOLCHAIN_ROOT"/usr/lib "\
"-Wl,-rpath-link="$TOOLCHAIN_ROOT"/usr/lib64 "\
"-Wl,-rpath-link=/usr/lib/x86_64-linux-gnu "\
"-Wl,-rpath-link=/usr/lib "

CMAKE_ARGS="-DCMAKE_SHARED_LINKER_FLAGS=${LINKER_FLAGS} -DCMAKE_EXE_LINKER_FLAGS=${LINKER_FLAGS} -DBUILD_TESTING=OFF --no-warn-unused-cli"

# Build ROS_PKG_WS
cd $ROS_PKG_WS
if [[ "" == "${ROS_PKG_NAME}" ]]; then
    colcon build --cmake-args ${CMAKE_ARGS} 
else
    colcon build --packages-up-to --allow-overriding ${ROS_PKG_NAME} --cmake-args ${CMAKE_ARGS}    
fi
