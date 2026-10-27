// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CXGameHUD.h"

#ifdef CX_CXGameHUD_generated_h
#error "CXGameHUD.generated.h already included, missing '#pragma once' in CXGameHUD.h"
#endif
#define CX_CXGameHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCXGameHUD ***************************************************************
#define FID_UE5_CX_Source_CX_UI_CXGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateGameStatus);


CX_API UClass* Z_Construct_UClass_UCXGameHUD_NoRegister();

#define FID_UE5_CX_Source_CX_UI_CXGameHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCXGameHUD(); \
	friend struct Z_Construct_UClass_UCXGameHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_UCXGameHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(UCXGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_UCXGameHUD_NoRegister) \
	DECLARE_SERIALIZER(UCXGameHUD)


#define FID_UE5_CX_Source_CX_UI_CXGameHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCXGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCXGameHUD(UCXGameHUD&&) = delete; \
	UCXGameHUD(const UCXGameHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCXGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCXGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCXGameHUD) \
	NO_API virtual ~UCXGameHUD();


#define FID_UE5_CX_Source_CX_UI_CXGameHUD_h_15_PROLOG
#define FID_UE5_CX_Source_CX_UI_CXGameHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_CX_Source_CX_UI_CXGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_CX_Source_CX_UI_CXGameHUD_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_CX_Source_CX_UI_CXGameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCXGameHUD;

// ********** End Class UCXGameHUD *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_CX_Source_CX_UI_CXGameHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
