// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PMAppManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PMLIBRARY_PMAppManager_generated_h
#error "PMAppManager.generated.h already included, missing '#pragma once' in PMAppManager.h"
#endif
#define PMLIBRARY_PMAppManager_generated_h

#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProjectVersion);


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectVersion);


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_ACCESSORS
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPMAppManager(); \
	friend struct Z_Construct_UClass_UPMAppManager_Statics; \
public: \
	DECLARE_CLASS(UPMAppManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PMLibrary"), NO_API) \
	DECLARE_SERIALIZER(UPMAppManager)


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPMAppManager(); \
	friend struct Z_Construct_UClass_UPMAppManager_Statics; \
public: \
	DECLARE_CLASS(UPMAppManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PMLibrary"), NO_API) \
	DECLARE_SERIALIZER(UPMAppManager)


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMAppManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMAppManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMAppManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMAppManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMAppManager(UPMAppManager&&); \
	NO_API UPMAppManager(const UPMAppManager&); \
public: \
	NO_API virtual ~UPMAppManager();


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMAppManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMAppManager(UPMAppManager&&); \
	NO_API UPMAppManager(const UPMAppManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMAppManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMAppManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMAppManager) \
	NO_API virtual ~UPMAppManager();


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_13_PROLOG
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_INCLASS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PMLIBRARY_API UClass* StaticClass<class UPMAppManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMAppManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
