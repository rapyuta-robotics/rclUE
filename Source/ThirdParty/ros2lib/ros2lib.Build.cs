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

	private bool BuildPlugin(ReadOnlyTargetRules Target)
	{

		ProcessStartInfo startInfo = new ProcessStartInfo() { FileName = "/usr/bin/colcon", Arguments = "build --cmake-args -DBUILD_TESTING=OFF", }; 
		// startInfo.RedirectStandardOutput = true;
		// startInfo.UseShellExecute = false;
		// startInfo.CreateNoWindow = true;
		Process proc = new Process() { StartInfo = startInfo, };
		proc.Start();
		proc.WaitForExit();
		//proc.StandardOutput.ReadToEnd();

		// var configureCommand = "colcon build --cmake-args -DBUILD_TESTING=OFF --symlink-install";
		// var configureCode = ExecuteCommandSync(configureCommand);
		// if (configureCode != 0)
		// {
		// 	Console.WriteLine("Cannot run colcon. Exited with code: " + configureCode);
		// 	return false;
		// }
		return true;
	}

	public ros2lib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var folders = new string[] { "rcutils", "rmw", "tracetools",
									 "builtin_interfaces", "std_msgs", "rosgraph_msgs", "geometry_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs", "ue4_interfaces", "unique_identifier_msgs", "action_msgs",
									 "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle" };

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			//BuildPlugin(Target);

			PublicRuntimeLibraryPaths.Add(ModulePath);
			var libs = Directory.EnumerateFiles(ModulePath, "*.*", SearchOption.TopDirectoryOnly).Where(s => s.EndsWith(".so", StringComparison.OrdinalIgnoreCase));
			foreach (var libName in libs)
			{
				PublicAdditionalLibraries.Add(libName);
				RuntimeDependencies.Add(libName);
				//Console.WriteLine("Found library: " + libName);
			}
					

			foreach (var folder in folders)
			{
				var LibrariesPath = Path.Combine(ModulePath, folder, "lib");

				if (Directory.Exists(LibrariesPath))
				{
					PublicRuntimeLibraryPaths.Add(LibrariesPath);
					libs = Directory.EnumerateFiles(LibrariesPath, "*.*", SearchOption.TopDirectoryOnly).Where(s => s.EndsWith(".so", StringComparison.OrdinalIgnoreCase));

					foreach (var libName in libs)
					{
						PublicAdditionalLibraries.Add(libName);
						RuntimeDependencies.Add(libName); // needed for .so?
					}

				}
			}
		}
	}
}
