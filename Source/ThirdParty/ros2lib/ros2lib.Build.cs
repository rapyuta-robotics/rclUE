// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using Tools.DotNETCommon;
using UnrealBuildTool;
using System.Collections.Generic;

public class ros2lib : ModuleRules
{
    private List<string> ROS2InstallPaths()
    {
        List<string> envs = new List<String>();
        
        if (Environment.GetEnvironmentVariables().Contains("AMENT_PREFIX_PATH")) {
            foreach (string e in Environment.GetEnvironmentVariable("AMENT_PREFIX_PATH").Split(":"))
            {
                if (File.Exists(Path.Combine(e, "local_setup.sh")) && !envs.Contains(e))
                {
                    envs.Add(e);
                }
            }
        } 
        if (Environment.GetEnvironmentVariables().Contains("COLCON_PREFIX_PATH")) {
            foreach (string e in Environment.GetEnvironmentVariable("COLCON_PREFIX_PATH").Split(":"))
            {
                if (File.Exists(Path.Combine(e, "local_setup.sh")) && !envs.Contains(e))
                {
                    envs.Add(e);
                }
            }
        }

        return envs;
    }
    
    private static bool IsRosMergedBuild(string installPath)
    {
        return Directory.Exists(Path.Combine(installPath, "include")) &&
               Directory.Exists(Path.Combine(installPath, "lib"));
    }

    private void AddROSInclude(string pkg, string installPath)
    {
        if (!IsRosMergedBuild(installPath))
        {
            // hack to get around the change in include paths in some packages
            if (Directory.Exists(Path.Combine(installPath, pkg, "include", pkg, pkg)))
            {
                PublicSystemIncludePaths.Add(Path.Combine(installPath, pkg, "include", pkg));
            } else {
                if (Directory.Exists(Path.Combine(installPath, pkg, "include")))
                {
                    PublicSystemIncludePaths.Insert(0, Path.Combine(installPath, pkg, "include"));
                }
            }
        }
        else
        {
            // hack to get around the change in include paths in some packages
            if (Directory.Exists(Path.Combine(installPath, "include", pkg, pkg)))
            {
                PublicSystemIncludePaths.Add(Path.Combine(installPath, "include", pkg));
            }

            if (!PublicSystemIncludePaths.Contains(Path.Combine(installPath, "include"))) {
                PublicSystemIncludePaths.Add(Path.Combine(installPath, "include"));
            }
        }
    }

    private void AddROSPackageLib(string pkg, string installPath)
    {
        if (!IsRosMergedBuild(installPath))
        {
            var librariesPath = Path.Combine(installPath, pkg, "lib");

            if (Directory.Exists(librariesPath))
            {
                PublicSystemLibraryPaths.Add(librariesPath);
                var libs = Directory.EnumerateFiles(librariesPath, "*.so", SearchOption.TopDirectoryOnly);

                foreach (var libName in libs)
                {
                    PublicSystemLibraries.Add(libName);
                    // RuntimeDependencies.Add(libName);
                }
            }
        } else {
            var librariesPath = Path.Combine(installPath, "lib");
            if (!PublicSystemLibraryPaths.Contains(librariesPath))
            {
                PublicSystemLibraryPaths.Add(librariesPath);
            }

            var libs = Directory.EnumerateFiles(librariesPath, "*" + pkg + "*.so", SearchOption.TopDirectoryOnly);

            foreach (var libFilename in libs)
            {
                PublicSystemLibraries.Add(libFilename);
                // RuntimeDependencies.Add(libFilename);
            }
        }
    }

    public ros2lib(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        // each of those could be put in a separate module, and their dependencies specified in the uplugin file
        var rosPackages = new string[] { "rcutils", "rmw", "tracetools",
                                     "builtin_interfaces", "std_msgs", "rosgraph_msgs", "example_interfaces",
                                     "geometry_msgs", "geographic_msgs", "sensor_msgs", "nav_msgs", "tf2_msgs", "unique_identifier_msgs", "action_msgs",
                                     "rosidl_generator_c", "rosidl_typesupport_c", "rosidl_typesupport_interface", "rosidl_typesupport_introspection_c", "rosidl_runtime_c",
                                     "rcl", "rcl_action", "rcl_lifecycle", "rcl_yaml_param_parser", "rcl_interfaces",
                                     "rclc", "rclc_lifecycle" };

        if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            var rosPaths = ROS2InstallPaths();
            if (rosPaths.Count == 0)
            {
                Log.TraceError("No ROS2 workspaces were detected.");
            }
            foreach (string rosPath in rosPaths)
            {
                Log.TraceInformation("Found ROS2 workspace: " + rosPath);

                foreach (var pkg in rosPackages)
                {
                    AddROSPackageLib(pkg, rosPath);
                    AddROSInclude(pkg, rosPath);
                }
            }

            // Because rclc is typically compiled using a C compiler, this is not defined
            PublicDefinitions.Add("__STDC_VERSION__=201112L");
        }
    }
}
