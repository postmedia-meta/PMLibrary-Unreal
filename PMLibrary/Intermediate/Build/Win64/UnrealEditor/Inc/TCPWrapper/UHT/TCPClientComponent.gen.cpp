// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCPWrapper/Public/TCPClientComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCPClientComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TCPWRAPPER_API UClass* Z_Construct_UClass_UTCPClientComponent();
	TCPWRAPPER_API UClass* Z_Construct_UClass_UTCPClientComponent_NoRegister();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature();
	TCPWRAPPER_API UFunction* Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TCPWrapper();
// End Cross Module References
	DEFINE_FUNCTION(UTCPClientComponent::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTCPClientComponent::execEmit)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Emit(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTCPClientComponent::execCloseSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTCPClientComponent::execConnectToSocketAsClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToSocketAsClient(Z_Param_InIP,Z_Param_InPort);
		P_NATIVE_END;
	}
	void UTCPClientComponent::StaticRegisterNativesUTCPClientComponent()
	{
		UClass* Class = UTCPClientComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseSocket", &UTCPClientComponent::execCloseSocket },
			{ "ConnectToSocketAsClient", &UTCPClientComponent::execConnectToSocketAsClient },
			{ "Emit", &UTCPClientComponent::execEmit },
			{ "IsConnected", &UTCPClientComponent::execIsConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTCPClientComponent_CloseSocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPClientComponent_CloseSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "Comment", "/**\n\x09* Close the sending socket. This is usually automatically done on endplay.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "Close the sending socket. This is usually automatically done on endplay." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPClientComponent_CloseSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPClientComponent, nullptr, "CloseSocket", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPClientComponent_CloseSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_CloseSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPClientComponent_CloseSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPClientComponent_CloseSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics
	{
		struct TCPClientComponent_eventConnectToSocketAsClient_Parms
		{
			FString InIP;
			int32 InPort;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InIP = { "InIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPClientComponent_eventConnectToSocketAsClient_Parms, InIP), METADATA_PARAMS(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InPort = { "InPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPClientComponent_eventConnectToSocketAsClient_Parms, InPort), METADATA_PARAMS(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::NewProp_InPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "Comment", "/**\n\x09* Connect to a TCP endpoint, optional method if auto-connect is set to true.\n\x09* Emit function will then work as long the network is reachable. By default\n\x09* it will attempt this setup for this socket on beginplay.\n\x09*\n\x09* @param InIP the ip4 you wish to connect to\n\x09* @param InPort the TCP port you wish to connect to\n\x09*/" },
		{ "CPP_Default_InIP", "127.0.0.1" },
		{ "CPP_Default_InPort", "3000" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "Connect to a TCP endpoint, optional method if auto-connect is set to true.\nEmit function will then work as long the network is reachable. By default\nit will attempt this setup for this socket on beginplay.\n\n@param InIP the ip4 you wish to connect to\n@param InPort the TCP port you wish to connect to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPClientComponent, nullptr, "ConnectToSocketAsClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::TCPClientComponent_eventConnectToSocketAsClient_Parms), Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTCPClientComponent_Emit_Statics
	{
		struct TCPClientComponent_eventEmit_Parms
		{
			TArray<uint8> Bytes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPClientComponent_eventEmit_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_Bytes_MetaData)) };
	void Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPClientComponent_eventEmit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TCPClientComponent_eventEmit_Parms), &Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "Comment", "/**\n\x09* Emit specified bytes to the TCP channel.\n\x09*\n\x09* @param Message\x09""Bytes\n\x09*/" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "Emit specified bytes to the TCP channel.\n\n@param Message        Bytes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPClientComponent, nullptr, "Emit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::TCPClientComponent_eventEmit_Parms), Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPClientComponent_Emit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPClientComponent_Emit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics
	{
		struct TCPClientComponent_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TCPClientComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TCPClientComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCP Functions" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPClientComponent, nullptr, "IsConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::TCPClientComponent_eventIsConnected_Parms), Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPClientComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPClientComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTCPClientComponent);
	UClass* Z_Construct_UClass_UTCPClientComponent_NoRegister()
	{
		return UTCPClientComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTCPClientComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTCPClientComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TCPWrapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTCPClientComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTCPClientComponent_CloseSocket, "CloseSocket" }, // 110126375
		{ &Z_Construct_UFunction_UTCPClientComponent_ConnectToSocketAsClient, "ConnectToSocketAsClient" }, // 2090113049
		{ &Z_Construct_UFunction_UTCPClientComponent_Emit, "Emit" }, // 3126650335
		{ &Z_Construct_UFunction_UTCPClientComponent_IsConnected, "IsConnected" }, // 327953143
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Networking" },
		{ "IncludePath", "TCPClientComponent.h" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnReceivedBytes_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "/** On message received on the receiving socket. */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "On message received on the receiving socket." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnReceivedBytes = { "OnReceivedBytes", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPClientComponent, OnReceivedBytes), Z_Construct_UDelegateFunction_TCPWrapper_TCPMessageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnReceivedBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnReceivedBytes_MetaData)) }; // 3864364242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "/** Callback when we've connected to end point*/" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "Callback when we've connected to end point" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPClientComponent, OnConnected), Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnConnected_MetaData)) }; // 1572795701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "Category", "TCP Events" },
		{ "Comment", "/** Callback when we've disconnected from end point only captured on send failure */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "Callback when we've disconnected from end point only captured on send failure" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPClientComponent, OnDisconnected), Z_Construct_UDelegateFunction_TCPWrapper_TCPEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnDisconnected_MetaData)) }; // 1572795701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionIP_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** Default sending socket IP string in form e.g. 127.0.0.1. */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "Default sending socket IP string in form e.g. 127.0.0.1." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionIP = { "ConnectionIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPClientComponent, ConnectionIP), METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionPort_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPClientComponent, ConnectionPort), METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ClientSocketName_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ClientSocketName = { "ClientSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPClientComponent, ClientSocketName), METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ClientSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ClientSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_BufferMaxSize_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** in bytes */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "in bytes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_BufferMaxSize = { "BufferMaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPClientComponent, BufferMaxSize), METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_BufferMaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_BufferMaxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bShouldAutoConnectOnBeginPlay_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** If true will auto-connect on begin play to IP/port specified as a client. */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "If true will auto-connect on begin play to IP/port specified as a client." },
	};
#endif
	void Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bShouldAutoConnectOnBeginPlay_SetBit(void* Obj)
	{
		((UTCPClientComponent*)Obj)->bShouldAutoConnectOnBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bShouldAutoConnectOnBeginPlay = { "bShouldAutoConnectOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPClientComponent), &Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bShouldAutoConnectOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bShouldAutoConnectOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bShouldAutoConnectOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bReceiveDataOnGameThread_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** Whether we should process our data on the game thread or the TCP thread. */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "Whether we should process our data on the game thread or the TCP thread." },
	};
#endif
	void Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bReceiveDataOnGameThread_SetBit(void* Obj)
	{
		((UTCPClientComponent*)Obj)->bReceiveDataOnGameThread = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bReceiveDataOnGameThread = { "bReceiveDataOnGameThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPClientComponent), &Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bReceiveDataOnGameThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bReceiveDataOnGameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bReceiveDataOnGameThread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoDisconnectOnSendFailure_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** When a send failure occurs, should we automatically try to disconnect? */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "When a send failure occurs, should we automatically try to disconnect?" },
	};
#endif
	void Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoDisconnectOnSendFailure_SetBit(void* Obj)
	{
		((UTCPClientComponent*)Obj)->bAutoDisconnectOnSendFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoDisconnectOnSendFailure = { "bAutoDisconnectOnSendFailure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPClientComponent), &Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoDisconnectOnSendFailure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoDisconnectOnSendFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoDisconnectOnSendFailure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoReconnectOnSendFailure_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "Comment", "/** When a send failure occurs, should we automatically try to reconnect after disconnection? */" },
		{ "ModuleRelativePath", "Public/TCPClientComponent.h" },
		{ "ToolTip", "When a send failure occurs, should we automatically try to reconnect after disconnection?" },
	};
#endif
	void Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoReconnectOnSendFailure_SetBit(void* Obj)
	{
		((UTCPClientComponent*)Obj)->bAutoReconnectOnSendFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoReconnectOnSendFailure = { "bAutoReconnectOnSendFailure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTCPClientComponent), &Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoReconnectOnSendFailure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoReconnectOnSendFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoReconnectOnSendFailure_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTCPClientComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnReceivedBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_OnDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ConnectionPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_ClientSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_BufferMaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bShouldAutoConnectOnBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bReceiveDataOnGameThread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoDisconnectOnSendFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPClientComponent_Statics::NewProp_bAutoReconnectOnSendFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTCPClientComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTCPClientComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTCPClientComponent_Statics::ClassParams = {
		&UTCPClientComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTCPClientComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTCPClientComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPClientComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTCPClientComponent()
	{
		if (!Z_Registration_Info_UClass_UTCPClientComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTCPClientComponent.OuterSingleton, Z_Construct_UClass_UTCPClientComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTCPClientComponent.OuterSingleton;
	}
	template<> TCPWRAPPER_API UClass* StaticClass<UTCPClientComponent>()
	{
		return UTCPClientComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTCPClientComponent);
	UTCPClientComponent::~UTCPClientComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTCPClientComponent, UTCPClientComponent::StaticClass, TEXT("UTCPClientComponent"), &Z_Registration_Info_UClass_UTCPClientComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTCPClientComponent), 1533837725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_687410276(TEXT("/Script/TCPWrapper"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
