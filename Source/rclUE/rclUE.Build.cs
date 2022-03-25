using System;
using System.IO;
using UnrealBuildTool;

public class rclUE : ModuleRules
{
	public rclUE(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
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
