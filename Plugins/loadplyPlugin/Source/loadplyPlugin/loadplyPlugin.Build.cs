using UnrealBuildTool;

public class loadplyPlugin : ModuleRules
{
    public loadplyPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
                // ... add public include paths required here ...
            }
        );

        PrivateIncludePaths.AddRange(
            new string[] {
                // ... add other private include paths required here ...
            }
        );

        // �ж�Ŀ���Ƿ��Ǳ༭��
        if (Target.Type == TargetType.Editor)
        {
            // ��Щģ����ڱ༭������Ҫ
            PublicDependencyModuleNames.AddRange(
                new string[] {
                    "AssetTools", // Editor-only module
                    "Kismet",     // Editor-only module
                    // ... add other editor dependencies that you need ...
                }
            );
        }

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "RenderCore",
                "RHI",
                "Niagara",
                "AssetRegistry",
                "zlib",
                // ... add other public dependencies that you statically link with here ...
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "Niagara",
                "Projects",
                "DracoDecoder",
                // ... add private dependencies that you statically link with here ...
            }
        );

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                // ... add any modules that your module loads dynamically here ...
            }
        );

    }
}
