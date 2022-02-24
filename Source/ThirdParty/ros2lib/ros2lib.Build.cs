// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using System.Collections.Generic;

using UnrealBuildTool;
//using Tools.DotNETCommon;

public class ros2lib : ModuleRules
{
	private void AddModule(string InModulePath)
	{
		PublicRuntimeLibraryPaths.Add(InModulePath);
		var libs = Directory.EnumerateFiles(InModulePath, "*.so", SearchOption.TopDirectoryOnly);
		AddLibs(libs);
				
		var extendedLibs = Directory.EnumerateFiles(InModulePath, "*.so.*", SearchOption.TopDirectoryOnly);
		AddLibs(extendedLibs);
	}

	private void AddLibs(IEnumerable<string> InLibPathList)
	{
		foreach (var libPath in InLibPathList)
		{
			if (libPath.EndsWith(".so"))
			{
				PublicAdditionalLibraries.Add(libPath);
			}

			if (libPath.Contains(".so"))
			{
				// Log.TraceWarning(libPath);
				RuntimeDependencies.Add(libPath);
			}
		}
	}


	public ros2lib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var ros2ModuleNameList = new string[] { "rcutils", "rmw", "tracetools",
									 		    "builtin_interfaces", "std_msgs", "rosgraph_msgs", "example_interfaces", "geometry_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs", "ue4_interfaces", "ue_msgs", "unique_identifier_msgs", "action_msgs",
									 		    "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 		    "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 		    "rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			AddModule(ModuleDirectory);

			foreach (var ros2ModuleName in ros2ModuleNameList)
			{
				var ros2ModulePath = Path.Combine(ModuleDirectory, ros2ModuleName, "lib");
				if (Directory.Exists(ros2ModulePath))
				{
					AddModule(ros2ModulePath);
				}
			}
		}
	}
}
