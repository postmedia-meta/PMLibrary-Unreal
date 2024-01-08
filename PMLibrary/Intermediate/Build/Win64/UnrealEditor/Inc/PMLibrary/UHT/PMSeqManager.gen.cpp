// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PMLibrary/Public/PMSeqManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMSeqManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PMLIBRARY_API UClass* Z_Construct_UClass_UPMSeqManager();
	PMLIBRARY_API UClass* Z_Construct_UClass_UPMSeqManager_NoRegister();
	PMLIBRARY_API UEnum* Z_Construct_UEnum_PMLibrary_EPMLogLevel();
	PMLIBRARY_API UEnum* Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel();
	UPackage* Z_Construct_UPackage__Script_PMLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPMLogLevel;
	static UEnum* EPMLogLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPMLogLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPMLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PMLibrary_EPMLogLevel, Z_Construct_UPackage__Script_PMLibrary(), TEXT("EPMLogLevel"));
		}
		return Z_Registration_Info_UEnum_EPMLogLevel.OuterSingleton;
	}
	template<> PMLIBRARY_API UEnum* StaticEnum<EPMLogLevel>()
	{
		return EPMLogLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::Enumerators[] = {
		{ "EPMLogLevel::LOG", (int64)EPMLogLevel::LOG },
		{ "EPMLogLevel::CHECK", (int64)EPMLogLevel::CHECK },
		{ "EPMLogLevel::CROSS", (int64)EPMLogLevel::CROSS },
		{ "EPMLogLevel::WARN", (int64)EPMLogLevel::WARN },
		{ "EPMLogLevel::ERROR", (int64)EPMLogLevel::ERROR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CHECK.DisplayName", "CHECK" },
		{ "CHECK.Name", "EPMLogLevel::CHECK" },
		{ "CROSS.DisplayName", "CROSS" },
		{ "CROSS.Name", "EPMLogLevel::CROSS" },
		{ "ERROR.DisplayName", "ERROR" },
		{ "ERROR.Name", "EPMLogLevel::ERROR" },
		{ "LOG.DisplayName", "LOG" },
		{ "LOG.Name", "EPMLogLevel::LOG" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
		{ "WARN.DisplayName", "WARN" },
		{ "WARN.Name", "EPMLogLevel::WARN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PMLibrary,
		nullptr,
		"EPMLogLevel",
		"EPMLogLevel",
		Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PMLibrary_EPMLogLevel()
	{
		if (!Z_Registration_Info_UEnum_EPMLogLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPMLogLevel.InnerSingleton, Z_Construct_UEnum_PMLibrary_EPMLogLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPMLogLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPMSeqLogLevel;
	static UEnum* EPMSeqLogLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPMSeqLogLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPMSeqLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel, Z_Construct_UPackage__Script_PMLibrary(), TEXT("EPMSeqLogLevel"));
		}
		return Z_Registration_Info_UEnum_EPMSeqLogLevel.OuterSingleton;
	}
	template<> PMLIBRARY_API UEnum* StaticEnum<EPMSeqLogLevel>()
	{
		return EPMSeqLogLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::Enumerators[] = {
		{ "EPMSeqLogLevel::Verbose", (int64)EPMSeqLogLevel::Verbose },
		{ "EPMSeqLogLevel::Debug", (int64)EPMSeqLogLevel::Debug },
		{ "EPMSeqLogLevel::Information", (int64)EPMSeqLogLevel::Information },
		{ "EPMSeqLogLevel::Warning", (int64)EPMSeqLogLevel::Warning },
		{ "EPMSeqLogLevel::Error", (int64)EPMSeqLogLevel::Error },
		{ "EPMSeqLogLevel::Fatal", (int64)EPMSeqLogLevel::Fatal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Debug.DisplayName", "Debug" },
		{ "Debug.Name", "EPMSeqLogLevel::Debug" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EPMSeqLogLevel::Error" },
		{ "Fatal.DisplayName", "Fatal" },
		{ "Fatal.Name", "EPMSeqLogLevel::Fatal" },
		{ "Information.DisplayName", "Information" },
		{ "Information.Name", "EPMSeqLogLevel::Information" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
		{ "Verbose.DisplayName", "Verbose" },
		{ "Verbose.Name", "EPMSeqLogLevel::Verbose" },
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EPMSeqLogLevel::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PMLibrary,
		nullptr,
		"EPMSeqLogLevel",
		"EPMSeqLogLevel",
		Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel()
	{
		if (!Z_Registration_Info_UEnum_EPMSeqLogLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPMSeqLogLevel.InnerSingleton, Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPMSeqLogLevel.InnerSingleton;
	}
	DEFINE_FUNCTION(UPMSeqManager::execSeqLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_ENUM(EPMSeqLogLevel,Z_Param_SeqLogLevel);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bSendToServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPMSeqManager::SeqLog(Z_Param_Text,EPMSeqLogLevel(Z_Param_SeqLogLevel),Z_Param_Out_Params,Z_Param_bPrintToLog,Z_Param_bPrintToScreen,Z_Param_bSendToServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMSeqManager::execLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_ENUM(EPMLogLevel,Z_Param_LogLevel);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bSendToServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPMSeqManager::Log(Z_Param_Text,EPMLogLevel(Z_Param_LogLevel),Z_Param_bPrintToScreen,Z_Param_bSendToServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMSeqManager::execInvalidateInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPMSeqManager::InvalidateInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMSeqManager::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPMSeqManager**)Z_Param__Result=UPMSeqManager::Get();
		P_NATIVE_END;
	}
	void UPMSeqManager::StaticRegisterNativesUPMSeqManager()
	{
		UClass* Class = UPMSeqManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UPMSeqManager::execGet },
			{ "InvalidateInstance", &UPMSeqManager::execInvalidateInstance },
			{ "Log", &UPMSeqManager::execLog },
			{ "SeqLog", &UPMSeqManager::execSeqLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPMSeqManager_Get_Statics
	{
		struct PMSeqManager_eventGet_Parms
		{
			UPMSeqManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPMSeqManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMSeqManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_UPMSeqManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPMSeqManager_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostMedia" },
		{ "DisplayName", "Get PMSeqManager" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMSeqManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMSeqManager, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPMSeqManager_Get_Statics::PMSeqManager_eventGet_Parms), Z_Construct_UFunction_UPMSeqManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMSeqManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMSeqManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMSeqManager_InvalidateInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_InvalidateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostMedia" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMSeqManager_InvalidateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMSeqManager, nullptr, "InvalidateInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_InvalidateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_InvalidateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMSeqManager_InvalidateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMSeqManager_InvalidateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMSeqManager_Log_Statics
	{
		struct PMSeqManager_eventLog_Parms
		{
			FString Text;
			EPMLogLevel LogLevel;
			bool bPrintToScreen;
			bool bSendToServer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogLevel;
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
		static void NewProp_bSendToServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendToServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMSeqManager_eventLog_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_LogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_LogLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_LogLevel = { "LogLevel", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMSeqManager_eventLog_Parms, LogLevel), Z_Construct_UEnum_PMLibrary_EPMLogLevel, METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_LogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_LogLevel_MetaData)) }; // 225034473
	void Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((PMSeqManager_eventLog_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PMSeqManager_eventLog_Parms), &Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bSendToServer_SetBit(void* Obj)
	{
		((PMSeqManager_eventLog_Parms*)Obj)->bSendToServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bSendToServer = { "bSendToServer", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PMSeqManager_eventLog_Parms), &Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bSendToServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPMSeqManager_Log_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_LogLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_LogLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_Log_Statics::NewProp_bSendToServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_Log_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "PostMedia" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_bSendToServer", "false" },
		{ "DisplayName", "PM Log" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMSeqManager_Log_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMSeqManager, nullptr, "Log", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPMSeqManager_Log_Statics::PMSeqManager_eventLog_Parms), Z_Construct_UFunction_UPMSeqManager_Log_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_Log_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_Log_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_Log_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMSeqManager_Log()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMSeqManager_Log_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics
	{
		struct PMSeqManager_eventSeqLog_Parms
		{
			FString Text;
			EPMSeqLogLevel SeqLogLevel;
			TMap<FString,FString> Params;
			bool bPrintToLog;
			bool bPrintToScreen;
			bool bSendToServer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SeqLogLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeqLogLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SeqLogLevel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
		static void NewProp_bSendToServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendToServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMSeqManager_eventSeqLog_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_SeqLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_SeqLogLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_SeqLogLevel = { "SeqLogLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMSeqManager_eventSeqLog_Parms, SeqLogLevel), Z_Construct_UEnum_PMLibrary_EPMSeqLogLevel, METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_SeqLogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_SeqLogLevel_MetaData)) }; // 2059930451
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PMSeqManager_eventSeqLog_Parms, Params), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params_MetaData)) };
	void Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((PMSeqManager_eventSeqLog_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PMSeqManager_eventSeqLog_Parms), &Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((PMSeqManager_eventSeqLog_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PMSeqManager_eventSeqLog_Parms), &Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bSendToServer_SetBit(void* Obj)
	{
		((PMSeqManager_eventSeqLog_Parms*)Obj)->bSendToServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bSendToServer = { "bSendToServer", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PMSeqManager_eventSeqLog_Parms), &Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bSendToServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_SeqLogLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_SeqLogLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::NewProp_bSendToServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "Params" },
		{ "Category", "PostMedia" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_bSendToServer", "true" },
		{ "DisplayName", "PM Seq Log" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMSeqManager, nullptr, "SeqLog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::PMSeqManager_eventSeqLog_Parms), Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMSeqManager_SeqLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMSeqManager_SeqLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPMSeqManager);
	UClass* Z_Construct_UClass_UPMSeqManager_NoRegister()
	{
		return UPMSeqManager::StaticClass();
	}
	struct Z_Construct_UClass_UPMSeqManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPMSeqManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PMLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPMSeqManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPMSeqManager_Get, "Get" }, // 1828509392
		{ &Z_Construct_UFunction_UPMSeqManager_InvalidateInstance, "InvalidateInstance" }, // 2399863797
		{ &Z_Construct_UFunction_UPMSeqManager_Log, "Log" }, // 3503184064
		{ &Z_Construct_UFunction_UPMSeqManager_SeqLog, "SeqLog" }, // 3902746542
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMSeqManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PMSeqManager.h" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMSeqManager_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPMSeqManager_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPMSeqManager, Host), METADATA_PARAMS(Z_Construct_UClass_UPMSeqManager_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMSeqManager_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMSeqManager_Statics::NewProp_ApiKey_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/PMSeqManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPMSeqManager_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPMSeqManager, ApiKey), METADATA_PARAMS(Z_Construct_UClass_UPMSeqManager_Statics::NewProp_ApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMSeqManager_Statics::NewProp_ApiKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPMSeqManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMSeqManager_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMSeqManager_Statics::NewProp_ApiKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPMSeqManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPMSeqManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPMSeqManager_Statics::ClassParams = {
		&UPMSeqManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPMSeqManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPMSeqManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPMSeqManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPMSeqManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPMSeqManager()
	{
		if (!Z_Registration_Info_UClass_UPMSeqManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPMSeqManager.OuterSingleton, Z_Construct_UClass_UPMSeqManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPMSeqManager.OuterSingleton;
	}
	template<> PMLIBRARY_API UClass* StaticClass<UPMSeqManager>()
	{
		return UPMSeqManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPMSeqManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_Statics::EnumInfo[] = {
		{ EPMLogLevel_StaticEnum, TEXT("EPMLogLevel"), &Z_Registration_Info_UEnum_EPMLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 225034473U) },
		{ EPMSeqLogLevel_StaticEnum, TEXT("EPMSeqLogLevel"), &Z_Registration_Info_UEnum_EPMSeqLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2059930451U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPMSeqManager, UPMSeqManager::StaticClass, TEXT("UPMSeqManager"), &Z_Registration_Info_UClass_UPMSeqManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPMSeqManager), 422634288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_403611732(TEXT("/Script/PMLibrary"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PMLibrary_Source_PMLibrary_Public_PMSeqManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
