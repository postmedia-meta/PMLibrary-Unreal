// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCPWrapper_init() {}
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_OnFLiDARMapperMessage__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_OnMetaBinaryMessage__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_OnMetaMessage__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TCPWrapper;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TCPWrapper()
	{
		if (!Z_Registration_Info_UPackage__Script_TCPWrapper.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TCPWrapper_OnFLiDARMapperMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TCPWrapper_OnMetaBinaryMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TCPWrapper_OnMetaMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TCPWrapper",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2C0B1759,
				0x2848E36F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TCPWrapper.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TCPWrapper.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TCPWrapper(Z_Construct_UPackage__Script_TCPWrapper, TEXT("/Script/TCPWrapper"), Z_Registration_Info_UPackage__Script_TCPWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2C0B1759, 0x2848E36F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
