// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "metaclient/MetaClientSocket.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METACLIENT_MetaClientSocket_generated_h
#error "MetaClientSocket.generated.h already included, missing '#pragma once' in MetaClientSocket.h"
#endif
#define METACLIENT_MetaClientSocket_generated_h

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTCPConnectionProperties_Statics; \
	METACLIENT_API static class UScriptStruct* StaticStruct();


template<> METACLIENT_API UScriptStruct* StaticStruct<struct FTCPConnectionProperties>();

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_43_DELEGATE \
static inline void FTCPEventSignature_DelegateWrapper(const FMulticastScriptDelegate& TCPEventSignature) \
{ \
	TCPEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_44_DELEGATE \
struct _Script_MetaClient_eventTCPMessageSignature_Parms \
{ \
	TArray<uint8> Bytes; \
}; \
static inline void FTCPMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& TCPMessageSignature, TArray<uint8> const& Bytes) \
{ \
	_Script_MetaClient_eventTCPMessageSignature_Parms Parms; \
	Parms.Bytes=Bytes; \
	TCPMessageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h_45_DELEGATE \
struct _Script_MetaClient_eventTCPClientSignature_Parms \
{ \
	FString Client; \
}; \
static inline void FTCPClientSignature_DelegateWrapper(const FMulticastScriptDelegate& TCPClientSignature, const FString& Client) \
{ \
	_Script_MetaClient_eventTCPClientSignature_Parms Parms; \
	Parms.Client=Client; \
	TCPClientSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientSocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
