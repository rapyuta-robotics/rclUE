// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class ros2lib : ModuleRules
{
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}

	public ros2lib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var folders = new string[] { "rcutils", "rmw", "tracetools",
									 "builtin_interfaces", "std_msgs", "rosgraph_msgs", "example_interfaces", "geometry_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs", "ue4_interfaces", "ue_msgs", "unique_identifier_msgs", "action_msgs",
									 "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			PublicRuntimeLibraryPaths.Add(ModulePath);
			var libs = Directory.EnumerateFiles(ModulePath, "*.so", SearchOption.TopDirectoryOnly);
			foreach (var libName in libs)
			{
				PublicAdditionalLibraries.Add(libName);
				RuntimeDependencies.Add(libName);
			}
					
			var extended_libs = Directory.EnumerateFiles(ModulePath, "*.so.*", SearchOption.TopDirectoryOnly);
			foreach (var libName in extended_libs)
			{
				RuntimeDependencies.Add(libName);
			}

			foreach (var folder in folders)
			{
				var LibrariesPath = Path.Combine(ModulePath, folder, "lib");

				if (Directory.Exists(LibrariesPath))
				{
					PublicRuntimeLibraryPaths.Add(LibrariesPath);
					libs = Directory.EnumerateFiles(LibrariesPath, "*.so", SearchOption.TopDirectoryOnly);

					foreach (var libName in libs)
					{
						PublicAdditionalLibraries.Add(libName);
						RuntimeDependencies.Add(libName); // needed for .so?
					}

					extended_libs = Directory.EnumerateFiles(LibrariesPath, "*.so.*", SearchOption.TopDirectoryOnly);
					foreach (var libName in extended_libs)
					{
						RuntimeDependencies.Add(libName);
					}
				}
			}
		}
	}
}
