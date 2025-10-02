// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueSystemProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DIALOGUESYSTEM_DialogueSystemProjectile_generated_h
#error "DialogueSystemProjectile.generated.h already included, missing '#pragma once' in DialogueSystemProjectile.h"
#endif
#define DIALOGUESYSTEM_DialogueSystemProjectile_generated_h

#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADialogueSystemProjectile(); \
	friend struct Z_Construct_UClass_ADialogueSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(ADialogueSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(ADialogueSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADialogueSystemProjectile(ADialogueSystemProjectile&&); \
	ADialogueSystemProjectile(const ADialogueSystemProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueSystemProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueSystemProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADialogueSystemProjectile) \
	NO_API virtual ~ADialogueSystemProjectile();


#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_12_PROLOG
#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUESYSTEM_API UClass* StaticClass<class ADialogueSystemProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
