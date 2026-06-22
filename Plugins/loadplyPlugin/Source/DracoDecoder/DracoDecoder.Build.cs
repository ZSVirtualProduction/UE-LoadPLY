using UnrealBuildTool;
using System.IO;

public class DracoDecoder : ModuleRules
{
	public DracoDecoder(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		string DracoPath = Path.Combine(ModuleDirectory, "Private");
		PrivateIncludePaths.Add(DracoPath);

		PublicDefinitions.Add("DRACO_DECODE_ONLY");
		PublicDefinitions.Add("DRACO_POINT_CLOUD_COMPRESSION");

		// Suppress common third-party code warnings
		bWarningsAsErrors = false;
		ShadowVariableWarningLevel = WarningLevel.Off;
		UnsafeTypeCastWarningLevel = WarningLevel.Off;

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
		});
	}
}
