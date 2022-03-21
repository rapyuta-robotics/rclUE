// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
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

	private string[] ROS2InstallPaths
	{
		get { 
			if (Environment.GetEnvironmentVariables().Contains("AMENT_PREFIX_PATH")) {
				return Environment.GetEnvironmentVariable("AMENT_PREFIX_PATH").Split(":");
			} 
			if (Environment.GetEnvironmentVariables().Contains("COLCON_PREFIX_PATH")) {
				return Environment.GetEnvironmentVariable("COLCON_PREFIX_PATH").Split(":");
			}

			return new string[] {};
		}
	}
	
	private static bool IsRosMergedBuild(string installPath)
	{
		return Directory.Exists(Path.Combine(installPath, "include")) &&
		       Directory.Exists(Path.Combine(installPath, "lib"));
	}

	private void AddROSInclude(string pkg)
	{
		foreach (string installPath in ROS2InstallPaths)
		{
			if (!IsRosMergedBuild(installPath))
			{
				if (Directory.Exists(Path.Combine(installPath, pkg)))
				{
					PublicIncludePaths.Add(Path.Combine(installPath, pkg, "include"));					
				}
			}
			else
			{
				if (!PublicIncludePaths.Contains(Path.Combine(installPath, "include"))) {
				    PublicIncludePaths.Add(Path.Combine(installPath, "include"));
                }

				// hack to get around the change in include paths in some packages
				if (Directory.Exists(Path.Combine(installPath, "include", pkg, pkg)))
				{
					PublicIncludePaths.Add(Path.Combine(installPath, "include", pkg));
				}
			}

		}
	}

	private void AddROSPackageLib(string pkg)
	{
		foreach (string installPath in ROS2InstallPaths)
		{
			if (!IsRosMergedBuild(installPath))
			{
				var librariesPath = Path.Combine(installPath, pkg, "lib");

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
			} else {
				var librariesPath = Path.Combine(installPath, "lib");
				if (!PublicRuntimeLibraryPaths.Contains(librariesPath))
				{
					PublicRuntimeLibraryPaths.Add(librariesPath);					
				}

				var libs = Directory.EnumerateFiles(librariesPath, "*" + pkg + "*.so", SearchOption.TopDirectoryOnly);

				foreach (var libFilename in libs)
				{
					PublicAdditionalLibraries.Add(libFilename);
					RuntimeDependencies.Add(libFilename);
				}
			}
		}
	}

	public ros2lib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var rosPackages = new string[] { "rcutils", "rmw", "tracetools",
									 "builtin_interfaces", "std_msgs", "rosgraph_msgs", 
									 "example_interfaces",
									 "geometry_msgs", "geographic_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs", "unique_identifier_msgs", "action_msgs",
									 "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			foreach (var pkg in rosPackages)
			{
				AddROSPackageLib(pkg);
				AddROSInclude(pkg);
			}
			// Because rclc is typically compiled using a C compiler, this is not defined
			PublicDefinitions.Add("__STDC_VERSION__=201112L");
		}
	}
}
