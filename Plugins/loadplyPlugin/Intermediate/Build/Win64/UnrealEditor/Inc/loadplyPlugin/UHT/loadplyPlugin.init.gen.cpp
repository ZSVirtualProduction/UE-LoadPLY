// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeloadplyPlugin_init() {}
	LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature();
	LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature();
	LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature();
	LOADPLYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_loadplyPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_loadplyPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_loadplyPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_loadplyPlugin_On3diLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_loadplyPlugin_OnColoredPlyLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_loadplyPlugin_OnGaussianSplatLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_loadplyPlugin_OnLoadFailed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/loadplyPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x77571AC8,
				0x2D882D3F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_loadplyPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_loadplyPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_loadplyPlugin(Z_Construct_UPackage__Script_loadplyPlugin, TEXT("/Script/loadplyPlugin"), Z_Registration_Info_UPackage__Script_loadplyPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x77571AC8, 0x2D882D3F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
