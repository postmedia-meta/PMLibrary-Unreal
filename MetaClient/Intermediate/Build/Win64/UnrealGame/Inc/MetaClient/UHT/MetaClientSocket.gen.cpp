// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaClient/Public/metaclient/MetaClientSocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaClientSocket() {}
// Cross Module References
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature();
	METACLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FTCPConnectionProperties();
	UPackage* Z_Construct_UPackage__Script_MetaClient();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TCPConnectionProperties;
class UScriptStruct* FTCPConnectionProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TCPConnectionProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TCPConnectionProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTCPConnectionProperties, Z_Construct_UPackage__Script_MetaClient(), TEXT("TCPConnectionProperties"));
	}
	return Z_Registration_Info_UScriptStruct_TCPConnectionProperties.OuterSingleton;
}
template<> METACLIENT_API UScriptStruct* StaticStruct<FTCPConnectionProperties>()
{
	return FTCPConnectionProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferMaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferMaxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoConnectOnBeginPlay_MetaData[];
#endif
		static void NewProp_bShouldAutoConnectOnBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoConnectOnBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveDataOnGameThread_MetaData[];
#endif
		static void NewProp_bReceiveDataOnGameThread_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveDataOnGameThread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDisconnectOnSendFailure_MetaData[];
#endif
		static void NewProp_bAutoDisconnectOnSendFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDisconnectOnSendFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReconnectOnSendFailure_MetaData[];
#endif
		static void NewProp_bAutoReconnectOnSendFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReconnectOnSendFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTCPConnectionProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionIP_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** Default sending socket IP string in form e.g. 127.0.0.1. */" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
		{ "ToolTip", "Default sending socket IP string in form e.g. 127.0.0.1." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionIP = { "ConnectionIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTCPConnectionProperties, ConnectionIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionPort_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTCPConnectionProperties, ConnectionPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ClientSocketName_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ClientSocketName = { "ClientSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTCPConnectionProperties, ClientSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ClientSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ClientSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_BufferMaxSize_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** in bytes */" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
		{ "ToolTip", "in bytes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_BufferMaxSize = { "BufferMaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTCPConnectionProperties, BufferMaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_BufferMaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_BufferMaxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bShouldAutoConnectOnBeginPlay_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** If true will auto-connect on begin play to IP/port specified as a client. */" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
		{ "ToolTip", "If true will auto-connect on begin play to IP/port specified as a client." },
	};
#endif
	void Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bShouldAutoConnectOnBeginPlay_SetBit(void* Obj)
	{
		((FTCPConnectionProperties*)Obj)->bShouldAutoConnectOnBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bShouldAutoConnectOnBeginPlay = { "bShouldAutoConnectOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTCPConnectionProperties), &Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bShouldAutoConnectOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bShouldAutoConnectOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bShouldAutoConnectOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bReceiveDataOnGameThread_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** Whether we should process our data on the game thread or the TCP thread. */" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
		{ "ToolTip", "Whether we should process our data on the game thread or the TCP thread." },
	};
#endif
	void Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bReceiveDataOnGameThread_SetBit(void* Obj)
	{
		((FTCPConnectionProperties*)Obj)->bReceiveDataOnGameThread = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bReceiveDataOnGameThread = { "bReceiveDataOnGameThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTCPConnectionProperties), &Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bReceiveDataOnGameThread_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bReceiveDataOnGameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bReceiveDataOnGameThread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoDisconnectOnSendFailure_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** When a send failure occurs, should we automatically try to disconnect? */" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
		{ "ToolTip", "When a send failure occurs, should we automatically try to disconnect?" },
	};
#endif
	void Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoDisconnectOnSendFailure_SetBit(void* Obj)
	{
		((FTCPConnectionProperties*)Obj)->bAutoDisconnectOnSendFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoDisconnectOnSendFailure = { "bAutoDisconnectOnSendFailure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTCPConnectionProperties), &Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoDisconnectOnSendFailure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoDisconnectOnSendFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoDisconnectOnSendFailure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoReconnectOnSendFailure_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** When a send failure occurs, should we automatically try to reconnect after disconnection? */" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
		{ "ToolTip", "When a send failure occurs, should we automatically try to reconnect after disconnection?" },
	};
#endif
	void Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoReconnectOnSendFailure_SetBit(void* Obj)
	{
		((FTCPConnectionProperties*)Obj)->bAutoReconnectOnSendFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoReconnectOnSendFailure = { "bAutoReconnectOnSendFailure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTCPConnectionProperties), &Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoReconnectOnSendFailure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoReconnectOnSendFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoReconnectOnSendFailure_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ConnectionPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_ClientSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_BufferMaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bShouldAutoConnectOnBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bReceiveDataOnGameThread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoDisconnectOnSendFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewProp_bAutoReconnectOnSendFailure,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetaClient,
		nullptr,
		&NewStructOps,
		"TCPConnectionProperties",
		sizeof(FTCPConnectionProperties),
		alignof(FTCPConnectionProperties),
		Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTCPConnectionProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_TCPConnectionProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TCPConnectionProperties.InnerSingleton, Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TCPConnectionProperties.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetaClient, nullptr, "TCPEventSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetaClient_TCPEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics
	{
		struct _Script_MetaClient_eventTCPMessageSignature_Parms
		{
			TArray<uint8> Bytes;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MetaClient_eventTCPMessageSignature_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetaClient, nullptr, "TCPMessageSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::_Script_MetaClient_eventTCPMessageSignature_Parms), Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetaClient_TCPMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics
	{
		struct _Script_MetaClient_eventTCPClientSignature_Parms
		{
			FString Client;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Client_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Client;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::NewProp_Client_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MetaClient_eventTCPClientSignature_Parms, Client), METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::NewProp_Client_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::NewProp_Client_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::NewProp_Client,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/metaclient/MetaClientSocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetaClient, nullptr, "TCPClientSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::_Script_MetaClient_eventTCPClientSignature_Parms), Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetaClient_TCPClientSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_Statics::ScriptStructInfo[] = {
		{ FTCPConnectionProperties::StaticStruct, Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics::NewStructOps, TEXT("TCPConnectionProperties"), &Z_Registration_Info_UScriptStruct_TCPConnectionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTCPConnectionProperties), 3478438684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_2404377328(TEXT("/Script/MetaClient"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
