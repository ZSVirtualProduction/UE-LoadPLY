// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncLoadActions.h"

#ifdef LOADPLYPLUGIN_AsyncLoadActions_generated_h
#error "AsyncLoadActions.generated.h already included, missing '#pragma once' in AsyncLoadActions.h"
#endif
#define LOADPLYPLUGIN_AsyncLoadActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncLoad3di;
class UAsyncLoadColoredPly;
class UAsyncLoadGaussianSplat;
struct F3diLoadResult;
struct FColoredPlyResult;
struct FGaussianSplatResult;

// ********** Begin ScriptStruct FGaussianSplatResult **********************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaussianSplatResult_Statics; \
	LOADPLYPLUGIN_API static class UScriptStruct* StaticStruct();


struct FGaussianSplatResult;
// ********** End ScriptStruct FGaussianSplatResult ************************************************

// ********** Begin ScriptStruct FColoredPlyResult *************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColoredPlyResult_Statics; \
	LOADPLYPLUGIN_API static class UScriptStruct* StaticStruct();


struct FColoredPlyResult;
// ********** End ScriptStruct FColoredPlyResult ***************************************************

// ********** Begin ScriptStruct F3diLoadResult ****************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_F3diLoadResult_Statics; \
	LOADPLYPLUGIN_API static class UScriptStruct* StaticStruct();


struct F3diLoadResult;
// ********** End ScriptStruct F3diLoadResult ******************************************************

// ********** Begin Delegate FOnGaussianSplatLoaded ************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_89_DELEGATE \
LOADPLYPLUGIN_API void FOnGaussianSplatLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnGaussianSplatLoaded, FGaussianSplatResult const& Result);


// ********** End Delegate FOnGaussianSplatLoaded **************************************************

// ********** Begin Delegate FOnColoredPlyLoaded ***************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_90_DELEGATE \
LOADPLYPLUGIN_API void FOnColoredPlyLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnColoredPlyLoaded, FColoredPlyResult const& Result);


// ********** End Delegate FOnColoredPlyLoaded *****************************************************

// ********** Begin Delegate FOn3diLoaded **********************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_91_DELEGATE \
LOADPLYPLUGIN_API void FOn3diLoaded_DelegateWrapper(const FMulticastScriptDelegate& On3diLoaded, F3diLoadResult const& Result);


// ********** End Delegate FOn3diLoaded ************************************************************

// ********** Begin Delegate FOnLoadFailed *********************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_92_DELEGATE \
LOADPLYPLUGIN_API void FOnLoadFailed_DelegateWrapper(const FMulticastScriptDelegate& OnLoadFailed);


// ********** End Delegate FOnLoadFailed ***********************************************************

// ********** Begin Class UAsyncLoadGaussianSplat **************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadGaussianSplatAsync);


LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadGaussianSplat_NoRegister();

#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadGaussianSplat(); \
	friend struct Z_Construct_UClass_UAsyncLoadGaussianSplat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadGaussianSplat_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLoadGaussianSplat, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/loadplyPlugin"), Z_Construct_UClass_UAsyncLoadGaussianSplat_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLoadGaussianSplat)


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncLoadGaussianSplat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLoadGaussianSplat(UAsyncLoadGaussianSplat&&) = delete; \
	UAsyncLoadGaussianSplat(const UAsyncLoadGaussianSplat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadGaussianSplat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadGaussianSplat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncLoadGaussianSplat) \
	NO_API virtual ~UAsyncLoadGaussianSplat();


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_94_PROLOG
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_97_INCLASS_NO_PURE_DECLS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLoadGaussianSplat;

// ********** End Class UAsyncLoadGaussianSplat ****************************************************

// ********** Begin Class UAsyncLoadColoredPly *****************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadColoredPlyAsync);


LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadColoredPly_NoRegister();

#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadColoredPly(); \
	friend struct Z_Construct_UClass_UAsyncLoadColoredPly_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoadColoredPly_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLoadColoredPly, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/loadplyPlugin"), Z_Construct_UClass_UAsyncLoadColoredPly_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLoadColoredPly)


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncLoadColoredPly(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLoadColoredPly(UAsyncLoadColoredPly&&) = delete; \
	UAsyncLoadColoredPly(const UAsyncLoadColoredPly&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadColoredPly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadColoredPly); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncLoadColoredPly) \
	NO_API virtual ~UAsyncLoadColoredPly();


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_115_PROLOG
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_118_INCLASS_NO_PURE_DECLS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLoadColoredPly;

// ********** End Class UAsyncLoadColoredPly *******************************************************

// ********** Begin Class UAsyncLoad3di ************************************************************
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoad3diAsync);


LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoad3di_NoRegister();

#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoad3di(); \
	friend struct Z_Construct_UClass_UAsyncLoad3di_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOADPLYPLUGIN_API UClass* Z_Construct_UClass_UAsyncLoad3di_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLoad3di, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/loadplyPlugin"), Z_Construct_UClass_UAsyncLoad3di_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLoad3di)


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncLoad3di(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLoad3di(UAsyncLoad3di&&) = delete; \
	UAsyncLoad3di(const UAsyncLoad3di&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoad3di); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoad3di); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncLoad3di) \
	NO_API virtual ~UAsyncLoad3di();


#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_136_PROLOG
#define FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_139_INCLASS_NO_PURE_DECLS \
	FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h_139_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLoad3di;

// ********** End Class UAsyncLoad3di **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_readply1_Plugins_loadplyPlugin_Source_loadplyPlugin_Public_AsyncLoadActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
