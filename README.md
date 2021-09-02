# Basic information
## Branches
### master
This build of the plugin is based on ROS2 Foxy and has been tested on Ubuntu 20. 

This branch currently represents the release branch.

# Installation

## How to install this plugin (Ubuntu 20):
1. clone this repository in your Unreal Engine 4 Plugin folder
2. create and use the following shell script to run the UE4 editor (substituting `PROJECT_PATH`, `PROJECT_NAME` and `UNREAL_ENGINE_REPO` for the appropriate strings):
```
#!/bin/sh

export LD_LIBRARY_PATH=\
"${PWD}/Plugins/rclUE/Source/ThirdParty/ros2lib":\
"${PWD}/Plugins/rclUE/Source/ThirdParty/ros2lib/std_msgs/lib":\
"${PWD}/Plugins/rclUE/Source/ThirdParty/ros2lib/geometry_msgs/lib":\
"${PWD}/Plugins/rclUE/Source/ThirdParty/ros2lib/sensor_msgs/lib":\
"${PWD}/Plugins/rclUE/Source/ThirdParty/ros2lib/rosgraph_msgs/lib":\
"${PWD}/Plugins/rclUE/Source/ThirdParty/ros2lib/builtin_interfaces/lib":\
"${PWD}/Plugins/rclUE/Source/ThirdParty/ros2lib/ue4_interfaces/lib"

EDITOR_COMMAND="UNREAL_ENGINE_REPO/Engine/Binaries/Linux/UE4Editor"

(exec "$EDITOR_COMMAND" "PROJECT_PATH/PROJECT_NAME.uproject")
```
3. For messages not in std_msgs, the appropriate library path needs to be added to LD_LIBRARY_PATH
4. within the Unreal Editor: Edit->Plugins, search and enable for `rclc`
5. add a PubSubExample actor to the scene and test
6. change the world settings to use meters as units instead of the default centimeters

## How to install this plugin (Ubuntu 18):
This section has not been recently updated - please refer to the Ubuntu 20 and adapt it to what's written here.
1. clone this repository in your Unreal Engine 4 Plugin folder
2. create and use the following shell script to run the UE4 editor (substituting `PROJECT_PATH`, `PROJECT_NAME` and `UNREAL_ENGINE_REPO` for the appropriate strings):
```
#!/bin/sh

export LD_LIBRARY_PATH="PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib":"PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib/std_msgs/lib"

EDITOR_COMMAND="UNREAL_ENGINE_REPO/Engine/Binaries/Linux/UE4Editor"

(exec "$EDITOR_COMMAND" "PROJECT_PATH/PROJECT_NAME.uproject")
```
3. For messages not in std_msgs, the appropriate library path needs to be added to LD_LIBRARY_PATH
4. within the Unreal Editor: Edit->Plugins, search and enable for `rclc`
5. add a PubSubExample actor to the scene and test

## How to install this plugin (Ubuntu 20):
1. clone this repository in your Unreal Engine 4 Plugin folder
2. create and use the following shell script to run the UE4 editor (substituting `PROJECT_PATH`, `PROJECT_NAME` and `UNREAL_ENGINE_REPO` for the appropriate strings):
```
#!/bin/sh

export LD_LIBRARY_PATH="PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib":"PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib/std_msgs/lib":"PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib/builtin_interfaces/lib/":"PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib/ue4_interfaces/lib/"

EDITOR_COMMAND="UNREAL_ENGINE_REPO/Engine/Binaries/Linux/UE4Editor"

(exec "$EDITOR_COMMAND" "PROJECT_PATH/PROJECT_NAME.uproject")
```
3. For messages not in std_msgs, the appropriate library path needs to be added to LD_LIBRARY_PATH
4. within the Unreal Editor: Edit->Plugins, search and enable for `rclc`
5. add a PubSubExample actor to the scene and test

## How to install this plugin (Windows 10)
1. clone this repository in your Unreal Engine 4 Plugin folder (branch?)

# Dependencies
## Compile time (includes+libs)
- rcl
- rcl_action
- rcl_interfaces
- rcl_lifecycle
- rcl_yaml_param_parser
- rclc
- rclc_lifecycle
- rcutils
- rmw
- tracetools
- rosidl_adapter
- rosidl_cmake
- rosidl_generator_c
- rosidl_parser
- rosidl_typesupport_c
- rosidl_typesupport_interface
- rosidl_typesupport_introspection_c
- rosidl_runtime_c (Ubuntu 20/Foxy)
- rosgraph_msgs
- std_msgs
- ue4_interfaces (contains an example of custom interface)
## Runtime (in addition to the compile time requirements)
Currently, the plugin requires the following shared libraries at runtime:
- libfastcdr.so
- libfastcdr.so.1
- libfastrtps.so.1 (Ubuntu 18/Eloquent)
- libfastrtps.so.2 (Ubuntu 20/Foxy)
- librcl_logging_spdlog.so
- librmw_fastrtps_cpp.so
- librmw_fastrtps_shared_cpp.so
- librmw_implementation.so
- librosidl_typesupport_cpp.so (Ubuntu 20/Foxy)
- librosidl_typesupport_fastrtps_cpp.so
- librosidl_typesupport_fastrtps_c.so
- librcpputils.so (Ubuntu 20/Foxy)
- librmw_dds_common.so (Ubuntu 20/Foxy)
- librmw_dds_common__rosidl_typesupport_cpp.so (Ubuntu 20/Foxy)
- librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so (Ubuntu 20/Foxy)
