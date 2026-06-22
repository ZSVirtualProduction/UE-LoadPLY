// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CulFieldmy.h"

#ifdef LOADPLYPLUGIN_CulFieldmy_generated_h
#error "CulFieldmy.generated.h already included, missing '#pragma once' in CulFieldmy.h"
#endif
#define LOADPLYPLUGIN_CulFieldmy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACulFieldmy **************************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_70_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACulFieldmy, NO_API)


LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulFieldmy_NoRegister();

#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACulFieldmy(); \
	friend struct Z_Construct_UClass_ACulFieldmy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOADPLYPLUGIN_API UClass* Z_Construct_UClass_ACulFieldmy_NoRegister(); \
public: \
	DECLARE_CLASS2(ACulFieldmy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/loadplyPlugin"), Z_Construct_UClass_ACulFieldmy_NoRegister) \
	DECLARE_SERIALIZER(ACulFieldmy) \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_70_ARCHIVESERIALIZER


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_70_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACulFieldmy(ACulFieldmy&&) = delete; \
	ACulFieldmy(const ACulFieldmy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACulFieldmy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACulFieldmy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACulFieldmy) \
	NO_API virtual ~ACulFieldmy();


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_67_PROLOG
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_70_INCLASS_NO_PURE_DECLS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACulFieldmy;

// ********** End Class ACulFieldmy ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_CulFieldmy_h

// ********** Begin Enum ECulVersionmy *************************************************************
#define FOREACH_ENUM_ECULVERSIONMY(op) \
	op(ECulVersionmy::V001_Initial_Release) \
	op(ECulVersionmy::V002_Added_Crop_And_Exposure_Controls) \
	op(ECulVersionmy::V003_Crop_Rotation_And_Quality_Controls) \
	op(ECulVersionmy::VersionPlusOne) \
	op(ECulVersionmy::LatestVersion) 

enum class ECulVersionmy : uint8;
template<> struct TIsUEnumClass<ECulVersionmy> { enum { Value = true }; };
template<> LOADPLYPLUGIN_API UEnum* StaticEnum<ECulVersionmy>();
// ********** End Enum ECulVersionmy ***************************************************************

// ********** Begin Enum ECulQualityModemy *********************************************************
#define FOREACH_ENUM_ECULQUALITYMODEMY(op) \
	op(ECulQualityModemy::Minimal) \
	op(ECulQualityModemy::VeryLow) \
	op(ECulQualityModemy::Low) \
	op(ECulQualityModemy::Mid) \
	op(ECulQualityModemy::High) \
	op(ECulQualityModemy::VeryHigh) \
	op(ECulQualityModemy::Extreme) 

enum class ECulQualityModemy : uint8;
template<> struct TIsUEnumClass<ECulQualityModemy> { enum { Value = true }; };
template<> LOADPLYPLUGIN_API UEnum* StaticEnum<ECulQualityModemy>();
// ********** End Enum ECulQualityModemy ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
