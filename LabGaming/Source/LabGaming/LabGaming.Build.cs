// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LabGaming : ModuleRules
{
	public LabGaming(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
