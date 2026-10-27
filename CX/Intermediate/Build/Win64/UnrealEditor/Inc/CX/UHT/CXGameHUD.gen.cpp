// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/CXGameHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXGameHUD() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_UCXGameHUD();
CX_API UClass* Z_Construct_UClass_UCXGameHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCXGameHUD Function UpdateGameStatus *************************************
struct Z_Construct_UFunction_UCXGameHUD_UpdateGameStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c\xec\x99\x80 \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 UI\xec\x97\x90 \xeb\xb0\x98\xec\x98\x81\n" },
#endif
		{ "ModuleRelativePath", "UI/CXGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c\xec\x99\x80 \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 UI\xec\x97\x90 \xeb\xb0\x98\xec\x98\x81" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXGameHUD_UpdateGameStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCXGameHUD, nullptr, "UpdateGameStatus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameHUD_UpdateGameStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXGameHUD_UpdateGameStatus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCXGameHUD_UpdateGameStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXGameHUD_UpdateGameStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCXGameHUD::execUpdateGameStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameStatus();
	P_NATIVE_END;
}
// ********** End Class UCXGameHUD Function UpdateGameStatus ***************************************

// ********** Begin Class UCXGameHUD ***************************************************************
void UCXGameHUD::StaticRegisterNativesUCXGameHUD()
{
	UClass* Class = UCXGameHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateGameStatus", &UCXGameHUD::execUpdateGameStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCXGameHUD;
UClass* UCXGameHUD::GetPrivateStaticClass()
{
	using TClass = UCXGameHUD;
	if (!Z_Registration_Info_UClass_UCXGameHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXGameHUD"),
			Z_Registration_Info_UClass_UCXGameHUD.InnerSingleton,
			StaticRegisterNativesUCXGameHUD,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCXGameHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_UCXGameHUD_NoRegister()
{
	return UCXGameHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCXGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c, \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84, \xec\x8a\xb9\xed\x8c\xa8 \xea\xb2\xb0\xea\xb3\xbc\xeb\xa5\xbc \xed\x91\x9c\xec\x8b\x9c\xed\x95\x98\xeb\x8a\x94 HUD\n */" },
#endif
		{ "IncludePath", "UI/CXGameHUD.h" },
		{ "ModuleRelativePath", "UI/CXGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c, \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84, \xec\x8a\xb9\xed\x8c\xa8 \xea\xb2\xb0\xea\xb3\xbc\xeb\xa5\xbc \xed\x91\x9c\xec\x8b\x9c\xed\x95\x98\xeb\x8a\x94 HUD" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_GameState_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c \xed\x91\x9c\xec\x8b\x9c\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CXGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_RemainingTime_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84 \xed\x91\x9c\xec\x8b\x9c\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CXGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84 \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Result_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xb9\xeb\xa6\xac \xeb\x98\x90\xeb\x8a\x94 \xed\x8c\xa8\xeb\xb0\xb0 \xea\xb2\xb0\xea\xb3\xbc \xed\x91\x9c\xec\x8b\x9c\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CXGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xb9\xeb\xa6\xac \xeb\x98\x90\xeb\x8a\x94 \xed\x8c\xa8\xeb\xb0\xb0 \xea\xb2\xb0\xea\xb3\xbc \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_GameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_RemainingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCXGameHUD_UpdateGameStatus, "UpdateGameStatus" }, // 3802249868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXGameHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCXGameHUD_Statics::NewProp_TextBlock_GameState = { "TextBlock_GameState", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCXGameHUD, TextBlock_GameState), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_GameState_MetaData), NewProp_TextBlock_GameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCXGameHUD_Statics::NewProp_TextBlock_RemainingTime = { "TextBlock_RemainingTime", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCXGameHUD, TextBlock_RemainingTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_RemainingTime_MetaData), NewProp_TextBlock_RemainingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCXGameHUD_Statics::NewProp_TextBlock_Result = { "TextBlock_Result", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCXGameHUD, TextBlock_Result), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Result_MetaData), NewProp_TextBlock_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCXGameHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCXGameHUD_Statics::NewProp_TextBlock_GameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCXGameHUD_Statics::NewProp_TextBlock_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCXGameHUD_Statics::NewProp_TextBlock_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCXGameHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXGameHUD_Statics::ClassParams = {
	&UCXGameHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCXGameHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameHUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXGameHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXGameHUD()
{
	if (!Z_Registration_Info_UClass_UCXGameHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXGameHUD.OuterSingleton, Z_Construct_UClass_UCXGameHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXGameHUD.OuterSingleton;
}
UCXGameHUD::UCXGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXGameHUD);
UCXGameHUD::~UCXGameHUD() {}
// ********** End Class UCXGameHUD *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE5_CX_Source_CX_UI_CXGameHUD_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXGameHUD, UCXGameHUD::StaticClass, TEXT("UCXGameHUD"), &Z_Registration_Info_UClass_UCXGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXGameHUD), 241333003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_CX_Source_CX_UI_CXGameHUD_h__Script_CX_2541108101(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UE5_CX_Source_CX_UI_CXGameHUD_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_CX_Source_CX_UI_CXGameHUD_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
