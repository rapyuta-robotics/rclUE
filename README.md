# rclUE Greenroom Fork

- Heavily refactored
- Uses system installed ROS2 instead of included binaries
- Uses Unreal Engine memory allocator
- Reworked messages so the fields are accessible via Blueprints.
- Added thread safety to `rcl` calls.
- Remove Node and publisher initialisation complexity from Blueprints.


# Basic information
## Supported versions
- Ubuntu
- Unreal Engine 4.27 (This repo aims to track latest release version of the engine)
- ROS2 Rolling with patched `rcutils` (https://github.com/Greenroom-Robotics/rclue-rcutils)
 - Galactic can be used with this backported patch: https://github.com/ros2/rosidl/pull/603

Windows is currently unsupported.


# Installation

## Install Unreal Engine
Follow Epic documentation on checking out and compiling Unreal Engine source code. 

## Install ROS2 Dependencies

- `ros_core`
- `example_interfaces`
- `tf2_msgs`
- `geographic_msgs`
- `rcutils` (with rclUE patch)

## Add this plugin to an Unreal Engine project
1. Clone this repository in your project `Plugins` folder
2. Create a shell script in the root Project folder to launch the Unreal Engine editor (substituting `UNREAL_HOME`, `PROJECTS_HOME`, `ROS2_ENV` and `PROJECT_NAME` for the appropriate paths):

```bash
#!/bin/bash

UNREAL_HOME="/home/${USER}/UnrealEngine"
PROJECTS_HOME="/home/${USER}/Documents/Unreal Projects"
PROJECT_NAME="MyProject"
ROS2_ENV="/opt/ros/foxy"
EDITOR_COMMAND="${UNREAL_HOME}/Engine/Binaries/Linux/UE4Editor"

source ${ROS2_ENV}/setup.bash
(exec "$EDITOR_COMMAND" "${PROJECTS_HOME}/${PROJECT_NAME}/${PROJECT_NAME}.uproject")
```

3. within the Unreal Editor: Edit->Plugins, enable for `rclUE`
4. change the world settings to use meters as units instead of the default centimeters


# Getting Started
TBD
