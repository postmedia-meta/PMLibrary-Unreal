// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TCPClientComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCPWRAPPER_TCPClientComponent_generated_h
#error "TCPClientComponent.generated.h already included, missing '#pragma once' in TCPClientComponent.h"
#endif
#define TCPWRAPPER_TCPClientComponent_generated_h

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_SPARSE_DATA
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execEmit); \
	DECLARE_FUNCTION(execCloseSocket); \
	DECLARE_FUNCTION(execConnectToSocketAsClient);


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execEmit); \
	DECLARE_FUNCTION(execCloseSocket); \
	DECLARE_FUNCTION(execConnectToSocketAsClient);


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_ACCESSORS
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTCPClientComponent(); \
	friend struct Z_Construct_UClass_UTCPClientComponent_Statics; \
public: \
	DECLARE_CLASS(UTCPClientComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPWrapper"), NO_API) \
	DECLARE_SERIALIZER(UTCPClientComponent)


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTCPClientComponent(); \
	friend struct Z_Construct_UClass_UTCPClientComponent_Statics; \
public: \
	DECLARE_CLASS(UTCPClientComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPWrapper"), NO_API) \
	DECLARE_SERIALIZER(UTCPClientComponent)


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTCPClientComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTCPClientComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTCPClientComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTCPClientComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTCPClientComponent(UTCPClientComponent&&); \
	NO_API UTCPClientComponent(const UTCPClientComponent&); \
public: \
	NO_API virtual ~UTCPClientComponent();


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTCPClientComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTCPClientComponent(UTCPClientComponent&&); \
	NO_API UTCPClientComponent(const UTCPClientComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTCPClientComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTCPClientComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTCPClientComponent) \
	NO_API virtual ~UTCPClientComponent();


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_10_PROLOG
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_RPC_WRAPPERS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_INCLASS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TCPClientComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPWRAPPER_API UClass* StaticClass<class UTCPClientComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_TCPClientComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
