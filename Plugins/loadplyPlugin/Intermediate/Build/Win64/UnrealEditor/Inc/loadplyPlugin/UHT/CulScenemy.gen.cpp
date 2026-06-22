// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CulScenemy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCulScenemy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ALocationVolume_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulScenemy();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulScenemy_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulSceneSinglemy();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulSceneSinglemy_NoRegister();
LOADPLYPLUGIN_API UEnum* Z_Construct_UEnum_loadplyPlugin_ECulVersionmy();
LOADPLYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianComponentChunkmyy();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_loadplyPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGaussianComponentChunkmyy ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy;
class UScriptStruct* FGaussianComponentChunkmyy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianComponentChunkmyy, (UObject*)Z_Construct_UPackage__Script_loadplyPlugin(), TEXT("GaussianComponentChunkmyy"));
	}
	return Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaussianComponentChunkmyy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianComponentChunkmyy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianComponentChunkmyy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
	nullptr,
	&NewStructOps,
	"GaussianComponentChunkmyy",
	nullptr,
	0,
	sizeof(FGaussianComponentChunkmyy),
	alignof(FGaussianComponentChunkmyy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianComponentChunkmyy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaussianComponentChunkmyy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaussianComponentChunkmyy()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy.InnerSingleton, Z_Construct_UScriptStruct_FGaussianComponentChunkmyy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy.InnerSingleton;
}
// ********** End ScriptStruct FGaussianComponentChunkmyy ******************************************

