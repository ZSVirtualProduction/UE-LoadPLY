// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CulFieldmy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCulFieldmy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3d();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulFieldmy();
LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulFieldmy_NoRegister();
LOADPLYPLUGIN_API UEnum* Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy();
LOADPLYPLUGIN_API UEnum* Z_Construct_UEnum_loadplyPlugin_ECulVersionmy();
UPackage* Z_Construct_UPackage__Script_loadplyPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECulVersionmy *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECulVersionmy;
static UEnum* ECulVersionmy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECulVersionmy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECulVersionmy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_loadplyPlugin_ECulVersionmy, (UObject*)Z_Construct_UPackage__Script_loadplyPlugin(), TEXT("ECulVersionmy"));
	}
	return Z_Registration_Info_UEnum_ECulVersionmy.OuterSingleton;
}
template<> LOADPLYPLUGIN_API UEnum* StaticEnum<ECulVersionmy>()
{
	return ECulVersionmy_StaticEnum();
}
struct Z_Construct_UEnum_loadplyPlugin_ECulVersionmy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LatestVersion.Name", "ECulVersionmy::LatestVersion" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
		{ "V001_Initial_Release.Comment", "// Before any version changes were made in the plugin\n" },
		{ "V001_Initial_Release.Name", "ECulVersionmy::V001_Initial_Release" },
		{ "V001_Initial_Release.ToolTip", "Before any version changes were made in the plugin" },
		{ "V002_Added_Crop_And_Exposure_Controls.Name", "ECulVersionmy::V002_Added_Crop_And_Exposure_Controls" },
		{ "V003_Crop_Rotation_And_Quality_Controls.Name", "ECulVersionmy::V003_Crop_Rotation_And_Quality_Controls" },
		{ "VersionPlusOne.Comment", "// -----<new versions can be added above this line>-------------------------------------------------\n// Add a new version if anything important changes in the Blueprint that might require users to update.\n" },
		{ "VersionPlusOne.Name", "ECulVersionmy::VersionPlusOne" },
		{ "VersionPlusOne.ToolTip", "-----<new versions can be added above this line>-------------------------------------------------\nAdd a new version if anything important changes in the Blueprint that might require users to update." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECulVersionmy::V001_Initial_Release", (int64)ECulVersionmy::V001_Initial_Release },
		{ "ECulVersionmy::V002_Added_Crop_And_Exposure_Controls", (int64)ECulVersionmy::V002_Added_Crop_And_Exposure_Controls },
		{ "ECulVersionmy::V003_Crop_Rotation_And_Quality_Controls", (int64)ECulVersionmy::V003_Crop_Rotation_And_Quality_Controls },
		{ "ECulVersionmy::VersionPlusOne", (int64)ECulVersionmy::VersionPlusOne },
		{ "ECulVersionmy::LatestVersion", (int64)ECulVersionmy::LatestVersion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_loadplyPlugin_ECulVersionmy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_loadplyPlugin,
	nullptr,
	"ECulVersionmy",
	"ECulVersionmy",
	Z_Construct_UEnum_loadplyPlugin_ECulVersionmy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_loadplyPlugin_ECulVersionmy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_loadplyPlugin_ECulVersionmy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_loadplyPlugin_ECulVersionmy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_loadplyPlugin_ECulVersionmy()
{
	if (!Z_Registration_Info_UEnum_ECulVersionmy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECulVersionmy.InnerSingleton, Z_Construct_UEnum_loadplyPlugin_ECulVersionmy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECulVersionmy.InnerSingleton;
}
// ********** End Enum ECulVersionmy ***************************************************************

// ********** Begin Enum ECulQualityModemy *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECulQualityModemy;
static UEnum* ECulQualityModemy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECulQualityModemy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECulQualityModemy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy, (UObject*)Z_Construct_UPackage__Script_loadplyPlugin(), TEXT("ECulQualityModemy"));
	}
	return Z_Registration_Info_UEnum_ECulQualityModemy.OuterSingleton;
}
template<> LOADPLYPLUGIN_API UEnum* StaticEnum<ECulQualityModemy>()
{
	return ECulQualityModemy_StaticEnum();
}
struct Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Extreme.Name", "ECulQualityModemy::Extreme" },
		{ "High.Name", "ECulQualityModemy::High" },
		{ "Low.Name", "ECulQualityModemy::Low" },
		{ "Mid.Name", "ECulQualityModemy::Mid" },
		{ "Minimal.Name", "ECulQualityModemy::Minimal" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
		{ "VeryHigh.Name", "ECulQualityModemy::VeryHigh" },
		{ "VeryLow.Name", "ECulQualityModemy::VeryLow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECulQualityModemy::Minimal", (int64)ECulQualityModemy::Minimal },
		{ "ECulQualityModemy::VeryLow", (int64)ECulQualityModemy::VeryLow },
		{ "ECulQualityModemy::Low", (int64)ECulQualityModemy::Low },
		{ "ECulQualityModemy::Mid", (int64)ECulQualityModemy::Mid },
		{ "ECulQualityModemy::High", (int64)ECulQualityModemy::High },
		{ "ECulQualityModemy::VeryHigh", (int64)ECulQualityModemy::VeryHigh },
		{ "ECulQualityModemy::Extreme", (int64)ECulQualityModemy::Extreme },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_loadplyPlugin,
	nullptr,
	"ECulQualityModemy",
	"ECulQualityModemy",
	Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy()
{
	if (!Z_Registration_Info_UEnum_ECulQualityModemy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECulQualityModemy.InnerSingleton, Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECulQualityModemy.InnerSingleton;
}
// ********** End Enum ECulQualityModemy ***********************************************************

// ********** Begin Class ACulFieldmy **************************************************************
void ACulFieldmy::StaticRegisterNativesACulFieldmy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACulFieldmy;
UClass* ACulFieldmy::GetPrivateStaticClass()
{
	using TClass = ACulFieldmy;
	if (!Z_Registration_Info_UClass_ACulFieldmy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CulFieldmy"),
			Z_Registration_Info_UClass_ACulFieldmy.InnerSingleton,
			StaticRegisterNativesACulFieldmy,
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
	return Z_Registration_Info_UClass_ACulFieldmy.InnerSingleton;
}
UClass* Z_Construct_UClass_ACulFieldmy_NoRegister()
{
	return ACulFieldmy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACulFieldmy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "CulFieldmy.h" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
		{ "PrioritizeCategories", "Cul Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Hidden" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulMaterialInstance_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulBaseMaterial_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropMin_MetaData[] = {
		{ "Category", "Cul" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Crop bounding box minimum. -2.0 extends towards the full range of the NeRF, -1.0 extends as far as the Blueprint size. */" },
#endif
		{ "DisplayName", "Crop Bounding Box Minimum" },
		{ "EditCondition", "HasCropSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crop bounding box minimum. -2.0 extends towards the full range of the NeRF, -1.0 extends as far as the Blueprint size." },
#endif
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropMax_MetaData[] = {
		{ "Category", "Cul" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Crop bounding box maximum. 2.0 extends towards the full range of the NeRF, 1.0 extends as far as the Blueprint size. */" },
#endif
		{ "DisplayName", "Crop Bounding Box Maximum" },
		{ "EditCondition", "HasCropSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crop bounding box maximum. 2.0 extends towards the full range of the NeRF, 1.0 extends as far as the Blueprint size." },
#endif
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropCenter_MetaData[] = {
		{ "Category", "Cul" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "DisplayName", "Crop Bounding Center" },
		{ "EditCondition", "HasCropRotationSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropRotation_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Crop Rotation" },
		{ "EditCondition", "HasCropRotationSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exposure_MetaData[] = {
		{ "Category", "Cul" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exposure controls for this NeRF instance. Default is 1.0, 1.0, 1.0. */" },
#endif
		{ "DisplayName", "Exposure" },
		{ "EditCondition", "HasExposureSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposure controls for this NeRF instance. Default is 1.0, 1.0, 1.0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityMode_MetaData[] = {
		{ "Category", "Cul" },
		{ "DisplayName", "Quality" },
		{ "EditCondition", "HasQualitySupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoaderFlagsSet_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasCropSupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasExposureSupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasQualitySupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasCropRotationSupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Cul" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionInfo_MetaData[] = {
		{ "Category", "Cul" },
		{ "ModuleRelativePath", "Public/CulFieldmy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CulMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CulBaseMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CropMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CropMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CropCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CropRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Exposure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QualityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
	static void NewProp_LoaderFlagsSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoaderFlagsSet;
	static void NewProp_HasCropSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasCropSupport;
	static void NewProp_HasExposureSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasExposureSupport;
	static void NewProp_HasQualitySupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasQualitySupport;
	static void NewProp_HasCropRotationSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasCropRotationSupport;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Version_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VersionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACulFieldmy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CulMaterialInstance = { "CulMaterialInstance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, CulMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulMaterialInstance_MetaData), NewProp_CulMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CulBaseMaterial = { "CulBaseMaterial", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, CulBaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulBaseMaterial_MetaData), NewProp_CulBaseMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropMin = { "CropMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, CropMin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropMin_MetaData), NewProp_CropMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropMax = { "CropMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, CropMax), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropMax_MetaData), NewProp_CropMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropCenter = { "CropCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, CropCenter), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropCenter_MetaData), NewProp_CropCenter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropRotation = { "CropRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, CropRotation), Z_Construct_UScriptStruct_FRotator3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropRotation_MetaData), NewProp_CropRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_Exposure = { "Exposure", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, Exposure), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exposure_MetaData), NewProp_Exposure_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, QualityMode), Z_Construct_UEnum_loadplyPlugin_ECulQualityModemy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityMode_MetaData), NewProp_QualityMode_MetaData) }; // 4021181389
void Z_Construct_UClass_ACulFieldmy_Statics::NewProp_LoaderFlagsSet_SetBit(void* Obj)
{
	((ACulFieldmy*)Obj)->LoaderFlagsSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_LoaderFlagsSet = { "LoaderFlagsSet", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulFieldmy), &Z_Construct_UClass_ACulFieldmy_Statics::NewProp_LoaderFlagsSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoaderFlagsSet_MetaData), NewProp_LoaderFlagsSet_MetaData) };
void Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropSupport_SetBit(void* Obj)
{
	((ACulFieldmy*)Obj)->HasCropSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropSupport = { "HasCropSupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulFieldmy), &Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasCropSupport_MetaData), NewProp_HasCropSupport_MetaData) };
void Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasExposureSupport_SetBit(void* Obj)
{
	((ACulFieldmy*)Obj)->HasExposureSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasExposureSupport = { "HasExposureSupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulFieldmy), &Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasExposureSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasExposureSupport_MetaData), NewProp_HasExposureSupport_MetaData) };
void Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasQualitySupport_SetBit(void* Obj)
{
	((ACulFieldmy*)Obj)->HasQualitySupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasQualitySupport = { "HasQualitySupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulFieldmy), &Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasQualitySupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasQualitySupport_MetaData), NewProp_HasQualitySupport_MetaData) };
void Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropRotationSupport_SetBit(void* Obj)
{
	((ACulFieldmy*)Obj)->HasCropRotationSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropRotationSupport = { "HasCropRotationSupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACulFieldmy), &Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropRotationSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasCropRotationSupport_MetaData), NewProp_HasCropRotationSupport_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_Version_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, Version), Z_Construct_UEnum_loadplyPlugin_ECulVersionmy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 1871081878
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACulFieldmy_Statics::NewProp_VersionInfo = { "VersionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACulFieldmy, VersionInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionInfo_MetaData), NewProp_VersionInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACulFieldmy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CulMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CulBaseMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_CropRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_Exposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_QualityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_QualityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_LoaderFlagsSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasExposureSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasQualitySupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_HasCropRotationSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_Version_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACulFieldmy_Statics::NewProp_VersionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACulFieldmy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACulFieldmy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_loadplyPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACulFieldmy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACulFieldmy_Statics::ClassParams = {
	&ACulFieldmy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACulFieldmy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACulFieldmy_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACulFieldmy_Statics::Class_MetaDataParams), Z_Construct_UClass_ACulFieldmy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACulFieldmy()
{
	if (!Z_Registration_Info_UClass_ACulFieldmy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACulFieldmy.OuterSingleton, Z_Construct_UClass_ACulFieldmy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACulFieldmy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACulFieldmy);
ACulFieldmy::~ACulFieldmy() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ACulFieldmy)
// ********** End Class ACulFieldmy ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h__Script_loadplyPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECulVersionmy_StaticEnum, TEXT("ECulVersionmy"), &Z_Registration_Info_UEnum_ECulVersionmy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1871081878U) },
		{ ECulQualityModemy_StaticEnum, TEXT("ECulQualityModemy"), &Z_Registration_Info_UEnum_ECulQualityModemy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4021181389U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACulFieldmy, ACulFieldmy::StaticClass, TEXT("ACulFieldmy"), &Z_Registration_Info_UClass_ACulFieldmy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACulFieldmy), 309340236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h__Script_loadplyPlugin_1304304183(TEXT("/Script/loadplyPlugin"),
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h__Script_loadplyPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h__Script_loadplyPlugin_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h__Script_loadplyPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h__Script_loadplyPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
