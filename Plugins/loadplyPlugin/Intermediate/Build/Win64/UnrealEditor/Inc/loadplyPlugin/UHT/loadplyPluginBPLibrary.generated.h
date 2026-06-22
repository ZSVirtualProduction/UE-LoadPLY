// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "loadplyPluginBPLibrary.h"

#ifdef LOADPLYPLUGIN_loadplyPluginBPLibrary_generated_h
#error "loadplyPluginBPLibrary.generated.h already included, missing '#pragma once' in loadplyPluginBPLibrary.h"
#endif
#define LOADPLYPLUGIN_loadplyPluginBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACulScenemy;
class UTexture2D;

// ********** Begin ScriptStruct FGaussianComponentChunkmy *****************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaussianComponentChunkmy_Statics; \
	LOADPLYPLUGIN_API static class UScriptStruct* StaticStruct();


struct FGaussianComponentChunkmy;
// ********** End ScriptStruct FGaussianComponentChunkmy *******************************************

// ********** Begin Class UloadplyPluginBPLibrary **************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_89_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLoadColoredPly); \
	DECLARE_FUNCTION(execLoadGaussianSplat); \
	DECLARE_FUNCTION(execloadplyPluginSampleFunction2); \
	DECLARE_FUNCTION(execloadplyPluginSampleFunction);


LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UloadplyPluginBPLibrary_NoRegister();

#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUloadplyPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UloadplyPluginBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UloadplyPluginBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UloadplyPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/loadplyPlugin"), Z_Construct_UClass_UloadplyPluginBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UloadplyPluginBPLibrary)


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UloadplyPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UloadplyPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UloadplyPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UloadplyPluginBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UloadplyPluginBPLibrary(UloadplyPluginBPLibrary&&) = delete; \
	UloadplyPluginBPLibrary(const UloadplyPluginBPLibrary&) = delete; \
	NO_API virtual ~UloadplyPluginBPLibrary();


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_86_PROLOG
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_89_RPC_WRAPPERS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_89_INCLASS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UloadplyPluginBPLibrary;

// ********** End Class UloadplyPluginBPLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_loadplyPluginBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
