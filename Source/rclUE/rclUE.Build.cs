// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class rclUE : ModuleRules
{

	// TODO: Change to environmental variable
	private string ROS2InstallPath
	{
		get { return "/home/russ/work/ros2_rolling/install"; }
	}

	public rclUE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var folders = new string[] { "rcutils", "rmw", "tracetools",
									 "builtin_interfaces", "std_msgs", "rosgraph_msgs", "example_interfaces", "geometry_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs",
									//  "ue4_interfaces", "ue_msgs",
									 "unique_identifier_msgs", "action_msgs",
									 "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			foreach (var folder in folders)
			{
				PublicIncludePaths.Add(Path.Combine(ROS2InstallPath, folder, "include"));
			}

			// Because rclc is for compiling in C this is not defined
			PrivateDefinitions.Add("__STDC_VERSION__=201112L");
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
