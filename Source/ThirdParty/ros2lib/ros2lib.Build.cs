// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class ros2lib : ModuleRules
{
	private bool ROSColconBuild
	{
		get {
			return Environment.GetEnvironmentVariables().Contains("COLCON_PREFIX_PATH");
		}
	}

	private string ROS2InstallPath
	{
		get { 
			if (ROSColconBuild) {
				return Environment.GetEnvironmentVariable("COLCON_PREFIX_PATH");
			} else {
				return Environment.GetEnvironmentVariable("AMENT_PREFIX_PATH");
			}
		}
	}

	public ros2lib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var ros_packages = new string[] { "rcutils", "rmw", "tracetools",
									 "builtin_interfaces", "std_msgs", "rosgraph_msgs", 
									 "example_interfaces",
									//  "ue4_interfaces", "ue_msgs",
									 "geometry_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs", "unique_identifier_msgs", "action_msgs",
									 "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			// PublicRuntimeLibraryPaths.Add(ModulePath);
			// var libs = Directory.EnumerateFiles(ModulePath, "*.so", SearchOption.TopDirectoryOnly);
			// foreach (var libName in libs)
			// {
			// 	PublicAdditionalLibraries.Add(libName);
			// 	RuntimeDependencies.Add(libName);
			// }
					
			// var extended_libs = Directory.EnumerateFiles(ModulePath, "*.so.*", SearchOption.TopDirectoryOnly);
			// foreach (var libName in extended_libs)
			// {
			// 	RuntimeDependencies.Add(libName);
			// }

			if (ROSColconBuild)
			{
				foreach (var pkg in ros_packages)
				{
					var LibrariesPath = Path.Combine(ROS2InstallPath, pkg, "lib");

					if (Directory.Exists(LibrariesPath))
					{
						PublicRuntimeLibraryPaths.Add(LibrariesPath);
						var libs = Directory.EnumerateFiles(LibrariesPath, "*.so", SearchOption.TopDirectoryOnly);

						foreach (var libName in libs)
						{
							PublicAdditionalLibraries.Add(libName);
							RuntimeDependencies.Add(libName);
						}

						// extended_libs = Directory.EnumerateFiles(LibrariesPath, "*.so.*", SearchOption.TopDirectoryOnly);
						// foreach (var libName in extended_libs)
						// {
						// 	RuntimeDependencies.Add(libName);
						// }
					}
				}
			} else {
				var LibrariesPath = Path.Combine(ROS2InstallPath, "lib");
				PublicRuntimeLibraryPaths.Add(LibrariesPath);

				foreach (var pkg in ros_packages)
				{
					// var pkg_lib_dir = Path.Combine(ROS2InstallPath, "lib", pkg);
					var libs = Directory.EnumerateFiles(LibrariesPath, "*" + pkg + "*.so", SearchOption.TopDirectoryOnly);

					foreach (var lib_filename in libs)
					{
						PublicAdditionalLibraries.Add(lib_filename);
						RuntimeDependencies.Add(lib_filename);
					}
					// if (Directory.Exists(pkg_lib_dir))
					// {
						// there exists a folder in pkg 



						// extended_libs = Directory.EnumerateFiles(LibrariesPath, "*.so.*", SearchOption.TopDirectoryOnly);
						// foreach (var libName in extended_libs)
						// {
						// 	RuntimeDependencies.Add(libName);
						// }
					// }
				}
			}
		}
	}
}
