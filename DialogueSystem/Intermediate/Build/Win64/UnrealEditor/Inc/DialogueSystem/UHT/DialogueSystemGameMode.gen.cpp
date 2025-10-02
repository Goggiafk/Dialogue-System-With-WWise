// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueSystem/DialogueSystemGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSystemGameMode() {}

// Begin Cross Module References
DIALOGUESYSTEM_API UClass* Z_Construct_UClass_ADialogueSystemGameMode();
DIALOGUESYSTEM_API UClass* Z_Construct_UClass_ADialogueSystemGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DialogueSystem();
// End Cross Module References

// Begin Class ADialogueSystemGameMode
void ADialogueSystemGameMode::StaticRegisterNativesADialogueSystemGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADialogueSystemGameMode);
UClass* Z_Construct_UClass_ADialogueSystemGameMode_NoRegister()
{
	return ADialogueSystemGameMode::StaticClass();
}
struct Z_Construct_UClass_ADialogueSystemGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DialogueSystemGameMode.h" },
		{ "ModuleRelativePath", "DialogueSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADialogueSystemGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADialogueSystemGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADialogueSystemGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADialogueSystemGameMode_Statics::ClassParams = {
	&ADialogueSystemGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADialogueSystemGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADialogueSystemGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADialogueSystemGameMode()
{
	if (!Z_Registration_Info_UClass_ADialogueSystemGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADialogueSystemGameMode.OuterSingleton, Z_Construct_UClass_ADialogueSystemGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADialogueSystemGameMode.OuterSingleton;
}
template<> DIALOGUESYSTEM_API UClass* StaticClass<ADialogueSystemGameMode>()
{
	return ADialogueSystemGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADialogueSystemGameMode);
ADialogueSystemGameMode::~ADialogueSystemGameMode() {}
// End Class ADialogueSystemGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADialogueSystemGameMode, ADialogueSystemGameMode::StaticClass, TEXT("ADialogueSystemGameMode"), &Z_Registration_Info_UClass_ADialogueSystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADialogueSystemGameMode), 2337466697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemGameMode_h_3955689148(TEXT("/Script/DialogueSystem"),
	Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
