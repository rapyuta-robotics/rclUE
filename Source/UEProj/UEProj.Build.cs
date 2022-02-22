using System;
using System.IO;
using System.Diagnostics;
using System.Linq;
using UnrealBuildTool;

public class UEProj : ModuleRules
{
    public UEProj(ReadOnlyTargetRules Target) : base(Target)
    {
        // Type = ModuleType.External;

        if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            PublicSystemLibraryPaths.Add("/usr/lib/x86_64-linux-gnu");
            // PublicRuntimeLibraryPaths.Add(LibrariesPath);
            // PublicAdditionalLibraries.Add("/usr/lib/x86_64-linux-gnu/libproj.so");
            // RuntimeDependencies.Add("/usr/lib/x86_64-linux-gnu/libproj.so");
            PublicSystemLibraries.Add("proj");
            PublicIncludePaths.Add("/usr/include");


            // if (Directory.Exists(LibrariesPath))
            // {
            //     var libs = Directory.EnumerateFiles(LibrariesPath, "*.so", SearchOption.TopDirectoryOnly);

            //     foreach (var libName in libs)
            //     {
            //         PublicAdditionalLibraries.Add(libName);
            //         RuntimeDependencies.Add(libName);
            //     }

                // extended_libs = Directory.EnumerateFiles(LibrariesPath, "*.so.*", SearchOption.TopDirectoryOnly);
                // foreach (var libName in extended_libs)
                // {
                // 	RuntimeDependencies.Add(libName);
                // }
            // }
        }

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                // "ros2lib",
                // "UEProj",
                // "Projects"
            }
        );
    }
}
