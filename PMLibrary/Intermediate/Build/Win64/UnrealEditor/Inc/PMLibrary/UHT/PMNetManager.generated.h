// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PMNetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EHttpMethod : uint8;
#ifdef PMLIBRARY_PMNetManager_generated_h
#error "PMNetManager.generated.h already included, missing '#pragma once' in PMNetManager.h"
#endif
#define PMLIBRARY_PMNetManager_generated_h

#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_11_DELEGATE \
struct _Script_PMLibrary_eventOnResponse_Parms \
{ \
	FString Response; \
}; \
static inline void FOnResponse_DelegateWrapper(const FScriptDelegate& OnResponse, const FString& Response) \
{ \
	_Script_PMLibrary_eventOnResponse_Parms Parms; \
	Parms.Response=Response; \
	OnResponse.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_12_DELEGATE \
struct _Script_PMLibrary_eventOnError_Parms \
{ \
	FString Status; \
}; \
static inline void FOnError_DelegateWrapper(const FScriptDelegate& OnError, const FString& Status) \
{ \
	_Script_PMLibrary_eventOnError_Parms Parms; \
	Parms.Status=Status; \
	OnError.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_SPARSE_DATA
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMyIpAddress); \
	DECLARE_FUNCTION(execRequest);


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMyIpAddress); \
	DECLARE_FUNCTION(execRequest);


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_ACCESSORS
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPMNetManager(); \
	friend struct Z_Construct_UClass_UPMNetManager_Statics; \
public: \
	DECLARE_CLASS(UPMNetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PMLibrary"), NO_API) \
	DECLARE_SERIALIZER(UPMNetManager)


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUPMNetManager(); \
	friend struct Z_Construct_UClass_UPMNetManager_Statics; \
public: \
	DECLARE_CLASS(UPMNetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PMLibrary"), NO_API) \
	DECLARE_SERIALIZER(UPMNetManager)


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMNetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMNetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMNetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMNetManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMNetManager(UPMNetManager&&); \
	NO_API UPMNetManager(const UPMNetManager&); \
public: \
	NO_API virtual ~UPMNetManager();


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMNetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMNetManager(UPMNetManager&&); \
	NO_API UPMNetManager(const UPMNetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMNetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMNetManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMNetManager) \
	NO_API virtual ~UPMNetManager();


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_28_PROLOG
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_RPC_WRAPPERS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_INCLASS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PMLIBRARY_API UClass* StaticClass<class UPMNetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMNetManager_h


#define FOREACH_ENUM_EHTTPMETHOD(op) \
	op(EHttpMethod::GET) \
	op(EHttpMethod::PUT) \
	op(EHttpMethod::POST) \
	op(EHttpMethod::HEAD) \
	op(EHttpMethod::DELETE) 

enum class EHttpMethod : uint8;
template<> struct TIsUEnumClass<EHttpMethod> { enum { Value = true }; };
template<> PMLIBRARY_API UEnum* StaticEnum<EHttpMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
