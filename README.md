# Basic information
This build of the plugin is based on ROS2 Eloquent and has been tested on Ubuntu 18

# Installation
## How to install this plugin (Ubuntu 18):
1. clone this repository in your Unreal Engine 4 Plugin folder
2. create and use the following shell script to run the UE4 editor (substituting `PROJECT_PATH`, `PROJECT_NAME` and `UNREAL_ENGINE_REPO` for the appropriate strings):
```
#!/bin/sh

export LD_LIBRARY_PATH="PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib":"PROJECT_PATH/PROJECT_NAME/Plugins/rclUE/Source/ThirdParty/ros2lib/std_msgs/lib"

EDITOR_COMMAND="UNREAL_ENGINE_REPO/Engine/Binaries/Linux/UE4Editor"

(exec "$EDITOR_COMMAND" "PROJECT_PATH/PROJECT_NAME.uproject")
```
3. within the Unreal Editor: Edit->Plugins, search and enable for `rclc`
4. add a PubSubExample actor to the scene and test

## How to install this plugin (Windows 10)
1. clone this repository in your Unreal Engine 4 Plugin folder (branch?)