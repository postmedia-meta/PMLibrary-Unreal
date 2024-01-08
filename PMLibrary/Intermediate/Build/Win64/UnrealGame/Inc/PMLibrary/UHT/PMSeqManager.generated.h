// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PMSeqManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UPMSeqManager;
enum class EPMLogLevel : uint8;
enum class EPMSeqLogLevel : uint8;
#ifdef PMLIBRARY_PMSeqManager_generated_h
#error "PMSeqManager.generated.h already included, missing '#pragma once' in PMSeqManager.h"
#endif
#define PMLIBRARY_PMSeqManager_generated_h

#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_SPARSE_DATA
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSeqLog); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execInvalidateInstance); \
	DECLARE_FUNCTION(execGet);


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSeqLog); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execInvalidateInstance); \
	DECLARE_FUNCTION(execGet);


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_ACCESSORS
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPMSeqManager(); \
	friend struct Z_Construct_UClass_UPMSeqManager_Statics; \
public: \
	DECLARE_CLASS(UPMSeqManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PMLibrary"), NO_API) \
	DECLARE_SERIALIZER(UPMSeqManager)


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUPMSeqManager(); \
	friend struct Z_Construct_UClass_UPMSeqManager_Statics; \
public: \
	DECLARE_CLASS(UPMSeqManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PMLibrary"), NO_API) \
	DECLARE_SERIALIZER(UPMSeqManager)


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMSeqManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMSeqManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMSeqManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMSeqManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMSeqManager(UPMSeqManager&&); \
	NO_API UPMSeqManager(const UPMSeqManager&); \
public:


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMSeqManager(UPMSeqManager&&); \
	NO_API UPMSeqManager(const UPMSeqManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMSeqManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMSeqManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPMSeqManager)


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_37_PROLOG
#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_RPC_WRAPPERS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_INCLASS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_ACCESSORS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PMLIBRARY_API UClass* StaticClass<class UPMSeqManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h


#define FOREACH_ENUM_EPMLOGLEVEL(op) \
	op(EPMLogLevel::LOG) \
	op(EPMLogLevel::CHECK) \
	op(EPMLogLevel::CROSS) \
	op(EPMLogLevel::WARN) \
	op(EPMLogLevel::ERROR) 

enum class EPMLogLevel : uint8;
template<> struct TIsUEnumClass<EPMLogLevel> { enum { Value = true }; };
template<> PMLIBRARY_API UEnum* StaticEnum<EPMLogLevel>();

#define FOREACH_ENUM_EPMSEQLOGLEVEL(op) \
	op(EPMSeqLogLevel::Verbose) \
	op(EPMSeqLogLevel::Debug) \
	op(EPMSeqLogLevel::Information) \
	op(EPMSeqLogLevel::Warning) \
	op(EPMSeqLogLevel::Error) \
	op(EPMSeqLogLevel::Fatal) 

enum class EPMSeqLogLevel : uint8;
template<> struct TIsUEnumClass<EPMSeqLogLevel> { enum { Value = true }; };
template<> PMLIBRARY_API UEnum* StaticEnum<EPMSeqLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
