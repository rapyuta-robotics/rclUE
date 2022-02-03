// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class rclUE : ModuleRules
{
	private string ThirdPartyPath
	{
		get { return Path.Combine(ModuleDirectory, "..", "ThirdParty"); }
	}

	private string ROS2LibPath
	{
		get { return Path.Combine(ThirdPartyPath, "ros2lib"); }
	}

	public rclUE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var ros2ModuleNameList = new string[] { "rcutils", "rmw", "tracetools",
							"builtin_interfaces", "std_msgs", "rosgraph_msgs", "example_interfaces", "geometry_msgs", "sensor_msgs", "nav_msgs",
							"tf2_msgs", "ue4_interfaces", "ue_msgs", "unique_identifier_msgs", "action_msgs", "trajectory_msgs", "control_msgs",
							"rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
							"rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
							"rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			foreach (var ros2ModuleName in ros2ModuleNameList)
			{
				PublicIncludePaths.Add(Path.Combine(ROS2LibPath, ros2ModuleName, "include"));
			}
		}

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"ros2lib",
				"Projects"
				// ... add other public dependencies that you statically link with here ...
			}
		);
	}
}
