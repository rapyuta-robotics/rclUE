// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;
using Tools.DotNETCommon;
using System.Collections;
using System.Collections.Generic;

public class rclUE : ModuleRules
{
	private string ThirdPartyPath
	{
		get { return Path.Combine(ModuleDirectory, "..", "ThirdParty"); }
	}

	private string ROS2LibPath
	{
		get { return Path.Combine(ThirdPartyPath, "ros2lib"); }
	}

	private void AddModule(string InModulePath, bool IsRootOnly, SearchOption searchOption)
	{
        string includePath = IsRootOnly ? InModulePath : Path.Combine(InModulePath, "include");
        
        if(Directory.Exists(includePath))
        {
            Log.TraceInformation("[rclUE] include: " + includePath);
            PublicIncludePaths.Add(includePath);
        }
        else
        {
            Log.TraceWarning("[rclUE] include wasn't found: " + includePath);
        }
        
        string libPath = IsRootOnly ? InModulePath : Path.Combine(InModulePath, "lib");

        if(Directory.Exists(libPath))
        {
            //PublicLibraryPaths.Add(libPath);
            PublicRuntimeLibraryPaths.Add(libPath);
            PrivateRuntimeLibraryPaths.Add(libPath);
            Log.TraceInformation("[rclUE] libPath: " + libPath);
            var libs = Directory.EnumerateFiles(libPath, "*.so", searchOption);
            //.Union(Directory.EnumerateFiles(libPath, "*.so.*", searchOption));
            
            foreach (var lib in libs)
            {
                Log.TraceInformation("[rclUE] lib: " + lib);
                PublicAdditionalLibraries.Add(lib);
                RuntimeDependencies.Add(lib);
            }
        }
        else
        {
            Log.TraceWarning("[rclUE] libPath wasn't found" + libPath);
        }
	}
	public List<string> Shuffle(List<string> items)
	{
	  return items.Distinct().OrderBy(x =>  System.Guid.NewGuid().ToString()).ToList();
	}
	
	public rclUE(ReadOnlyTargetRules Target) : base(Target)
	{
		var envVars = Environment.GetEnvironmentVariables();
		string ldLibraryPathKey = "LD_LIBRARY_PATH";

		if (envVars.Contains(ldLibraryPathKey))
		{
			Log.TraceInformation("[rclUE] LD_LIBRARY_PATH: " + envVars[ldLibraryPathKey]);
		}
		
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// each of those could be put in a separate module, and their dependencies specified in the uplugin file
		var ros2ModuleNameList = new string[]
		{
			"ue4_interfaces", 
			"ue_msgs",
			"rcutils",
			"rmw",
			"tracetools",
			"builtin_interfaces",
			"std_msgs",
			"rosgraph_msgs",
			"example_interfaces",
			"geometry_msgs",
			"sensor_msgs",
			"nav_msgs",
			"tf2_msgs",
			"unique_identifier_msgs",
			"action_msgs",
			"rosidl_typesupport_c",
			"rosidl_typesupport_interface",
			"rosidl_typesupport_introspection_c",
			"rosidl_runtime_c",
			"rcl",
			"rcl_action",
			"rcl_lifecycle",
			"rcl_yaml_param_parser",
			"rcl_interfaces",
			"rclc",
			"rclc_lifecycle"
		};
		
		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
		    AddModule(ROS2LibPath, true, SearchOption.TopDirectoryOnly);
		    AddModule(ROS2LibPath, false, SearchOption.TopDirectoryOnly);
		    
			foreach (var ros2ModuleName in ros2ModuleNameList)
			{
			    AddModule(Path.Combine(ROS2LibPath, "include", ros2ModuleName), false, SearchOption.TopDirectoryOnly);
			}
		}

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
			
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Projects"
			}
		);
		
		//PublicAdditionalLibraries = new List<string>();
		
		//PublicAdditionalLibraries = Shuffle(PublicAdditionalLibraries);
		
		foreach (var lib in PublicAdditionalLibraries)
		{
			Log.TraceInformation("[rclUE] Result lib: " + lib);
		}
	}
}
