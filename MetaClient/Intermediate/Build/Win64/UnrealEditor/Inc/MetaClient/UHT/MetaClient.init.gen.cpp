// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaClient_init() {}
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MetaClient;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MetaClient()
	{
		if (!Z_Registration_Info_UPackage__Script_MetaClient.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MetaClient",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDFA9D132,
				0xCBC3AA43,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MetaClient.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MetaClient.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MetaClient(Z_Construct_UPackage__Script_MetaClient, TEXT("/Script/MetaClient"), Z_Registration_Info_UPackage__Script_MetaClient, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDFA9D132, 0xCBC3AA43));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
