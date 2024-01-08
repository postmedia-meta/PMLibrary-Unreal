// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "metaclient/MetaClientManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiDARMapperMessage;
struct FMetaBinaryMessage;
struct FMetaMessage;
#ifdef METACLIENT_MetaClientManager_generated_h
#error "MetaClientManager.generated.h already included, missing '#pragma once' in MetaClientManager.h"
#endif
#define METACLIENT_MetaClientManager_generated_h

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaMessage_Statics; \
	METACLIENT_API static class UScriptStruct* StaticStruct();


template<> METACLIENT_API UScriptStruct* StaticStruct<struct FMetaMessage>();

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiDARPosition_Statics; \
	METACLIENT_API static class UScriptStruct* StaticStruct();


template<> METACLIENT_API UScriptStruct* StaticStruct<struct FLiDARPosition>();

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiDARFrameData_Statics; \
	METACLIENT_API static class UScriptStruct* StaticStruct();


template<> METACLIENT_API UScriptStruct* StaticStruct<struct FLiDARFrameData>();

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics; \
	METACLIENT_API static class UScriptStruct* StaticStruct();


template<> METACLIENT_API UScriptStruct* StaticStruct<struct FLiDARMapperMessage>();

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics; \
	METACLIENT_API static class UScriptStruct* StaticStruct();


template<> METACLIENT_API UScriptStruct* StaticStruct<struct FMetaBinaryMessage>();

#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_98_DELEGATE \
static inline void FOnEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEventSignature) \
{ \
	OnEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_99_DELEGATE \
struct _Script_MetaClient_eventOnMetaMessage_Parms \
{ \
	FMetaMessage Message; \
}; \
static inline void FOnMetaMessage_DelegateWrapper(const FMulticastScriptDelegate& OnMetaMessage, FMetaMessage const& Message) \
{ \
	_Script_MetaClient_eventOnMetaMessage_Parms Parms; \
	Parms.Message=Message; \
	OnMetaMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_100_DELEGATE \
struct _Script_MetaClient_eventOnFLiDARMapperMessage_Parms \
{ \
	FLiDARMapperMessage Message; \
}; \
static inline void FOnFLiDARMapperMessage_DelegateWrapper(const FMulticastScriptDelegate& OnFLiDARMapperMessage, FLiDARMapperMessage const& Message) \
{ \
	_Script_MetaClient_eventOnFLiDARMapperMessage_Parms Parms; \
	Parms.Message=Message; \
	OnFLiDARMapperMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_101_DELEGATE \
struct _Script_MetaClient_eventOnMetaBinaryMessage_Parms \
{ \
	FMetaBinaryMessage Message; \
}; \
static inline void FOnMetaBinaryMessage_DelegateWrapper(const FMulticastScriptDelegate& OnMetaBinaryMessage, FMetaBinaryMessage const& Message) \
{ \
	_Script_MetaClient_eventOnMetaBinaryMessage_Parms Parms; \
	Parms.Message=Message; \
	OnMetaBinaryMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_SPARSE_DATA
#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnected); \
	DECLARE_FUNCTION(execConnected); \
	DECLARE_FUNCTION(execSendMetaBinaryMessage); \
	DECLARE_FUNCTION(execSendMetaMessage); \
	DECLARE_FUNCTION(execResetBuffer); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execReceiveProto);


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnected); \
	DECLARE_FUNCTION(execConnected); \
	DECLARE_FUNCTION(execSendMetaBinaryMessage); \
	DECLARE_FUNCTION(execSendMetaMessage); \
	DECLARE_FUNCTION(execResetBuffer); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execReceiveProto);


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_ACCESSORS
#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaClientManager(); \
	friend struct Z_Construct_UClass_UMetaClientManager_Statics; \
public: \
	DECLARE_CLASS(UMetaClientManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaClient"), NO_API) \
	DECLARE_SERIALIZER(UMetaClientManager)


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUMetaClientManager(); \
	friend struct Z_Construct_UClass_UMetaClientManager_Statics; \
public: \
	DECLARE_CLASS(UMetaClientManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaClient"), NO_API) \
	DECLARE_SERIALIZER(UMetaClientManager)


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_STANDARD_CONSTRUCTORS \
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


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_ENHANCED_CONSTRUCTORS \
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


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_116_PROLOG
#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_SPARSE_DATA \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_RPC_WRAPPERS \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_ACCESSORS \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_INCLASS \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_SPARSE_DATA \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_ACCESSORS \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METACLIENT_API UClass* StaticClass<class UMetaClientManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
