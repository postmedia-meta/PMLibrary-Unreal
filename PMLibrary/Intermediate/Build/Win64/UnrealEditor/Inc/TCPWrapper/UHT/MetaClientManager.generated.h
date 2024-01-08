// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaClientManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiDARMapperMessage;
struct FMetaBinaryMessage;
struct FMetaMessage;
#ifdef TCPWRAPPER_MetaClientManager_generated_h
#error "MetaClientManager.generated.h already included, missing '#pragma once' in MetaClientManager.h"
#endif
#define TCPWRAPPER_MetaClientManager_generated_h

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaMessage_Statics; \
	TCPWRAPPER_API static class UScriptStruct* StaticStruct();


template<> TCPWRAPPER_API UScriptStruct* StaticStruct<struct FMetaMessage>();

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiDARPosition_Statics; \
	TCPWRAPPER_API static class UScriptStruct* StaticStruct();


template<> TCPWRAPPER_API UScriptStruct* StaticStruct<struct FLiDARPosition>();

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiDARFrameData_Statics; \
	TCPWRAPPER_API static class UScriptStruct* StaticStruct();


template<> TCPWRAPPER_API UScriptStruct* StaticStruct<struct FLiDARFrameData>();

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics; \
	TCPWRAPPER_API static class UScriptStruct* StaticStruct();


template<> TCPWRAPPER_API UScriptStruct* StaticStruct<struct FLiDARMapperMessage>();

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics; \
	TCPWRAPPER_API static class UScriptStruct* StaticStruct();


template<> TCPWRAPPER_API UScriptStruct* StaticStruct<struct FMetaBinaryMessage>();

#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_96_DELEGATE \
struct _Script_TCPWrapper_eventOnMetaMessage_Parms \
{ \
	FMetaMessage Message; \
}; \
static inline void FOnMetaMessage_DelegateWrapper(const FMulticastScriptDelegate& OnMetaMessage, FMetaMessage const& Message) \
{ \
	_Script_TCPWrapper_eventOnMetaMessage_Parms Parms; \
	Parms.Message=Message; \
	OnMetaMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_97_DELEGATE \
struct _Script_TCPWrapper_eventOnFLiDARMapperMessage_Parms \
{ \
	FLiDARMapperMessage Message; \
}; \
static inline void FOnFLiDARMapperMessage_DelegateWrapper(const FMulticastScriptDelegate& OnFLiDARMapperMessage, FLiDARMapperMessage const& Message) \
{ \
	_Script_TCPWrapper_eventOnFLiDARMapperMessage_Parms Parms; \
	Parms.Message=Message; \
	OnFLiDARMapperMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_98_DELEGATE \
struct _Script_TCPWrapper_eventOnMetaBinaryMessage_Parms \
{ \
	FMetaBinaryMessage Message; \
}; \
static inline void FOnMetaBinaryMessage_DelegateWrapper(const FMulticastScriptDelegate& OnMetaBinaryMessage, FMetaBinaryMessage const& Message) \
{ \
	_Script_TCPWrapper_eventOnMetaBinaryMessage_Parms Parms; \
	Parms.Message=Message; \
	OnMetaBinaryMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_SPARSE_DATA
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMetaBinaryMessage); \
	DECLARE_FUNCTION(execSendMetaMessage); \
	DECLARE_FUNCTION(execResetBuffer); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execReceiveProto);


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMetaBinaryMessage); \
	DECLARE_FUNCTION(execSendMetaMessage); \
	DECLARE_FUNCTION(execResetBuffer); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execReceiveProto);


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_ACCESSORS
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaClientManager(); \
	friend struct Z_Construct_UClass_UMetaClientManager_Statics; \
public: \
	DECLARE_CLASS(UMetaClientManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPWrapper"), NO_API) \
	DECLARE_SERIALIZER(UMetaClientManager)


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUMetaClientManager(); \
	friend struct Z_Construct_UClass_UMetaClientManager_Statics; \
public: \
	DECLARE_CLASS(UMetaClientManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCPWrapper"), NO_API) \
	DECLARE_SERIALIZER(UMetaClientManager)


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaClientManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaClientManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaClientManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaClientManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaClientManager(UMetaClientManager&&); \
	NO_API UMetaClientManager(const UMetaClientManager&); \
public: \
	NO_API virtual ~UMetaClientManager();


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaClientManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaClientManager(UMetaClientManager&&); \
	NO_API UMetaClientManager(const UMetaClientManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaClientManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaClientManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaClientManager) \
	NO_API virtual ~UMetaClientManager();


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_113_PROLOG
#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_RPC_WRAPPERS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_INCLASS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPWRAPPER_API UClass* StaticClass<class UMetaClientManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PMLibrary_Source_TCPWrapper_Public_MetaClientManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
