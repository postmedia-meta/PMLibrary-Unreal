// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PMLibrary/Public/PMNetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMNetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PMLIBRARY_API UClass* Z_Construct_UClass_UPMNetManager();
	PMLIBRARY_API UClass* Z_Construct_UClass_UPMNetManager_NoRegister();
	PMLIBRARY_API UEnum* Z_Construct_UEnum_PMLibrary_EHttpMethod();
	PMLIBRARY_API UFunction* Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature();
	PMLIBRARY_API UFunction* Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PMLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics
	{
		struct _Script_PMLibrary_eventOnResponse_Parms
		{
			FString Response;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PMLibrary_eventOnResponse_Parms, Response), METADATA_PARAMS(Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::NewProp_Response_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// DECLARE_DYNAMIC_DELEGATE_OneParam\x09\x09\x09// 1:1\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam\x09// 1:N\n" },
		{ "ModuleRelativePath", "Public/PMNetManager.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_DELEGATE_OneParam                       1:1\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam    1:N" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PMLibrary, nullptr, "OnResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::_Script_PMLibrary_eventOnResponse_Parms), Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics
	{
		struct _Script_PMLibrary_eventOnError_Parms
		{
			FString Status;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PMLibrary_eventOnError_Parms, Status), METADATA_PARAMS(Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::NewProp_Status_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PMNetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PMLibrary, nullptr, "OnError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::_Script_PMLibrary_eventOnError_Parms), Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpMethod;
	static UEnum* EHttpMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PMLibrary_EHttpMethod, Z_Construct_UPackage__Script_PMLibrary(), TEXT("EHttpMethod"));
		}
		return Z_Registration_Info_UEnum_EHttpMethod.OuterSingleton;
	}
	template<> PMLIBRARY_API UEnum* StaticEnum<EHttpMethod>()
	{
		return EHttpMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::Enumerators[] = {
		{ "EHttpMethod::GET", (int64)EHttpMethod::GET },
		{ "EHttpMethod::PUT", (int64)EHttpMethod::PUT },
		{ "EHttpMethod::POST", (int64)EHttpMethod::POST },
		{ "EHttpMethod::HEAD", (int64)EHttpMethod::HEAD },
		{ "EHttpMethod::DELETE", (int64)EHttpMethod::DELETE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DELETE.DisplayName", "DELETE" },
		{ "DELETE.Name", "EHttpMethod::DELETE" },
		{ "GET.DisplayName", "GET" },
		{ "GET.Name", "EHttpMethod::GET" },
		{ "HEAD.DisplayName", "HEAD" },
		{ "HEAD.Name", "EHttpMethod::HEAD" },
		{ "ModuleRelativePath", "Public/PMNetManager.h" },
		{ "POST.DisplayName", "POST" },
		{ "POST.Name", "EHttpMethod::POST" },
		{ "PUT.DisplayName", "PUT" },
		{ "PUT.Name", "EHttpMethod::PUT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PMLibrary,
		nullptr,
		"EHttpMethod",
		"EHttpMethod",
		Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PMLibrary_EHttpMethod()
	{
		if (!Z_Registration_Info_UEnum_EHttpMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpMethod.InnerSingleton, Z_Construct_UEnum_PMLibrary_EHttpMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UPMNetManager::execGetMyIpAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPMNetManager::GetMyIpAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMNetManager::execRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_ENUM(EHttpMethod,Z_Param_Method);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentString);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponse);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPMNetManager::Request(Z_Param_URL,EHttpMethod(Z_Param_Method),Z_Param_Out_Headers,Z_Param_ContentString,FOnResponse(Z_Param_Out_OnResponse),FOnError(Z_Param_Out_OnError),Z_Param_bPrintToLog);
		P_NATIVE_END;
	}
	void UPMNetManager::StaticRegisterNativesUPMNetManager()
	{
		UClass* Class = UPMNetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMyIpAddress", &UPMNetManager::execGetMyIpAddress },
			{ "Request", &UPMNetManager::execRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics
	{
		struct PMNetManager_eventGetMyIpAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMNetManager_eventGetMyIpAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostMedia" },
		{ "ModuleRelativePath", "Public/PMNetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMNetManager, nullptr, "GetMyIpAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::PMNetManager_eventGetMyIpAddress_Parms), Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMNetManager_GetMyIpAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMNetManager_GetMyIpAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMNetManager_Request_Statics
	{
		struct PMNetManager_eventRequest_Parms
		{
			FString URL;
			EHttpMethod Method;
			TMap<FString,FString> Headers;
			FString ContentString;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			bool bPrintToLog;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResponse_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMNetManager_eventRequest_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Method_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMNetManager_eventRequest_Parms, Method), Z_Construct_UEnum_PMLibrary_EHttpMethod, METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Method_MetaData)) }; // 2789558637
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMNetManager_eventRequest_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_ContentString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_ContentString = { "ContentString", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMNetManager_eventRequest_Parms, ContentString), METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_ContentString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_ContentString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMNetManager_eventRequest_Parms, OnResponse), Z_Construct_UDelegateFunction_PMLibrary_OnResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnResponse_MetaData)) }; // 3794558654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMNetManager_eventRequest_Parms, OnError), Z_Construct_UDelegateFunction_PMLibrary_OnError__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnError_MetaData)) }; // 1332573499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((PMNetManager_eventRequest_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PMNetManager_eventRequest_Parms), &Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_bPrintToLog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPMNetManager_Request_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_ContentString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_OnError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMNetManager_Request_Statics::NewProp_bPrintToLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMNetManager_Request_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "Headers, OnResponse, OnError" },
		{ "Category", "PostMedia" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "DisplayName", "PM HTTP Request" },
		{ "ModuleRelativePath", "Public/PMNetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMNetManager_Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMNetManager, nullptr, "Request", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPMNetManager_Request_Statics::PMNetManager_eventRequest_Parms), Z_Construct_UFunction_UPMNetManager_Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMNetManager_Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMNetManager_Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMNetManager_Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMNetManager_Request_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPMNetManager);
	UClass* Z_Construct_UClass_UPMNetManager_NoRegister()
	{
		return UPMNetManager::StaticClass();
	}
	struct Z_Construct_UClass_UPMNetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPMNetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PMLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPMNetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPMNetManager_GetMyIpAddress, "GetMyIpAddress" }, // 2436494817
		{ &Z_Construct_UFunction_UPMNetManager_Request, "Request" }, // 1287141435
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMNetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PMNetManager.h" },
		{ "ModuleRelativePath", "Public/PMNetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPMNetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPMNetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPMNetManager_Statics::ClassParams = {
		&UPMNetManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPMNetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPMNetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPMNetManager()
	{
		if (!Z_Registration_Info_UClass_UPMNetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPMNetManager.OuterSingleton, Z_Construct_UClass_UPMNetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPMNetManager.OuterSingleton;
	}
	template<> PMLIBRARY_API UClass* StaticClass<UPMNetManager>()
	{
		return UPMNetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPMNetManager);
	UPMNetManager::~UPMNetManager() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_Statics::EnumInfo[] = {
		{ EHttpMethod_StaticEnum, TEXT("EHttpMethod"), &Z_Registration_Info_UEnum_EHttpMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2789558637U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPMNetManager, UPMNetManager::StaticClass, TEXT("UPMNetManager"), &Z_Registration_Info_UClass_UPMNetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPMNetManager), 1426025247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_1860385578(TEXT("/Script/PMLibrary"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
