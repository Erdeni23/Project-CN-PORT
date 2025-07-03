// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPPandBP_Portfolio : ModuleRules
{
    public CPPandBP_Portfolio(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

        PublicIncludePaths.AddRange(
            new string[]
            {
                  "CPPandBP_Portfolio",
                  "CPPandBP_Portfolio/Public",
                  "CPPandBP_Portfolio/Public/Subsystems",
                  "CPPandBP_Portfolio/Public/Interfaces",

                  "CPPandBP_Portfolio",
                  "CPPandBP_Portfolio/Private",
                  "CPPandBP_Portfolio/Private/Subsystems",
                  "CPPandBP_Portfolio/Private/Interfaces",
});

    }



}


