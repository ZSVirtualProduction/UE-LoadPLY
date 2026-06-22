// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "loadplyPluginBPLibrary.h"
#include "Engine/Texture2D.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeloadplyPluginBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulScenemy_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UloadplyPluginBPLibrary();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UloadplyPluginBPLibrary_NoRegister();
LOADPLYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianComponentChunkmy();
UPackage* Z_Construct_UPackage__Script_loadplyPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGaussianComponentChunkmy *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy;
class UScriptStruct* FGaussianComponentChunkmy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianComponentChunkmy, (UObject*)Z_Construct_UPackage__Script_loadplyPlugin(), TEXT("GaussianComponentChunkmy"));
	}
	return Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaussianComponentChunkmy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// namespace CulConstants\n" },
#endif
		{ "ModuleRelativePath", "Public/loadplyPluginBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "namespace CulConstants" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianComponentChunkmy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianComponentChunkmy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
	nullptr,
	&NewStructOps,
	"GaussianComponentChunkmy",
	nullptr,
	0,
	sizeof(FGaussianComponentChunkmy),
	alignof(FGaussianComponentChunkmy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianComponentChunkmy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaussianComponentChunkmy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaussianComponentChunkmy()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy.InnerSingleton, Z_Construct_UScriptStruct_FGaussianComponentChunkmy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy.InnerSingleton;
}
// ********** End ScriptStruct FGaussianComponentChunkmy *******************************************

// ********** Begin Class UloadplyPluginBPLibrary Function LoadColoredPly **************************
struct Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics
{
	struct loadplyPluginBPLibrary_eventLoadColoredPly_Parms
	{
		FString FileName;
		UTexture2D* OutColorTexture;
		UTexture2D* OutPositionTexture;
		UTexture2D* OutFrameTexture;
		FIntPoint OutTextureSize;
		FVector2D OutInverseTextureSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "loadplyPluginTesting" },
		{ "DisplayName", "Load Colored Point Cloud" },
		{ "Keywords", "loadplyPlugin colored ply ascii" },
		{ "ModuleRelativePath", "Public/loadplyPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutColorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPositionTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutFrameTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInverseTextureSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadColoredPly_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutColorTexture = { "OutColorTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadColoredPly_Parms, OutColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutPositionTexture = { "OutPositionTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadColoredPly_Parms, OutPositionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutFrameTexture = { "OutFrameTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadColoredPly_Parms, OutFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutTextureSize = { "OutTextureSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadColoredPly_Parms, OutTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutInverseTextureSize = { "OutInverseTextureSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadColoredPly_Parms, OutInverseTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((loadplyPluginBPLibrary_eventLoadColoredPly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(loadplyPluginBPLibrary_eventLoadColoredPly_Parms), &Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutPositionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutFrameTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_OutInverseTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UloadplyPluginBPLibrary, nullptr, "LoadColoredPly", Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::loadplyPluginBPLibrary_eventLoadColoredPly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::loadplyPluginBPLibrary_eventLoadColoredPly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UloadplyPluginBPLibrary::execLoadColoredPly)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutColorTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutPositionTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutFrameTexture);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_OutTextureSize);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutInverseTextureSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UloadplyPluginBPLibrary::LoadColoredPly(Z_Param_FileName,P_ARG_GC_BARRIER(Z_Param_Out_OutColorTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutPositionTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutFrameTexture),Z_Param_Out_OutTextureSize,Z_Param_Out_OutInverseTextureSize);
	P_NATIVE_END;
}
// ********** End Class UloadplyPluginBPLibrary Function LoadColoredPly ****************************

// ********** Begin Class UloadplyPluginBPLibrary Function LoadGaussianSplat ***********************
struct Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics
{
	struct loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms
	{
		FString FileName;
		FString setAssetName;
		ACulScenemy* BlueprintValues;
		TArray<int32> OutNumGaussians;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "loadplyPluginTesting" },
		{ "DisplayName", "Load Gaussian Splat" },
		{ "Keywords", "loadplyPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/loadplyPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_setAssetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumGaussians_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNumGaussians;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_setAssetName = { "setAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms, setAssetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_BlueprintValues = { "BlueprintValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms, BlueprintValues), Z_Construct_UClass_ACulScenemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_OutNumGaussians_Inner = { "OutNumGaussians", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_OutNumGaussians = { "OutNumGaussians", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms, OutNumGaussians), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_setAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_BlueprintValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_OutNumGaussians_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_OutNumGaussians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UloadplyPluginBPLibrary, nullptr, "LoadGaussianSplat", Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::loadplyPluginBPLibrary_eventLoadGaussianSplat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UloadplyPluginBPLibrary::execLoadGaussianSplat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_setAssetName);
	P_GET_OBJECT(ACulScenemy,Z_Param_BlueprintValues);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutNumGaussians);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UloadplyPluginBPLibrary::LoadGaussianSplat(Z_Param_FileName,Z_Param_setAssetName,Z_Param_BlueprintValues,Z_Param_Out_OutNumGaussians);
	P_NATIVE_END;
}
// ********** End Class UloadplyPluginBPLibrary Function LoadGaussianSplat *************************

// ********** Begin Class UloadplyPluginBPLibrary Function loadplyPluginSampleFunction *************
struct Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics
{
	struct loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms
	{
		FString FileName;
		UTexture2D* OutColorTexture;
		UTexture2D* OutPosTexture;
		UTexture2D* OutRotTexture;
		UTexture2D* OutScaleTexture;
		FVector OutChunkCenter;
		FIntPoint OutTextureSize;
		FVector2D OutInverseTextureSize;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "loadplyPluginTesting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x85\xe5\xa3\xb0\xe6\x98\x8e\n//static const FString GSColorTex;\n//static const FString GSPosTex;\n//static const FString GSRotTex;\n//static const FString GSScaleTex;\n" },
#endif
		{ "DisplayName", "Load Gaussians From PLY" },
		{ "Keywords", "loadplyPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/loadplyPluginBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x85\xe5\xa3\xb0\xe6\x98\x8e\nstatic const FString GSColorTex;\nstatic const FString GSPosTex;\nstatic const FString GSRotTex;\nstatic const FString GSScaleTex;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutColorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPosTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutRotTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutScaleTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutChunkCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInverseTextureSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutColorTexture = { "OutColorTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, OutColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutPosTexture = { "OutPosTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, OutPosTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutRotTexture = { "OutRotTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, OutRotTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutScaleTexture = { "OutScaleTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, OutScaleTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutChunkCenter = { "OutChunkCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, OutChunkCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutTextureSize = { "OutTextureSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, OutTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutInverseTextureSize = { "OutInverseTextureSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, OutInverseTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutPosTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutRotTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutScaleTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutChunkCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_OutInverseTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UloadplyPluginBPLibrary, nullptr, "loadplyPluginSampleFunction", Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::loadplyPluginBPLibrary_eventloadplyPluginSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UloadplyPluginBPLibrary::execloadplyPluginSampleFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutColorTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutPosTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutRotTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutScaleTexture);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutChunkCenter);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_OutTextureSize);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutInverseTextureSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UloadplyPluginBPLibrary::loadplyPluginSampleFunction(Z_Param_FileName,P_ARG_GC_BARRIER(Z_Param_Out_OutColorTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutPosTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutRotTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutScaleTexture),Z_Param_Out_OutChunkCenter,Z_Param_Out_OutTextureSize,Z_Param_Out_OutInverseTextureSize);
	P_NATIVE_END;
}
// ********** End Class UloadplyPluginBPLibrary Function loadplyPluginSampleFunction ***************

// ********** Begin Class UloadplyPluginBPLibrary Function loadplyPluginSampleFunction2 ************
struct Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics
{
	struct loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms
	{
		FString FileName;
		UTexture2D* OutColorTexture;
		UTexture2D* OutPosTexture;
		UTexture2D* OutRotTexture;
		UTexture2D* OutScaleTexture;
		FVector OutChunkCenter;
		FIntPoint OutTextureSize;
		FVector2D OutInverseTextureSize;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "loadplyPluginTesting" },
		{ "DisplayName", "Load Gaussians From PLY v2" },
		{ "Keywords", "loadplyPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/loadplyPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutColorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPosTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutRotTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutScaleTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutChunkCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTextureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInverseTextureSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutColorTexture = { "OutColorTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, OutColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutPosTexture = { "OutPosTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, OutPosTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutRotTexture = { "OutRotTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, OutRotTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutScaleTexture = { "OutScaleTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, OutScaleTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutChunkCenter = { "OutChunkCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, OutChunkCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutTextureSize = { "OutTextureSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, OutTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutInverseTextureSize = { "OutInverseTextureSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, OutInverseTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutPosTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutRotTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutScaleTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutChunkCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_OutInverseTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UloadplyPluginBPLibrary, nullptr, "loadplyPluginSampleFunction2", Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::loadplyPluginBPLibrary_eventloadplyPluginSampleFunction2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UloadplyPluginBPLibrary::execloadplyPluginSampleFunction2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutColorTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutPosTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutRotTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutScaleTexture);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutChunkCenter);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_OutTextureSize);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutInverseTextureSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UloadplyPluginBPLibrary::loadplyPluginSampleFunction2(Z_Param_FileName,P_ARG_GC_BARRIER(Z_Param_Out_OutColorTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutPosTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutRotTexture),P_ARG_GC_BARRIER(Z_Param_Out_OutScaleTexture),Z_Param_Out_OutChunkCenter,Z_Param_Out_OutTextureSize,Z_Param_Out_OutInverseTextureSize);
	P_NATIVE_END;
}
// ********** End Class UloadplyPluginBPLibrary Function loadplyPluginSampleFunction2 **************

// ********** Begin Class UloadplyPluginBPLibrary **************************************************
void UloadplyPluginBPLibrary::StaticRegisterNativesUloadplyPluginBPLibrary()
{
	UClass* Class = UloadplyPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadColoredPly", &UloadplyPluginBPLibrary::execLoadColoredPly },
		{ "LoadGaussianSplat", &UloadplyPluginBPLibrary::execLoadGaussianSplat },
		{ "loadplyPluginSampleFunction", &UloadplyPluginBPLibrary::execloadplyPluginSampleFunction },
		{ "loadplyPluginSampleFunction2", &UloadplyPluginBPLibrary::execloadplyPluginSampleFunction2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UloadplyPluginBPLibrary;
UClass* UloadplyPluginBPLibrary::GetPrivateStaticClass()
{
	using TClass = UloadplyPluginBPLibrary;
	if (!Z_Registration_Info_UClass_UloadplyPluginBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("loadplyPluginBPLibrary"),
			Z_Registration_Info_UClass_UloadplyPluginBPLibrary.InnerSingleton,
			StaticRegisterNativesUloadplyPluginBPLibrary,
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
	return Z_Registration_Info_UClass_UloadplyPluginBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UloadplyPluginBPLibrary_NoRegister()
{
	return UloadplyPluginBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UloadplyPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "loadplyPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/loadplyPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadColoredPly, "LoadColoredPly" }, // 1693622846
		{ &Z_Construct_UFunction_UloadplyPluginBPLibrary_LoadGaussianSplat, "LoadGaussianSplat" }, // 2902932031
		{ &Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction, "loadplyPluginSampleFunction" }, // 15196109
		{ &Z_Construct_UFunction_UloadplyPluginBPLibrary_loadplyPluginSampleFunction2, "loadplyPluginSampleFunction2" }, // 1927276247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UloadplyPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UloadplyPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UloadplyPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UloadplyPluginBPLibrary_Statics::ClassParams = {
	&UloadplyPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UloadplyPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UloadplyPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UloadplyPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UloadplyPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UloadplyPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UloadplyPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UloadplyPluginBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UloadplyPluginBPLibrary);
UloadplyPluginBPLibrary::~UloadplyPluginBPLibrary() {}
// ********** End Class UloadplyPluginBPLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h__Script_loadplyPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGaussianComponentChunkmy::StaticStruct, Z_Construct_UScriptStruct_FGaussianComponentChunkmy_Statics::NewStructOps, TEXT("GaussianComponentChunkmy"), &Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianComponentChunkmy), 4118080583U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UloadplyPluginBPLibrary, UloadplyPluginBPLibrary::StaticClass, TEXT("UloadplyPluginBPLibrary"), &Z_Registration_Info_UClass_UloadplyPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UloadplyPluginBPLibrary), 73850821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h__Script_loadplyPlugin_1595394710(TEXT("/Script/loadplyPlugin"),
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h__Script_loadplyPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h__Script_loadplyPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h__Script_loadplyPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h__Script_loadplyPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
