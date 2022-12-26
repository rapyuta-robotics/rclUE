# Basic information

## Online documentation

https://rclUE.readthedocs.io/en/devel/

## Supported versions

Main support
- Ubuntu 20.04
- Unreal Engine 5.10
- ROS2 Foxy
- Clang: 13.0.1

Maintenance/experimental
- ROS2 Humble(`UE5_devel_humble` branch)
- UE4.27: 11.0.1
- Clang: 11.0.1

Please download UE5.1 for Linux by following [Unreal Engine for Linux](https://www.unrealengine.com/en-US/linux)

## Branches

- `devel`: This build of the plugin is based on ROS2 Foxy and has been tested on Ubuntu 20 and UE5.10.
- `UE5_devel_humble`(experimental):  This build of the plugin is based on ROS2 humble and has been tested on Ubuntu 20 and UE5.10.

### Other branches

Experimental and WIP

# rclUE and ROS2

## Description
- We use ros2 'foxy' lightweighted (not all binaries are included). Source/ThirdParty/ros folder is fully autogenerated by [UE_tools](https://github.com/rapyuta-robotics/UE_tools)
- ros includes [UE_msgs](https://github.com/rapyuta-robotics/UE_msgs)
- UE uses centimeters but ROS uses meters. Please convert manually or use [URRConversionUtils](https://rapyutasimulationplugins.readthedocs.io/en/devel/doxygen_generated/html/d4/dc1/class_u_r_r_conversion_utils.html) in [RapyutaSimulationPlugins](https://rapyutasimulationplugins.readthedocs.io/en/devel/index.html)
- within the Unreal Editor: Edit->Plugins, search and enable for `rclc`

## Windows is currently unsupported

# Getting Started

The plugin folder contains a video "Example_BP_PubSub.mp4" demonstrating how to setup a PubSub example in Blueprint.

An example setup using this plugin can be found at [turtlebot3-UE](https://github.com/rapyuta-robotics/turtlebot3-UE)

# Notes on working with ROS2 and UE

- rcl and void\* types cannot be managed by UE (no UPROPERTY) and therefore can't be used directly in Blueprint. Whenever access to these variables is needed, the user should write a class to wrap it and all of their handling must be done in C++.
- some basic numerical types are not natively supported in Blueprint (e.g. double, unsigned int). In order to use these, a workaround is needed (a plugin implementing those types for BP, a modified UE or a custom implementation).
- In autogenerated messages, the method MsgToString() should be implemented by the user as its current purpose is to help debugging.

# How to update ROS inside RclUE
Currently there is a scripts in [UE_tools](https://github.com/rapyuta-robotics/UE_tools) to automatically build and update ROS2 libraries.  Follow steps 1) for building and copying ros2 base library under rclUE and 2) for generating UE src codes to access msg from UE. Please check UE_tools README and `UE_tools/default_config.yaml`

   ```
   git clone https://github.com/rapyuta-robotics/UE_tools
   cd UE_tools

   # build and copy ros2 base libraries
   python3 build_install_codegen.py -b --remove --type base

   # Generate msg classes to access msg from UE
   python3 build_install_codegen.py -bc --type pkgs
   ```

# Install pre-commit
Please install pre-commit before commiting your changes.
Follow this instruction https://pre-commit.com/

then run

```bash
pre-commit install
```

# Documentation

## Tools

documentation is built with three tools

- [doxygen](http://www.doxygen.org)
- [sphinx](http://www.sphinx-doc.org)
- [breathe](https://breathe.readthedocs.io)

## Locally build

1. install tools in #tools section.
2. build
   ```
   cd docs
   make --always-make html
   ```
3. Open following in your browser.
   - Sphinx at `file:///<path to cloned repo>/docs/source/_build/html/index.html`
   - Original doxygen output at `file:///<path to cloned repo>/docs/source/_build/html/doxygen_generated/html/index.html`

# Maintainer

yu.okamoto@rapyuta-robotics.com
