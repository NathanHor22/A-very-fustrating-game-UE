// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Platformergame : ModuleRules
{
	public Platformergame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Platformergame",
			"Platformergame/Variant_Platforming",
			"Platformergame/Variant_Platforming/Animation",
			"Platformergame/Variant_Combat",
			"Platformergame/Variant_Combat/AI",
			"Platformergame/Variant_Combat/Animation",
			"Platformergame/Variant_Combat/Gameplay",
			"Platformergame/Variant_Combat/Interfaces",
			"Platformergame/Variant_Combat/UI",
			"Platformergame/Variant_SideScrolling",
			"Platformergame/Variant_SideScrolling/AI",
			"Platformergame/Variant_SideScrolling/Gameplay",
			"Platformergame/Variant_SideScrolling/Interfaces",
			"Platformergame/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
