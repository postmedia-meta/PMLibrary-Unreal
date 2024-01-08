// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PMLibrary/Public/PMAppManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMAppManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PMLIBRARY_API UClass* Z_Construct_UClass_UPMAppManager();
	PMLIBRARY_API UClass* Z_Construct_UClass_UPMAppManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PMLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UPMAppManager::execGetProjectVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPMAppManager::GetProjectVersion();
		P_NATIVE_END;
	}
	void UPMAppManager::StaticRegisterNativesUPMAppManager()
	{
		UClass* Class = UPMAppManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectVersion", &UPMAppManager::execGetProjectVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics
	{
		struct PMAppManager_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMAppManager_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostMedia" },
		{ "ModuleRelativePath", "Public/PMAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMAppManager, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::PMAppManager_eventGetProjectVersion_Parms), Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMAppManager_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMAppManager_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPMAppManager);
	UClass* Z_Construct_UClass_UPMAppManager_NoRegister()
	{
		return UPMAppManager::StaticClass();
	}
	struct Z_Construct_UClass_UPMAppManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPMAppManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PMLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPMAppManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPMAppManager_GetProjectVersion, "GetProjectVersion" }, // 2835864264
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMAppManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PMAppManager.h" },
		{ "ModuleRelativePath", "Public/PMAppManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPMAppManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPMAppManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPMAppManager_Statics::ClassParams = {
		&UPMAppManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPMAppManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPMAppManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPMAppManager()
	{
		if (!Z_Registration_Info_UClass_UPMAppManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPMAppManager.OuterSingleton, Z_Construct_UClass_UPMAppManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPMAppManager.OuterSingleton;
	}
	template<> PMLIBRARY_API UClass* StaticClass<UPMAppManager>()
	{
		return UPMAppManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPMAppManager);
	UPMAppManager::~UPMAppManager() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPMAppManager, UPMAppManager::StaticClass, TEXT("UPMAppManager"), &Z_Registration_Info_UClass_UPMAppManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPMAppManager), 202697345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_3220742946(TEXT("/Script/PMLibrary"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
