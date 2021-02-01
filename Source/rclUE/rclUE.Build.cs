// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class rclUE : ModuleRules
{
	public rclUE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var folders = new string[] { "rcutils", "rmw", "tracetools", "builtin_interfaces", "std_msgs", "rosgraph_msgs",
									 "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle",
									 "ue4_interfaces" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			foreach (var folder in folders)
			{
				PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "..", "ThirdParty", "ros2lib", folder, "include"));
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
