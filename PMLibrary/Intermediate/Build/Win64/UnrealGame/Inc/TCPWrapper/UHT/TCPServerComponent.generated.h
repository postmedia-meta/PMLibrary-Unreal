// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TCPServerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCPWRAPPER_TCPServerComponent_generated_h
#error "TCPServerComponent.generated.h already included, missing '#pragma once' in TCPServerComponent.h"
#endif
#define TCPWRAPPER_TCPServerComponent_generated_h

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_8_DELEGATE \
static inline void FTCPEventSignature_DelegateWrapper(const FMulticastScriptDelegate& TCPEventSignature) \
{ \
	TCPEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_9_DELEGATE \
struct _Script_TCPWrapper_eventTCPMessageSignature_Parms \
{ \
	TArray<uint8> Bytes; \
}; \
static inline void FTCPMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& TCPMessageSignature, TArray<uint8> const& Bytes) \
{ \
	_Script_TCPWrapper_eventTCPMessageSignature_Parms Parms; \
	Parms.Bytes=Bytes; \
	TCPMessageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_10_DELEGATE \
struct _Script_TCPWrapper_eventTCPClientSignature_Parms \
{ \
	FString Client; \
}; \
static inline void FTCPClientSignature_DelegateWrapper(const FMulticastScriptDelegate& TCPClientSignature, const FString& Client) \
{ \
	_Script_TCPWrapper_eventTCPClientSignature_Parms Parms; \
	Parms.Client=Client; \
	TCPClientSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_SPARSE_DATA
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnectClient); \
	DECLARE_FUNCTION(execEmit); \
	DECLARE_FUNCTION(execStopListenServer); \
	DECLARE_FUNCTION(execStartListenServer);


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnectClient); \
	DECLARE_FUNCTION(execEmit); \
	DECLARE_FUNCTION(execStopListenServer); \
	DECLARE_FUNCTION(execStartListenServer);


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_ACCESSORS
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTCPServerComponent(); \
	friend struct Z_Construct_UClass_UTCPServerComponent_Statics; \
public: \
	DECLARE_CLASS(UTCPServerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPWrapper"), NO_API) \
	DECLARE_SERIALIZER(UTCPServerComponent)


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTCPServerComponent(); \
	friend struct Z_Construct_UClass_UTCPServerComponent_Statics; \
public: \
	DECLARE_CLASS(UTCPServerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPWrapper"), NO_API) \
	DECLARE_SERIALIZER(UTCPServerComponent)


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTCPServerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTCPServerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTCPServerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTCPServerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTCPServerComponent(UTCPServerComponent&&); \
	NO_API UTCPServerComponent(const UTCPServerComponent&); \
public: \
	NO_API virtual ~UTCPServerComponent();


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTCPServerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTCPServerComponent(UTCPServerComponent&&); \
	NO_API UTCPServerComponent(const UTCPServerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTCPServerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTCPServerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTCPServerComponent) \
	NO_API virtual ~UTCPServerComponent();


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_23_PROLOG
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_RPC_WRAPPERS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_INCLASS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TCPServerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPWRAPPER_API UClass* StaticClass<class UTCPServerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPServerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
