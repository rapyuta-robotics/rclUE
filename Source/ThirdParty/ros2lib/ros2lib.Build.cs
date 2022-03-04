// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class ros2lib : ModuleRules
{
	private string ROS2InstallPath
	{
		get { 
			if (Environment.GetEnvironmentVariables().Contains("COLCON_PREFIX_PATH")) {
				return Environment.GetEnvironmentVariable("COLCON_PREFIX_PATH");
			} else {
				return Environment.GetEnvironmentVariable("AMENT_PREFIX_PATH");
			}
		}
	}

	private static bool IsRosMergedBuild(string installPath)
	{
		return Directory.Exists(Path.Combine(installPath, "include")) &&
		       Directory.Exists(Path.Combine(installPath, "lib"));
	}

	public ros2lib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var rosPackages = new string[] { "rcutils", "rmw", "tracetools",
									 "builtin_interfaces", "std_msgs", "rosgraph_msgs", 
									 "example_interfaces",
									//  "ue4_interfaces", "ue_msgs",
									 "geometry_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs", "unique_identifier_msgs", "action_msgs",
									 "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			if (!IsRosMergedBuild(ROS2InstallPath))
			{
				foreach (var pkg in rosPackages)
				{
					var librariesPath = Path.Combine(ROS2InstallPath, pkg, "lib");

					if (Directory.Exists(librariesPath))
					{
						PublicRuntimeLibraryPaths.Add(librariesPath);
						var libs = Directory.EnumerateFiles(librariesPath, "*.so", SearchOption.TopDirectoryOnly);

						foreach (var libName in libs)
						{
							PublicAdditionalLibraries.Add(libName);
							RuntimeDependencies.Add(libName);
						}
					}
				}
			} else {
				var librariesPath = Path.Combine(ROS2InstallPath, "lib");
				PublicRuntimeLibraryPaths.Add(librariesPath);

				foreach (var pkg in rosPackages)
				{
					var libs = Directory.EnumerateFiles(librariesPath, "*" + pkg + "*.so", SearchOption.TopDirectoryOnly);

					foreach (var libFilename in libs)
					{
						PublicAdditionalLibraries.Add(libFilename);
						RuntimeDependencies.Add(libFilename);
					}
				}
			}
		}
	}
}