// ********** Begin Class ACulScenemy **************************************************************
void ACulScenemy::StaticRegisterNativesACulScenemy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACulScenemy;
UClass* ACulScenemy::GetPrivateStaticClass()
{
	using TClass = ACulScenemy;
	if (!Z_Registration_Info_UClass_ACulScenemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CulScenemy"),
			Z_Registration_Info_UClass_ACulScenemy.InnerSingleton,
			StaticRegisterNativesACulScenemy,
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
	return Z_Registration_Info_UClass_ACulScenemy.InnerSingleton;
}
UClass* Z_Construct_UClass_ACulScenemy_NoRegister()
{
	return ACulScenemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACulScenemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "CulScenemy.h" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
		{ "PrioritizeCategories", "Cul Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropBox_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox1_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox2_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox3_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox4_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatScale_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Splat Scale" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCropBox_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Enable Crop Box" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox1_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Enable Cull Box 1" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox2_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Enable Cull Box 2" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox3_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Enable Cull Box 3" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox4_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Enable Cull Box 4" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulNiagaraSystem_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulNiagaraComponents_MetaData[] = {
		{ "Category", "Hidden" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulGaussianChunks_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Cul" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionInfo_MetaData[] = {
		{ "Category", "Cul" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CropBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplatScale;
	static void NewProp_EnableCropBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCropBox;
	static void NewProp_EnableCullBox1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox1;
	static void NewProp_EnableCullBox2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox2;
	static void NewProp_EnableCullBox3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox3;
	static void NewProp_EnableCullBox4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CulNiagaraSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CulNiagaraComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CulNiagaraComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CulGaussianChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CulGaussianChunks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Version_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VersionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACulScenemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CropBox = { "CropBox", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CropBox), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropBox_MetaData), NewProp_CropBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox1 = { "CullBox1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CullBox1), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox1_MetaData), NewProp_CullBox1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox2 = { "CullBox2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CullBox2), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox2_MetaData), NewProp_CullBox2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox3 = { "CullBox3", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CullBox3), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox3_MetaData), NewProp_CullBox3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox4 = { "CullBox4", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CullBox4), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox4_MetaData), NewProp_CullBox4_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_SplatScale = { "SplatScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, SplatScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatScale_MetaData), NewProp_SplatScale_MetaData) };
void Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCropBox_SetBit(void* Obj)
{
	((ACulScenemy*)Obj)->EnableCropBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCropBox = { "EnableCropBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulScenemy), &Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCropBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCropBox_MetaData), NewProp_EnableCropBox_MetaData) };
void Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox1_SetBit(void* Obj)
{
	((ACulScenemy*)Obj)->EnableCullBox1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox1 = { "EnableCullBox1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulScenemy), &Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox1_MetaData), NewProp_EnableCullBox1_MetaData) };
void Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox2_SetBit(void* Obj)
{
	((ACulScenemy*)Obj)->EnableCullBox2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox2 = { "EnableCullBox2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulScenemy), &Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox2_MetaData), NewProp_EnableCullBox2_MetaData) };
void Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox3_SetBit(void* Obj)
{
	((ACulScenemy*)Obj)->EnableCullBox3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox3 = { "EnableCullBox3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulScenemy), &Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox3_MetaData), NewProp_EnableCullBox3_MetaData) };
void Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox4_SetBit(void* Obj)
{
	((ACulScenemy*)Obj)->EnableCullBox4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox4 = { "EnableCullBox4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulScenemy), &Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox4_MetaData), NewProp_EnableCullBox4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulNiagaraSystem = { "CulNiagaraSystem", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CulNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulNiagaraSystem_MetaData), NewProp_CulNiagaraSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulNiagaraComponents_Inner = { "CulNiagaraComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulNiagaraComponents = { "CulNiagaraComponents", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CulNiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulNiagaraComponents_MetaData), NewProp_CulNiagaraComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulGaussianChunks_Inner = { "CulGaussianChunks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGaussianComponentChunkmyy, METADATA_PARAMS(0, nullptr) }; // 3440652940
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulGaussianChunks = { "CulGaussianChunks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, CulGaussianChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulGaussianChunks_MetaData), NewProp_CulGaussianChunks_MetaData) }; // 3440652940
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_Version_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, Version), Z_Construct_UEnum_loadplyPlugin_ECulVersionmy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 1871081878
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACulScenemy_Statics::NewProp_VersionInfo = { "VersionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulScenemy, VersionInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionInfo_MetaData), NewProp_VersionInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACulScenemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CropBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CullBox4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_SplatScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCropBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_EnableCullBox4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulNiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulNiagaraComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulNiagaraComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulGaussianChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_CulGaussianChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_Version_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulScenemy_Statics::NewProp_VersionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACulScenemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACulScenemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACulScenemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACulScenemy_Statics::ClassParams = {
	&ACulScenemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACulScenemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACulScenemy_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACulScenemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ACulScenemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACulScenemy()
{
	if (!Z_Registration_Info_UClass_ACulScenemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACulScenemy.OuterSingleton, Z_Construct_UClass_ACulScenemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACulScenemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACulScenemy);
ACulScenemy::~ACulScenemy() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ACulScenemy)
// ********** End Class ACulScenemy ****************************************************************

// ********** Begin Class ACulSceneSinglemy ********************************************************
void ACulSceneSinglemy::StaticRegisterNativesACulSceneSinglemy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACulSceneSinglemy;
UClass* ACulSceneSinglemy::GetPrivateStaticClass()
{
	using TClass = ACulSceneSinglemy;
	if (!Z_Registration_Info_UClass_ACulSceneSinglemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CulSceneSinglemy"),
			Z_Registration_Info_UClass_ACulSceneSinglemy.InnerSingleton,
			StaticRegisterNativesACulSceneSinglemy,
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
	return Z_Registration_Info_UClass_ACulSceneSinglemy.InnerSingleton;
}
UClass* Z_Construct_UClass_ACulSceneSinglemy_NoRegister()
{
	return ACulSceneSinglemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACulSceneSinglemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Hidden Hidden" },
		{ "IncludePath", "CulScenemy.h" },
		{ "ModuleRelativePath", "Public/CulScenemy.h" },
		{ "PrioritizeCategories", "Cul Transform" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACulSceneSinglemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACulSceneSinglemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACulScenemy,
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACulSceneSinglemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACulSceneSinglemy_Statics::ClassParams = {
	&ACulSceneSinglemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACulSceneSinglemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ACulSceneSinglemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACulSceneSinglemy()
{
	if (!Z_Registration_Info_UClass_ACulSceneSinglemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACulSceneSinglemy.OuterSingleton, Z_Construct_UClass_ACulSceneSinglemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACulSceneSinglemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACulSceneSinglemy);
ACulSceneSinglemy::~ACulSceneSinglemy() {}
// ********** End Class ACulSceneSinglemy **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulScenemy_h__Script_loadplyPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGaussianComponentChunkmyy::StaticStruct, Z_Construct_UScriptStruct_FGaussianComponentChunkmyy_Statics::NewStructOps, TEXT("GaussianComponentChunkmyy"), &Z_Registration_Info_UScriptStruct_FGaussianComponentChunkmyy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianComponentChunkmyy), 3440652940U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACulScenemy, ACulScenemy::StaticClass, TEXT("ACulScenemy"), &Z_Registration_Info_UClass_ACulScenemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACulScenemy), 777391318U) },
		{ Z_Construct_UClass_ACulSceneSinglemy, ACulSceneSinglemy::StaticClass, TEXT("ACulSceneSinglemy"), &Z_Registration_Info_UClass_ACulSceneSinglemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACulSceneSinglemy), 3587270078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulScenemy_h__Script_loadplyPlugin_1340283119(TEXT("/Script/loadplyPlugin"),
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulScenemy_h__Script_loadplyPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulScenemy_h__Script_loadplyPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulScenemy_h__Script_loadplyPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulScenemy_h__Script_loadplyPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
