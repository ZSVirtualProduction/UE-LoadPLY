// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncLoadActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncLoadActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoad3di();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoad3di_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadColoredPly();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadColoredPly_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadGaussianSplat();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadGaussianSplat_NoRegister();
LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature();
LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature();
LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature();
LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature();
LOADPLYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F3diLoadResult();
LOADPLYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FColoredPlyResult();
LOADPLYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianSplatResult();
UPackage* Z_Construct_UPackage__Script_loadplyPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGaussianSplatResult **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaussianSplatResult;
class UScriptStruct* FGaussianSplatResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianSplatResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaussianSplatResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianSplatResult, (UObject*)Z_Construct_UPackage__Script_loadplyPlugin(), TEXT("GaussianSplatResult"));
	}
	return Z_Registration_Info_UScriptStruct_FGaussianSplatResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaussianSplatResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumGaussians_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTexture_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosTexture_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotTexture_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleTexture_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkCenter_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseTextureSize_MetaData[] = {
		{ "Category", "GaussianSplatResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumGaussians;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PosTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaleTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InverseTextureSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianSplatResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_NumGaussians = { "NumGaussians", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, NumGaussians), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumGaussians_MetaData), NewProp_NumGaussians_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_ColorTexture = { "ColorTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, ColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTexture_MetaData), NewProp_ColorTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_PosTexture = { "PosTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, PosTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosTexture_MetaData), NewProp_PosTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_RotTexture = { "RotTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, RotTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotTexture_MetaData), NewProp_RotTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_ScaleTexture = { "ScaleTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, ScaleTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleTexture_MetaData), NewProp_ScaleTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_ChunkCenter = { "ChunkCenter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, ChunkCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkCenter_MetaData), NewProp_ChunkCenter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_InverseTextureSize = { "InverseTextureSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGaussianSplatResult, InverseTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseTextureSize_MetaData), NewProp_InverseTextureSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_NumGaussians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_ColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_PosTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_RotTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_ScaleTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_ChunkCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewProp_InverseTextureSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
	nullptr,
	&NewStructOps,
	"GaussianSplatResult",
	Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::PropPointers),
	sizeof(FGaussianSplatResult),
	alignof(FGaussianSplatResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaussianSplatResult()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianSplatResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaussianSplatResult.InnerSingleton, Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaussianSplatResult.InnerSingleton;
}
// ********** End ScriptStruct FGaussianSplatResult ************************************************

// ********** Begin ScriptStruct FColoredPlyResult *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FColoredPlyResult;
class UScriptStruct* FColoredPlyResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FColoredPlyResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FColoredPlyResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColoredPlyResult, (UObject*)Z_Construct_UPackage__Script_loadplyPlugin(), TEXT("ColoredPlyResult"));
	}
	return Z_Registration_Info_UScriptStruct_FColoredPlyResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FColoredPlyResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTexture_MetaData[] = {
		{ "Category", "ColoredPlyResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTexture_MetaData[] = {
		{ "Category", "ColoredPlyResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameTexture_MetaData[] = {
		{ "Category", "ColoredPlyResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "ColoredPlyResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseTextureSize_MetaData[] = {
		{ "Category", "ColoredPlyResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameVertexOffsets_MetaData[] = {
		{ "Category", "ColoredPlyResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameVertexCounts_MetaData[] = {
		{ "Category", "ColoredPlyResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InverseTextureSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameVertexOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameVertexOffsets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameVertexCounts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameVertexCounts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColoredPlyResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_ColorTexture = { "ColorTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColoredPlyResult, ColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTexture_MetaData), NewProp_ColorTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_PositionTexture = { "PositionTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColoredPlyResult, PositionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTexture_MetaData), NewProp_PositionTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameTexture = { "FrameTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColoredPlyResult, FrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameTexture_MetaData), NewProp_FrameTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColoredPlyResult, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_InverseTextureSize = { "InverseTextureSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColoredPlyResult, InverseTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseTextureSize_MetaData), NewProp_InverseTextureSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexOffsets_Inner = { "FrameVertexOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexOffsets = { "FrameVertexOffsets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColoredPlyResult, FrameVertexOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameVertexOffsets_MetaData), NewProp_FrameVertexOffsets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexCounts_Inner = { "FrameVertexCounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexCounts = { "FrameVertexCounts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColoredPlyResult, FrameVertexCounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameVertexCounts_MetaData), NewProp_FrameVertexCounts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColoredPlyResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_ColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_PositionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_InverseTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexCounts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewProp_FrameVertexCounts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredPlyResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColoredPlyResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
	nullptr,
	&NewStructOps,
	"ColoredPlyResult",
	Z_Construct_UScriptStruct_FColoredPlyResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredPlyResult_Statics::PropPointers),
	sizeof(FColoredPlyResult),
	alignof(FColoredPlyResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredPlyResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FColoredPlyResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FColoredPlyResult()
{
	if (!Z_Registration_Info_UScriptStruct_FColoredPlyResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FColoredPlyResult.InnerSingleton, Z_Construct_UScriptStruct_FColoredPlyResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FColoredPlyResult.InnerSingleton;
}
// ********** End ScriptStruct FColoredPlyResult ***************************************************

// ********** Begin ScriptStruct F3diLoadResult ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F3diLoadResult;
class UScriptStruct* F3diLoadResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F3diLoadResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F3diLoadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F3diLoadResult, (UObject*)Z_Construct_UPackage__Script_loadplyPlugin(), TEXT("3diLoadResult"));
	}
	return Z_Registration_Info_UScriptStruct_F3diLoadResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_F3diLoadResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTexture_MetaData[] = {
		{ "Category", "3diLoadResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTexture_MetaData[] = {
		{ "Category", "3diLoadResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "3diLoadResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseTextureSize_MetaData[] = {
		{ "Category", "3diLoadResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameVertexOffsets_MetaData[] = {
		{ "Category", "3diLoadResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameVertexCounts_MetaData[] = {
		{ "Category", "3diLoadResult" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InverseTextureSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameVertexOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameVertexOffsets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameVertexCounts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameVertexCounts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F3diLoadResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_ColorTexture = { "ColorTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F3diLoadResult, ColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTexture_MetaData), NewProp_ColorTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_PositionTexture = { "PositionTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F3diLoadResult, PositionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTexture_MetaData), NewProp_PositionTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F3diLoadResult, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_InverseTextureSize = { "InverseTextureSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F3diLoadResult, InverseTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseTextureSize_MetaData), NewProp_InverseTextureSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexOffsets_Inner = { "FrameVertexOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexOffsets = { "FrameVertexOffsets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F3diLoadResult, FrameVertexOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameVertexOffsets_MetaData), NewProp_FrameVertexOffsets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexCounts_Inner = { "FrameVertexCounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexCounts = { "FrameVertexCounts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F3diLoadResult, FrameVertexCounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameVertexCounts_MetaData), NewProp_FrameVertexCounts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F3diLoadResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_ColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_PositionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_InverseTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexCounts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewProp_FrameVertexCounts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F3diLoadResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F3diLoadResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
	nullptr,
	&NewStructOps,
	"3diLoadResult",
	Z_Construct_UScriptStruct_F3diLoadResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F3diLoadResult_Statics::PropPointers),
	sizeof(F3diLoadResult),
	alignof(F3diLoadResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F3diLoadResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F3diLoadResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F3diLoadResult()
{
	if (!Z_Registration_Info_UScriptStruct_F3diLoadResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F3diLoadResult.InnerSingleton, Z_Construct_UScriptStruct_F3diLoadResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_F3diLoadResult.InnerSingleton;
}
// ********** End ScriptStruct F3diLoadResult ******************************************************

// ********** Begin Delegate FOnGaussianSplatLoaded ************************************************
struct Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics
{
	struct _Script_loadplyPlugin_eventOnGaussianSplatLoaded_Parms
	{
		FGaussianSplatResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_loadplyPlugin_eventOnGaussianSplatLoaded_Parms, Result), Z_Construct_UScriptStruct_FGaussianSplatResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3839749057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_loadplyPlugin, nullptr, "OnGaussianSplatLoaded__DelegateSignature", Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::_Script_loadplyPlugin_eventOnGaussianSplatLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::_Script_loadplyPlugin_eventOnGaussianSplatLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGaussianSplatLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnGaussianSplatLoaded, FGaussianSplatResult const& Result)
{
	struct _Script_loadplyPlugin_eventOnGaussianSplatLoaded_Parms
	{
		FGaussianSplatResult Result;
	};
	_Script_loadplyPlugin_eventOnGaussianSplatLoaded_Parms Parms;
	Parms.Result=Result;
	OnGaussianSplatLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGaussianSplatLoaded **************************************************

// ********** Begin Delegate FOnColoredPlyLoaded ***************************************************
struct Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics
{
	struct _Script_loadplyPlugin_eventOnColoredPlyLoaded_Parms
	{
		FColoredPlyResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_loadplyPlugin_eventOnColoredPlyLoaded_Parms, Result), Z_Construct_UScriptStruct_FColoredPlyResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3312654441
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_loadplyPlugin, nullptr, "OnColoredPlyLoaded__DelegateSignature", Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::_Script_loadplyPlugin_eventOnColoredPlyLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::_Script_loadplyPlugin_eventOnColoredPlyLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnColoredPlyLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnColoredPlyLoaded, FColoredPlyResult const& Result)
{
	struct _Script_loadplyPlugin_eventOnColoredPlyLoaded_Parms
	{
		FColoredPlyResult Result;
	};
	_Script_loadplyPlugin_eventOnColoredPlyLoaded_Parms Parms;
	Parms.Result=Result;
	OnColoredPlyLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnColoredPlyLoaded *****************************************************

// ********** Begin Delegate FOn3diLoaded **********************************************************
struct Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics
{
	struct _Script_loadplyPlugin_eventOn3diLoaded_Parms
	{
		F3diLoadResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_loadplyPlugin_eventOn3diLoaded_Parms, Result), Z_Construct_UScriptStruct_F3diLoadResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 587946453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_loadplyPlugin, nullptr, "On3diLoaded__DelegateSignature", Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::_Script_loadplyPlugin_eventOn3diLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::_Script_loadplyPlugin_eventOn3diLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOn3diLoaded_DelegateWrapper(const FMulticastScriptDelegate& On3diLoaded, F3diLoadResult const& Result)
{
	struct _Script_loadplyPlugin_eventOn3diLoaded_Parms
	{
		F3diLoadResult Result;
	};
	_Script_loadplyPlugin_eventOn3diLoaded_Parms Parms;
	Parms.Result=Result;
	On3diLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOn3diLoaded ************************************************************

// ********** Begin Delegate FOnLoadFailed *********************************************************
struct Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_loadplyPlugin, nullptr, "OnLoadFailed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoadFailed_DelegateWrapper(const FMulticastScriptDelegate& OnLoadFailed)
{
	OnLoadFailed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnLoadFailed ***********************************************************

// ********** Begin Class UAsyncLoadGaussianSplat Function LoadGaussianSplatAsync ******************
struct Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics
{
	struct AsyncLoadGaussianSplat_eventLoadGaussianSplatAsync_Parms
	{
		FString FileName;
		UAsyncLoadGaussianSplat* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "loadplyPlugin" },
		{ "DisplayName", "Load Gaussians From PLY Async" },
		{ "Keywords", "loadplyPlugin async gaussian splat" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadGaussianSplat_eventLoadGaussianSplatAsync_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadGaussianSplat_eventLoadGaussianSplatAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadGaussianSplat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadGaussianSplat, nullptr, "LoadGaussianSplatAsync", Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::AsyncLoadGaussianSplat_eventLoadGaussianSplatAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::AsyncLoadGaussianSplat_eventLoadGaussianSplatAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadGaussianSplat::execLoadGaussianSplatAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLoadGaussianSplat**)Z_Param__Result=UAsyncLoadGaussianSplat::LoadGaussianSplatAsync(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadGaussianSplat Function LoadGaussianSplatAsync ********************

// ********** Begin Class UAsyncLoadGaussianSplat **************************************************
void UAsyncLoadGaussianSplat::StaticRegisterNativesUAsyncLoadGaussianSplat()
{
	UClass* Class = UAsyncLoadGaussianSplat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadGaussianSplatAsync", &UAsyncLoadGaussianSplat::execLoadGaussianSplatAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLoadGaussianSplat;
UClass* UAsyncLoadGaussianSplat::GetPrivateStaticClass()
{
	using TClass = UAsyncLoadGaussianSplat;
	if (!Z_Registration_Info_UClass_UAsyncLoadGaussianSplat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLoadGaussianSplat"),
			Z_Registration_Info_UClass_UAsyncLoadGaussianSplat.InnerSingleton,
			StaticRegisterNativesUAsyncLoadGaussianSplat,
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
	return Z_Registration_Info_UClass_UAsyncLoadGaussianSplat.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLoadGaussianSplat_NoRegister()
{
	return UAsyncLoadGaussianSplat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExposedAsyncProxy", "AsyncAction" },
		{ "IncludePath", "AsyncLoadActions.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadGaussianSplat_LoadGaussianSplatAsync, "LoadGaussianSplatAsync" }, // 4146763042
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadGaussianSplat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadGaussianSplat, OnSuccess), Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2888004666
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadGaussianSplat, OnFailure), Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 531840352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::ClassParams = {
	&UAsyncLoadGaussianSplat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoadGaussianSplat()
{
	if (!Z_Registration_Info_UClass_UAsyncLoadGaussianSplat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadGaussianSplat.OuterSingleton, Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoadGaussianSplat.OuterSingleton;
}
UAsyncLoadGaussianSplat::UAsyncLoadGaussianSplat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadGaussianSplat);
UAsyncLoadGaussianSplat::~UAsyncLoadGaussianSplat() {}
// ********** End Class UAsyncLoadGaussianSplat ****************************************************

// ********** Begin Class UAsyncLoadColoredPly Function LoadColoredPlyAsync ************************
struct Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics
{
	struct AsyncLoadColoredPly_eventLoadColoredPlyAsync_Parms
	{
		FString FileName;
		UAsyncLoadColoredPly* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "loadplyPlugin" },
		{ "DisplayName", "Load Colored Point Cloud Async" },
		{ "Keywords", "loadplyPlugin async colored ply" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadColoredPly_eventLoadColoredPlyAsync_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadColoredPly_eventLoadColoredPlyAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadColoredPly_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadColoredPly, nullptr, "LoadColoredPlyAsync", Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::AsyncLoadColoredPly_eventLoadColoredPlyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::AsyncLoadColoredPly_eventLoadColoredPlyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadColoredPly::execLoadColoredPlyAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLoadColoredPly**)Z_Param__Result=UAsyncLoadColoredPly::LoadColoredPlyAsync(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadColoredPly Function LoadColoredPlyAsync **************************

// ********** Begin Class UAsyncLoadColoredPly *****************************************************
void UAsyncLoadColoredPly::StaticRegisterNativesUAsyncLoadColoredPly()
{
	UClass* Class = UAsyncLoadColoredPly::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadColoredPlyAsync", &UAsyncLoadColoredPly::execLoadColoredPlyAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLoadColoredPly;
UClass* UAsyncLoadColoredPly::GetPrivateStaticClass()
{
	using TClass = UAsyncLoadColoredPly;
	if (!Z_Registration_Info_UClass_UAsyncLoadColoredPly.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLoadColoredPly"),
			Z_Registration_Info_UClass_UAsyncLoadColoredPly.InnerSingleton,
			StaticRegisterNativesUAsyncLoadColoredPly,
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
	return Z_Registration_Info_UClass_UAsyncLoadColoredPly.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLoadColoredPly_NoRegister()
{
	return UAsyncLoadColoredPly::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLoadColoredPly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExposedAsyncProxy", "AsyncAction" },
		{ "IncludePath", "AsyncLoadActions.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadColoredPly_LoadColoredPlyAsync, "LoadColoredPlyAsync" }, // 3741398157
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadColoredPly>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadColoredPly_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadColoredPly, OnSuccess), Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2447210257
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadColoredPly_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadColoredPly, OnFailure), Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 531840352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadColoredPly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadColoredPly_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadColoredPly_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadColoredPly_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLoadColoredPly_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadColoredPly_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadColoredPly_Statics::ClassParams = {
	&UAsyncLoadColoredPly::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLoadColoredPly_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadColoredPly_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadColoredPly_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadColoredPly_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoadColoredPly()
{
	if (!Z_Registration_Info_UClass_UAsyncLoadColoredPly.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadColoredPly.OuterSingleton, Z_Construct_UClass_UAsyncLoadColoredPly_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoadColoredPly.OuterSingleton;
}
UAsyncLoadColoredPly::UAsyncLoadColoredPly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadColoredPly);
UAsyncLoadColoredPly::~UAsyncLoadColoredPly() {}
// ********** End Class UAsyncLoadColoredPly *******************************************************

// ********** Begin Class UAsyncLoad3di Function Load3diAsync **************************************
struct Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics
{
	struct AsyncLoad3di_eventLoad3diAsync_Parms
	{
		FString FileName;
		UAsyncLoad3di* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "loadplyPlugin" },
		{ "DisplayName", "Load 3DI Point Cloud Async" },
		{ "Keywords", "loadplyPlugin async 3di draco" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoad3di_eventLoad3diAsync_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoad3di_eventLoad3diAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoad3di_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoad3di, nullptr, "Load3diAsync", Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::AsyncLoad3di_eventLoad3diAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::AsyncLoad3di_eventLoad3diAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoad3di::execLoad3diAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLoad3di**)Z_Param__Result=UAsyncLoad3di::Load3diAsync(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoad3di Function Load3diAsync ****************************************

// ********** Begin Class UAsyncLoad3di ************************************************************
void UAsyncLoad3di::StaticRegisterNativesUAsyncLoad3di()
{
	UClass* Class = UAsyncLoad3di::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Load3diAsync", &UAsyncLoad3di::execLoad3diAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLoad3di;
UClass* UAsyncLoad3di::GetPrivateStaticClass()
{
	using TClass = UAsyncLoad3di;
	if (!Z_Registration_Info_UClass_UAsyncLoad3di.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLoad3di"),
			Z_Registration_Info_UClass_UAsyncLoad3di.InnerSingleton,
			StaticRegisterNativesUAsyncLoad3di,
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
	return Z_Registration_Info_UClass_UAsyncLoad3di.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLoad3di_NoRegister()
{
	return UAsyncLoad3di::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLoad3di_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExposedAsyncProxy", "AsyncAction" },
		{ "IncludePath", "AsyncLoadActions.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoad3di_Load3diAsync, "Load3diAsync" }, // 3824759170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoad3di>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoad3di_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoad3di, OnSuccess), Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3306455855
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoad3di_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoad3di, OnFailure), Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 531840352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoad3di_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoad3di_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoad3di_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoad3di_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLoad3di_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoad3di_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoad3di_Statics::ClassParams = {
	&UAsyncLoad3di::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLoad3di_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoad3di_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoad3di_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoad3di_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoad3di()
{
	if (!Z_Registration_Info_UClass_UAsyncLoad3di.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoad3di.OuterSingleton, Z_Construct_UClass_UAsyncLoad3di_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoad3di.OuterSingleton;
}
UAsyncLoad3di::UAsyncLoad3di(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoad3di);
UAsyncLoad3di::~UAsyncLoad3di() {}
// ********** End Class UAsyncLoad3di **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h__Script_loadplyPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGaussianSplatResult::StaticStruct, Z_Construct_UScriptStruct_FGaussianSplatResult_Statics::NewStructOps, TEXT("GaussianSplatResult"), &Z_Registration_Info_UScriptStruct_FGaussianSplatResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianSplatResult), 3839749057U) },
		{ FColoredPlyResult::StaticStruct, Z_Construct_UScriptStruct_FColoredPlyResult_Statics::NewStructOps, TEXT("ColoredPlyResult"), &Z_Registration_Info_UScriptStruct_FColoredPlyResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColoredPlyResult), 3312654441U) },
		{ F3diLoadResult::StaticStruct, Z_Construct_UScriptStruct_F3diLoadResult_Statics::NewStructOps, TEXT("3diLoadResult"), &Z_Registration_Info_UScriptStruct_F3diLoadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F3diLoadResult), 587946453U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLoadGaussianSplat, UAsyncLoadGaussianSplat::StaticClass, TEXT("UAsyncLoadGaussianSplat"), &Z_Registration_Info_UClass_UAsyncLoadGaussianSplat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadGaussianSplat), 366078649U) },
		{ Z_Construct_UClass_UAsyncLoadColoredPly, UAsyncLoadColoredPly::StaticClass, TEXT("UAsyncLoadColoredPly"), &Z_Registration_Info_UClass_UAsyncLoadColoredPly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadColoredPly), 3833792323U) },
		{ Z_Construct_UClass_UAsyncLoad3di, UAsyncLoad3di::StaticClass, TEXT("UAsyncLoad3di"), &Z_Registration_Info_UClass_UAsyncLoad3di, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoad3di), 123910036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h__Script_loadplyPlugin_1373114033(TEXT("/Script/loadplyPlugin"),
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h__Script_loadplyPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h__Script_loadplyPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h__Script_loadplyPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h__Script_loadplyPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
