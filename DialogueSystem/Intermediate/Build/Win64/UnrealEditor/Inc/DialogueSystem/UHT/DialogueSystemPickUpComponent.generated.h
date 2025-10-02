// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueSystemPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADialogueSystemCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DIALOGUESYSTEM_DialogueSystemPickUpComponent_generated_h
#error "DialogueSystemPickUpComponent.generated.h already included, missing '#pragma once' in DialogueSystemPickUpComponent.h"
#endif
#define DIALOGUESYSTEM_DialogueSystemPickUpComponent_generated_h

#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_12_DELEGATE \
DIALOGUESYSTEM_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ADialogueSystemCharacter* PickUpCharacter);


#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueSystemPickUpComponent(); \
	friend struct Z_Construct_UClass_UDialogueSystemPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogueSystemPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogueSystemPickUpComponent)


#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueSystemPickUpComponent(UDialogueSystemPickUpComponent&&); \
	UDialogueSystemPickUpComponent(const UDialogueSystemPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueSystemPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueSystemPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueSystemPickUpComponent) \
	NO_API virtual ~UDialogueSystemPickUpComponent();


#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_14_PROLOG
#define FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUESYSTEM_API UClass* StaticClass<class UDialogueSystemPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_goggi_Documents_Unreal_Projects_Dialogue_System_With_WWise_DialogueSystem_Source_DialogueSystem_DialogueSystemPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
