using System;
using System.IO;
using UnrealBuildTool;

public class rclUE : ModuleRules
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

	public rclUE(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		var rosPackages = new string[] { "rcutils", "rmw", "tracetools",
									 "builtin_interfaces", "std_msgs", "rosgraph_msgs", "example_interfaces", "geometry_msgs", "geographic_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs",
									 "unique_identifier_msgs", "action_msgs",
									 "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
									 "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
									 "rclc", "rclc_lifecycle" };

		if (target.Platform == UnrealTargetPlatform.Linux) {
			if (!IsRosMergedBuild(ROS2InstallPath))
			{
				foreach (var pkg in rosPackages)
				{
					PublicIncludePaths.Add(Path.Combine(ROS2InstallPath, pkg, "include"));
				}
			} else {
				PublicIncludePaths.Add(Path.Combine(ROS2InstallPath, "include"));

				// hack to get around the change in include paths in some packages
				foreach (var pkg in rosPackages)
				{
					if (Directory.Exists(Path.Combine(ROS2InstallPath, "include", pkg, pkg)))
					{
						PublicIncludePaths.Add(Path.Combine(ROS2InstallPath, "include", pkg));
					}
				}
			}

			// Because rclc is typically compiled using a C compiler, this is not defined
			PublicDefinitions.Add("__STDC_VERSION__=201112L");
		}

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));

		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"ros2lib",
				"Projects",
				"GeoReferencing"
			}
		);
	}
}
