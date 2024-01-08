// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCPWrapper/Public/TCPServerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCPServerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TCPWRAPPER_API UClass* Z_Construct_UClass_UTCPServerComponent();
	TCPWRAPPER_API UClass* Z_Construct_UClass_UTCPServerComponent_NoRegister();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TCPWrapper();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPWrapper, nullptr, "TCPEventSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics
	{
		struct _Script_TCPWrapper_eventTCPMessageSignature_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TCPWrapper_eventTCPMessageSignature_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::NewProp_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPWrapper, nullptr, "TCPMessageSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::_Script_TCPWrapper_eventTCPMessageSignature_Parms), Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics
	{
		struct _Script_TCPWrapper_eventTCPClientSignature_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::NewProp_Client_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TCPWrapper_eventTCPClientSignature_Parms, Client), METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::NewProp_Client_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::NewProp_Client_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::NewProp_Client,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCPWrapper, nullptr, "TCPClientSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::_Script_TCPWrapper_eventTCPClientSignature_Parms), Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTCPServerComponent::execDisconnectClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientAddress);
		P_GET_UBOOL(Z_Param_bDisconnectNextTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectClient(Z_Param_ClientAddress,Z_Param_bDisconnectNextTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTCPServerComponent::execEmit)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_ToClient);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Emit(Z_Param_Out_Bytes,Z_Param_ToClient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTCPServerComponent::execStopListenServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListenServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTCPServerComponent::execStartListenServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InListenPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartListenServer(Z_Param_InListenPort);
		P_NATIVE_END;
	}
	void UTCPServerComponent::StaticRegisterNativesUTCPServerComponent()
	{
		UClass* Class = UTCPServerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnectClient", &UTCPServerComponent::execDisconnectClient },
			{ "Emit", &UTCPServerComponent::execEmit },
			{ "StartListenServer", &UTCPServerComponent::execStartListenServer },
			{ "StopListenServer", &UTCPServerComponent::execStopListenServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics
	{
		struct TCPServerComponent_eventDisconnectClient_Parms
		{
			FString ClientAddress;
			bool bDisconnectNextTick;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientAddress;
		static void NewProp_bDisconnectNextTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisconnectNextTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::NewProp_ClientAddress = { "ClientAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPServerComponent_eventDisconnectClient_Parms, ClientAddress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::NewProp_bDisconnectNextTick_SetBit(void* Obj)
	{
		((TCPServerComponent_eventDisconnectClient_Parms*)Obj)->bDisconnectNextTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::NewProp_bDisconnectNextTick = { "bDisconnectNextTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TCPServerComponent_eventDisconnectClient_Parms), &Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::NewProp_bDisconnectNextTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::NewProp_ClientAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::NewProp_bDisconnectNextTick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "Comment", "/** \n\x09* Disconnects client on the next tick\n\x09* @param ClientAddress\x09""Client Address and port, obtained from connection event or 'All' for multicast\n\x09*/" },
		{ "CPP_Default_bDisconnectNextTick", "false" },
		{ "CPP_Default_ClientAddress", "All" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Disconnects client on the next tick\n@param ClientAddress  Client Address and port, obtained from connection event or 'All' for multicast" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPServerComponent, nullptr, "DisconnectClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::TCPServerComponent_eventDisconnectClient_Parms), Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPServerComponent_DisconnectClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPServerComponent_DisconnectClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTCPServerComponent_Emit_Statics
	{
		struct TCPServerComponent_eventEmit_Parms
		{
			TArray<uint8> Bytes;
			FString ToClient;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToClient_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToClient;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPServerComponent_eventEmit_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_Bytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ToClient_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ToClient = { "ToClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPServerComponent_eventEmit_Parms, ToClient), METADATA_PARAMS(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ToClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ToClient_MetaData)) };
	void Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPServerComponent_eventEmit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TCPServerComponent_eventEmit_Parms), &Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ToClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "Comment", "/**\n\x09* Emit specified bytes to the TCP channel.\n\x09*\n\x09* @param Message\x09""Bytes\n\x09* @param ToClient\x09""Client Address and port, obtained from connection event or 'All' for multicast\n\x09*/" },
		{ "CPP_Default_ToClient", "All" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Emit specified bytes to the TCP channel.\n\n@param Message        Bytes\n@param ToClient       Client Address and port, obtained from connection event or 'All' for multicast" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPServerComponent, nullptr, "Emit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::TCPServerComponent_eventEmit_Parms), Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPServerComponent_Emit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPServerComponent_Emit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics
	{
		struct TCPServerComponent_eventStartListenServer_Parms
		{
			int32 InListenPort;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InListenPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InListenPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::NewProp_InListenPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::NewProp_InListenPort = { "InListenPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPServerComponent_eventStartListenServer_Parms, InListenPort), METADATA_PARAMS(Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::NewProp_InListenPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::NewProp_InListenPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::NewProp_InListenPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "Comment", "/** \n\x09* Start listening at given port for TCP messages. Will auto-listen on begin play by default\n\x09*/" },
		{ "CPP_Default_InListenPort", "3001" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Start listening at given port for TCP messages. Will auto-listen on begin play by default" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPServerComponent, nullptr, "StartListenServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::TCPServerComponent_eventStartListenServer_Parms), Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPServerComponent_StartListenServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPServerComponent_StartListenServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTCPServerComponent_StopListenServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPServerComponent_StopListenServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "Comment", "/**\n\x09* Close the receiving socket. This is usually automatically done on end play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Close the receiving socket. This is usually automatically done on end play." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPServerComponent_StopListenServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPServerComponent, nullptr, "StopListenServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPServerComponent_StopListenServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPServerComponent_StopListenServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPServerComponent_StopListenServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPServerComponent_StopListenServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTCPServerComponent);
	UClass* Z_Construct_UClass_UTCPServerComponent_NoRegister()
	{
		return UTCPServerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTCPServerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReceivedBytes_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceivedBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnListenBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnListenBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnListenEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnListenEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClientConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClientDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ListenPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ListenSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferMaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferMaxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoListen_MetaData[];
#endif
		static void NewProp_bShouldAutoListen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoListen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveDataOnGameThread_MetaData[];
#endif
		static void NewProp_bReceiveDataOnGameThread_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveDataOnGameThread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisconnectOnFailedEmit_MetaData[];
#endif
		static void NewProp_bDisconnectOnFailedEmit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisconnectOnFailedEmit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldPing_MetaData[];
#endif
		static void NewProp_bShouldPing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldPing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PingInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PingMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConnected_MetaData[];
#endif
		static void NewProp_bIsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTCPServerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TCPWrapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTCPServerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTCPServerComponent_DisconnectClient, "DisconnectClient" }, // 3394915552
		{ &Z_Construct_UFunction_UTCPServerComponent_Emit, "Emit" }, // 2465557768
		{ &Z_Construct_UFunction_UTCPServerComponent_StartListenServer, "StartListenServer" }, // 2242312308
		{ &Z_Construct_UFunction_UTCPServerComponent_StopListenServer, "StopListenServer" }, // 223773300
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Networking" },
		{ "IncludePath", "TCPServerComponent.h" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnReceivedBytes_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "/** On message received on the receiving socket. */" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "On message received on the receiving socket." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnReceivedBytes = { "OnReceivedBytes", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, OnReceivedBytes), Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnReceivedBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnReceivedBytes_MetaData)) }; // 3864364242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenBegin_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "/** Callback when we start listening on the TCP receive socket*/" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Callback when we start listening on the TCP receive socket" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenBegin = { "OnListenBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, OnListenBegin), Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenBegin_MetaData)) }; // 1572795701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenEnd_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "/** Called after receiving socket has been closed. */" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Called after receiving socket has been closed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenEnd = { "OnListenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, OnListenEnd), Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenEnd_MetaData)) }; // 1572795701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientConnected_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "/** Callback when we start listening on the TCP receive socket*/" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Callback when we start listening on the TCP receive socket" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientConnected = { "OnClientConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, OnClientConnected), Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientConnected_MetaData)) }; // 4212478865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientDisconnected_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "//This will only get called if an emit fails due to how FSocket works. Use custom disconnect logic if possible.\n" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "This will only get called if an emit fails due to how FSocket works. Use custom disconnect logic if possible." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientDisconnected = { "OnClientDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, OnClientDisconnected), Z_Construct_UDelegateFunction_TCPWrapper_TCPClientSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientDisconnected_MetaData)) }; // 4212478865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenPort_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** Default connection port e.g. 3001*/" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Default connection port e.g. 3001" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenPort = { "ListenPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, ListenPort), METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenSocketName_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenSocketName = { "ListenSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, ListenSocketName), METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_BufferMaxSize_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** in bytes */" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "in bytes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_BufferMaxSize = { "BufferMaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, BufferMaxSize), METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_BufferMaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_BufferMaxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldAutoListen_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** If true will auto-listen on begin play to port specified for receiving TCP messages. */" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "If true will auto-listen on begin play to port specified for receiving TCP messages." },
	};
#endif
	void Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldAutoListen_SetBit(void* Obj)
	{
		((UTCPServerComponent*)Obj)->bShouldAutoListen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldAutoListen = { "bShouldAutoListen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPServerComponent), &Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldAutoListen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldAutoListen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldAutoListen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bReceiveDataOnGameThread_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** Whether we should process our data on the game thread or the TCP thread. */" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Whether we should process our data on the game thread or the TCP thread." },
	};
#endif
	void Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bReceiveDataOnGameThread_SetBit(void* Obj)
	{
		((UTCPServerComponent*)Obj)->bReceiveDataOnGameThread = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bReceiveDataOnGameThread = { "bReceiveDataOnGameThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPServerComponent), &Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bReceiveDataOnGameThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bReceiveDataOnGameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bReceiveDataOnGameThread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bDisconnectOnFailedEmit_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** With current FSocket architecture, this is about the only way to catch a disconnection*/" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "With current FSocket architecture, this is about the only way to catch a disconnection" },
	};
#endif
	void Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bDisconnectOnFailedEmit_SetBit(void* Obj)
	{
		((UTCPServerComponent*)Obj)->bDisconnectOnFailedEmit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bDisconnectOnFailedEmit = { "bDisconnectOnFailedEmit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPServerComponent), &Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bDisconnectOnFailedEmit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bDisconnectOnFailedEmit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bDisconnectOnFailedEmit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldPing_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** Convenience ping send utility used to determine if connection disconnected. This is a custom system and not a normal ping*/" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "Convenience ping send utility used to determine if connection disconnected. This is a custom system and not a normal ping" },
	};
#endif
	void Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldPing_SetBit(void* Obj)
	{
		((UTCPServerComponent*)Obj)->bShouldPing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldPing = { "bShouldPing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPServerComponent), &Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldPing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldPing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingInterval_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** How often we should ping */" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "How often we should ping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingInterval = { "PingInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, PingInterval), METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingMessage_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** What the default ping message should be*/" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
		{ "ToolTip", "What the default ping message should be" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingMessage = { "PingMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPServerComponent, PingMessage), METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bIsConnected_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "ModuleRelativePath", "Public/TCPServerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bIsConnected_SetBit(void* Obj)
	{
		((UTCPServerComponent*)Obj)->bIsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPServerComponent), &Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bIsConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bIsConnected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTCPServerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnReceivedBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnListenEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_OnClientDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_ListenSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_BufferMaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldAutoListen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bReceiveDataOnGameThread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bDisconnectOnFailedEmit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bShouldPing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_PingMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPServerComponent_Statics::NewProp_bIsConnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTCPServerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTCPServerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTCPServerComponent_Statics::ClassParams = {
		&UTCPServerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTCPServerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTCPServerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPServerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTCPServerComponent()
	{
		if (!Z_Registration_Info_UClass_UTCPServerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTCPServerComponent.OuterSingleton, Z_Construct_UClass_UTCPServerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTCPServerComponent.OuterSingleton;
	}
	template<> TCPWRAPPER_API UClass* StaticClass<UTCPServerComponent>()
	{
		return UTCPServerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTCPServerComponent);
	UTCPServerComponent::~UTCPServerComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTCPServerComponent, UTCPServerComponent::StaticClass, TEXT("UTCPServerComponent"), &Z_Registration_Info_UClass_UTCPServerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTCPServerComponent), 533182432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_457461182(TEXT("/Script/TCPWrapper"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
