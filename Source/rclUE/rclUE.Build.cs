// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class rclUE : ModuleRules
{
	private string RosPath
	{
		get { return Path.Combine(ModuleDirectory, "..", "ThirdParty", "ros"); }
	}

	private void AddModule(string InModulePath)
	{
        string includePath = Path.Combine(InModulePath, "include");
        
        if(Directory.Exists(includePath))
        {
            PublicIncludePaths.Add(includePath);
        }
        
        string libPath = Path.Combine(InModulePath, "lib");

        if(Directory.Exists(libPath))
        {
            //PublicLibraryPaths.Add(libPath);
            PublicRuntimeLibraryPaths.Add(libPath);
            PrivateRuntimeLibraryPaths.Add(libPath);
            var libs = Directory.EnumerateFiles(libPath, "*.so", SearchOption.TopDirectoryOnly); //.Union(Directory.EnumerateFiles(libPath, "*.so.*", searchOption));
            
            foreach (var lib in libs)
            {
                Console.WriteLine(string.Format("[rclUE] lib: {0}", lib));
                PublicAdditionalLibraries.Add(lib);
                RuntimeDependencies.Add(lib);
            }
        }
	}

	public rclUE(ReadOnlyTargetRules Target) : base(Target)
	{
		var envVars = Environment.GetEnvironmentVariables();
		string ldLibraryPathKey = "LD_LIBRARY_PATH";

		if (envVars.Contains(ldLibraryPathKey))
		{
			Console.WriteLine(string.Format("[rclUE] LD_LIBRARY_PATH: {0}", envVars[ldLibraryPathKey]));
		}
		
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
		    AddModule(RosPath);
		}

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
			
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Projects"
			}
		);
	}
}
