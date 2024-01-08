// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaClient/Public/metaclient/MetaClientManager.h"
#include "MetaClient/Public/metaclient/MetaClientSocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaClientManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	METACLIENT_API UClass* Z_Construct_UClass_UMetaClientManager();
	METACLIENT_API UClass* Z_Construct_UClass_UMetaClientManager_NoRegister();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature();
	METACLIENT_API UFunction* Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature();
	METACLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FLiDARFrameData();
	METACLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FLiDARMapperMessage();
	METACLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FLiDARPosition();
	METACLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FMetaBinaryMessage();
	METACLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FMetaMessage();
	METACLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FTCPConnectionProperties();
	UPackage* Z_Construct_UPackage__Script_MetaClient();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaMessage;
class UScriptStruct* FMetaMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaMessage, Z_Construct_UPackage__Script_MetaClient(), TEXT("MetaMessage"));
	}
	return Z_Registration_Info_UScriptStruct_MetaMessage.OuterSingleton;
}
template<> METACLIENT_API UScriptStruct* StaticStruct<FMetaMessage>()
{
	return FMetaMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetaMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetaMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetaMessage, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Number_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetaMessage, Number), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Number_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetaMessage, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaMessage_Statics::NewProp_Text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetaClient,
		nullptr,
		&NewStructOps,
		"MetaMessage",
		sizeof(FMetaMessage),
		alignof(FMetaMessage),
		Z_Construct_UScriptStruct_FMetaMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetaMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_MetaMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaMessage.InnerSingleton, Z_Construct_UScriptStruct_FMetaMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetaMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiDARPosition;
class UScriptStruct* FLiDARPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiDARPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiDARPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiDARPosition, Z_Construct_UPackage__Script_MetaClient(), TEXT("LiDARPosition"));
	}
	return Z_Registration_Info_UScriptStruct_LiDARPosition.OuterSingleton;
}
template<> METACLIENT_API UScriptStruct* StaticStruct<FLiDARPosition>()
{
	return FLiDARPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiDARPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_idx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_idx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originPercentX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_originPercentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originPercentY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_originPercentY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_percentX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_percentY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiDARPosition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_idx_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARPosition, idx), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_idx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_idx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARPosition, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARPosition, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentX_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentX = { "originPercentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARPosition, originPercentX), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentY_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentY = { "originPercentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARPosition, originPercentY), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentX_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentX = { "percentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARPosition, percentX), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentY_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentY = { "percentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARPosition, percentY), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiDARPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_idx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_originPercentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewProp_percentY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiDARPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetaClient,
		nullptr,
		&NewStructOps,
		"LiDARPosition",
		sizeof(FLiDARPosition),
		alignof(FLiDARPosition),
		Z_Construct_UScriptStruct_FLiDARPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiDARPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_LiDARPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiDARPosition.InnerSingleton, Z_Construct_UScriptStruct_FLiDARPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiDARPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiDARFrameData;
class UScriptStruct* FLiDARFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiDARFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiDARFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiDARFrameData, Z_Construct_UPackage__Script_MetaClient(), TEXT("LiDARFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiDARFrameData.OuterSingleton;
}
template<> METACLIENT_API UScriptStruct* StaticStruct<FLiDARFrameData>()
{
	return FLiDARFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiDARFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_screen_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_screen;
		static const UECodeGen_Private::FStructPropertyParams NewProp_newTouches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newTouches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newTouches;
		static const UECodeGen_Private::FStructPropertyParams NewProp_removeTouches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_removeTouches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_removeTouches;
		static const UECodeGen_Private::FStructPropertyParams NewProp_updateTouches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updateTouches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_updateTouches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiDARFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_screen_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_screen = { "screen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARFrameData, screen), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_screen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_screen_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_newTouches_Inner = { "newTouches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiDARPosition, METADATA_PARAMS(nullptr, 0) }; // 3214504470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_newTouches_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_newTouches = { "newTouches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARFrameData, newTouches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_newTouches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_newTouches_MetaData)) }; // 3214504470
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_removeTouches_Inner = { "removeTouches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiDARPosition, METADATA_PARAMS(nullptr, 0) }; // 3214504470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_removeTouches_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_removeTouches = { "removeTouches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARFrameData, removeTouches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_removeTouches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_removeTouches_MetaData)) }; // 3214504470
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_updateTouches_Inner = { "updateTouches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiDARPosition, METADATA_PARAMS(nullptr, 0) }; // 3214504470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_updateTouches_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_updateTouches = { "updateTouches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARFrameData, updateTouches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_updateTouches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_updateTouches_MetaData)) }; // 3214504470
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiDARFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_screen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_newTouches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_newTouches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_removeTouches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_removeTouches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_updateTouches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewProp_updateTouches,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiDARFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetaClient,
		nullptr,
		&NewStructOps,
		"LiDARFrameData",
		sizeof(FLiDARFrameData),
		alignof(FLiDARFrameData),
		Z_Construct_UScriptStruct_FLiDARFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiDARFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiDARFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiDARFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiDARFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiDARFrameData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiDARMapperMessage;
class UScriptStruct* FLiDARMapperMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiDARMapperMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiDARMapperMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiDARMapperMessage, Z_Construct_UPackage__Script_MetaClient(), TEXT("LiDARMapperMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiDARMapperMessage.OuterSingleton;
}
template<> METACLIENT_API UScriptStruct* StaticStruct<FLiDARMapperMessage>()
{
	return FLiDARMapperMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_body;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiDARMapperMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiDARMapperMessage, body), Z_Construct_UScriptStruct_FLiDARFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::NewProp_body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::NewProp_body_MetaData)) }; // 2503120625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::NewProp_body,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetaClient,
		nullptr,
		&NewStructOps,
		"LiDARMapperMessage",
		sizeof(FLiDARMapperMessage),
		alignof(FLiDARMapperMessage),
		Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiDARMapperMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LiDARMapperMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiDARMapperMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiDARMapperMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaBinaryMessage;
class UScriptStruct* FMetaBinaryMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaBinaryMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaBinaryMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaBinaryMessage, Z_Construct_UPackage__Script_MetaClient(), TEXT("MetaBinaryMessage"));
	}
	return Z_Registration_Info_UScriptStruct_MetaBinaryMessage.OuterSingleton;
}
template<> METACLIENT_API UScriptStruct* StaticStruct<FMetaBinaryMessage>()
{
	return FMetaBinaryMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaBinaryMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetaBinaryMessage, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Buffer_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetaBinaryMessage, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Buffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetaBinaryMessage, Info), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Info_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewProp_Info,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetaClient,
		nullptr,
		&NewStructOps,
		"MetaBinaryMessage",
		sizeof(FMetaBinaryMessage),
		alignof(FMetaBinaryMessage),
		Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetaBinaryMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_MetaBinaryMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaBinaryMessage.InnerSingleton, Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetaBinaryMessage.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// DECLARE_DYNAMIC_DELEGATE_OneParam\x09\x09\x09// 1:1\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam\x09// 1:N\n" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_DELEGATE_OneParam                       1:1\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam    1:N" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetaClient, nullptr, "OnEventSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics
	{
		struct _Script_MetaClient_eventOnMetaMessage_Parms
		{
			FMetaMessage Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MetaClient_eventOnMetaMessage_Parms, Message), Z_Construct_UScriptStruct_FMetaMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 1452507640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetaClient, nullptr, "OnMetaMessage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::_Script_MetaClient_eventOnMetaMessage_Parms), Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics
	{
		struct _Script_MetaClient_eventOnFLiDARMapperMessage_Parms
		{
			FLiDARMapperMessage Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MetaClient_eventOnFLiDARMapperMessage_Parms, Message), Z_Construct_UScriptStruct_FLiDARMapperMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 1414304558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetaClient, nullptr, "OnFLiDARMapperMessage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::_Script_MetaClient_eventOnFLiDARMapperMessage_Parms), Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics
	{
		struct _Script_MetaClient_eventOnMetaBinaryMessage_Parms
		{
			FMetaBinaryMessage Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MetaClient_eventOnMetaBinaryMessage_Parms, Message), Z_Construct_UScriptStruct_FMetaBinaryMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 3320416407
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetaClient, nullptr, "OnMetaBinaryMessage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::_Script_MetaClient_eventOnMetaBinaryMessage_Parms), Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMetaClientManager::execDisconnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaClientManager::execConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaClientManager::execSendMetaBinaryMessage)
	{
		P_GET_STRUCT_REF(FMetaBinaryMessage,Z_Param_Out_MetaBinaryMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMetaBinaryMessage(Z_Param_Out_MetaBinaryMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaClientManager::execSendMetaMessage)
	{
		P_GET_STRUCT_REF(FMetaMessage,Z_Param_Out_MetaMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMetaMessage(Z_Param_Out_MetaMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaClientManager::execResetBuffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBuffer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaClientManager::execPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaClientManager::execReceiveProto)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveProto(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	void UMetaClientManager::StaticRegisterNativesUMetaClientManager()
	{
		UClass* Class = UMetaClientManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connected", &UMetaClientManager::execConnected },
			{ "Disconnected", &UMetaClientManager::execDisconnected },
			{ "Ping", &UMetaClientManager::execPing },
			{ "ReceiveProto", &UMetaClientManager::execReceiveProto },
			{ "ResetBuffer", &UMetaClientManager::execResetBuffer },
			{ "SendMetaBinaryMessage", &UMetaClientManager::execSendMetaBinaryMessage },
			{ "SendMetaMessage", &UMetaClientManager::execSendMetaMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMetaClientManager_Connected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_Connected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Han\n" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
		{ "ToolTip", "Han" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaClientManager_Connected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaClientManager, nullptr, "Connected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_Connected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_Connected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaClientManager_Connected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaClientManager_Connected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaClientManager_Disconnected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_Disconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaClientManager_Disconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaClientManager, nullptr, "Disconnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_Disconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_Disconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaClientManager_Disconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaClientManager_Disconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaClientManager_Ping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_Ping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaClientManager_Ping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaClientManager, nullptr, "Ping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_Ping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_Ping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaClientManager_Ping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaClientManager_Ping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics
	{
		struct MetaClientManager_eventReceiveProto_Parms
		{
			TArray<uint8> Bytes;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaClientManager_eventReceiveProto_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::NewProp_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaClientManager, nullptr, "ReceiveProto", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::MetaClientManager_eventReceiveProto_Parms), Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaClientManager_ReceiveProto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaClientManager_ReceiveProto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaClientManager_ResetBuffer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_ResetBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meta Client" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaClientManager_ResetBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaClientManager, nullptr, "ResetBuffer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_ResetBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_ResetBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaClientManager_ResetBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaClientManager_ResetBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics
	{
		struct MetaClientManager_eventSendMetaBinaryMessage_Parms
		{
			FMetaBinaryMessage MetaBinaryMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaBinaryMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaBinaryMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::NewProp_MetaBinaryMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::NewProp_MetaBinaryMessage = { "MetaBinaryMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaClientManager_eventSendMetaBinaryMessage_Parms, MetaBinaryMessage), Z_Construct_UScriptStruct_FMetaBinaryMessage, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::NewProp_MetaBinaryMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::NewProp_MetaBinaryMessage_MetaData)) }; // 3320416407
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::NewProp_MetaBinaryMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meta Client|SendMessage" },
		{ "Comment", "// Han - Send Binary Message\n" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
		{ "ToolTip", "Han - Send Binary Message" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaClientManager, nullptr, "SendMetaBinaryMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::MetaClientManager_eventSendMetaBinaryMessage_Parms), Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics
	{
		struct MetaClientManager_eventSendMetaMessage_Parms
		{
			FMetaMessage MetaMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::NewProp_MetaMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::NewProp_MetaMessage = { "MetaMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaClientManager_eventSendMetaMessage_Parms, MetaMessage), Z_Construct_UScriptStruct_FMetaMessage, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::NewProp_MetaMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::NewProp_MetaMessage_MetaData)) }; // 1452507640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::NewProp_MetaMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meta Client|SendMessage" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaClientManager, nullptr, "SendMetaMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::MetaClientManager_eventSendMetaMessage_Parms), Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaClientManager_SendMetaMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaClientManager_SendMetaMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaClientManager);
	UClass* Z_Construct_UClass_UMetaClientManager_NoRegister()
	{
		return UMetaClientManager::StaticClass();
	}
	struct Z_Construct_UClass_UMetaClientManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TCPConnectionProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TCPConnectionProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMetaMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetaMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMetaBinaryMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetaBinaryMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLiDARMapperMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiDARMapperMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaClientManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MetaClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMetaClientManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaClientManager_Connected, "Connected" }, // 616296569
		{ &Z_Construct_UFunction_UMetaClientManager_Disconnected, "Disconnected" }, // 2664384807
		{ &Z_Construct_UFunction_UMetaClientManager_Ping, "Ping" }, // 3770352622
		{ &Z_Construct_UFunction_UMetaClientManager_ReceiveProto, "ReceiveProto" }, // 1134704339
		{ &Z_Construct_UFunction_UMetaClientManager_ResetBuffer, "ResetBuffer" }, // 419879402
		{ &Z_Construct_UFunction_UMetaClientManager_SendMetaBinaryMessage, "SendMetaBinaryMessage" }, // 2364682261
		{ &Z_Construct_UFunction_UMetaClientManager_SendMetaMessage, "SendMetaMessage" }, // 2825241666
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaClientManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Networking" },
		{ "IncludePath", "metaclient/MetaClientManager.h" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaClientManager_Statics::NewProp_TCPConnectionProperties_MetaData[] = {
		{ "Category", "TCP Connection Properties" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaClientManager_Statics::NewProp_TCPConnectionProperties = { "TCPConnectionProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaClientManager, TCPConnectionProperties), Z_Construct_UScriptStruct_FTCPConnectionProperties, METADATA_PARAMS(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_TCPConnectionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_TCPConnectionProperties_MetaData)) }; // 3478438684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "Meta Client Events" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaClientManager, OnConnected), Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnConnected_MetaData)) }; // 660099638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "Category", "Meta Client Events" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaClientManager, OnDisconnected), Z_Construct_UDelegateFunction_MetaClient_OnEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnDisconnected_MetaData)) }; // 660099638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaMessage_MetaData[] = {
		{ "Category", "Meta Client Events" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaMessage = { "OnMetaMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaClientManager, OnMetaMessage), Z_Construct_UDelegateFunction_MetaClient_OnMetaMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaMessage_MetaData)) }; // 1333133020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaBinaryMessage_MetaData[] = {
		{ "Category", "Meta Client Events" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaBinaryMessage = { "OnMetaBinaryMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaClientManager, OnMetaBinaryMessage), Z_Construct_UDelegateFunction_MetaClient_OnMetaBinaryMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaBinaryMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaBinaryMessage_MetaData)) }; // 4230912648
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnLiDARMapperMessage_MetaData[] = {
		{ "Category", "Meta Client Events" },
		{ "ModuleRelativePath", "Public/metaclient/MetaClientManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnLiDARMapperMessage = { "OnLiDARMapperMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaClientManager, OnLiDARMapperMessage), Z_Construct_UDelegateFunction_MetaClient_OnFLiDARMapperMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnLiDARMapperMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnLiDARMapperMessage_MetaData)) }; // 2952890318
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaClientManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaClientManager_Statics::NewProp_TCPConnectionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnMetaBinaryMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaClientManager_Statics::NewProp_OnLiDARMapperMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaClientManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaClientManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaClientManager_Statics::ClassParams = {
		&UMetaClientManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMetaClientManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaClientManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaClientManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaClientManager()
	{
		if (!Z_Registration_Info_UClass_UMetaClientManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaClientManager.OuterSingleton, Z_Construct_UClass_UMetaClientManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaClientManager.OuterSingleton;
	}
	template<> METACLIENT_API UClass* StaticClass<UMetaClientManager>()
	{
		return UMetaClientManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaClientManager);
	UMetaClientManager::~UMetaClientManager() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_Statics::ScriptStructInfo[] = {
		{ FMetaMessage::StaticStruct, Z_Construct_UScriptStruct_FMetaMessage_Statics::NewStructOps, TEXT("MetaMessage"), &Z_Registration_Info_UScriptStruct_MetaMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaMessage), 1452507640U) },
		{ FLiDARPosition::StaticStruct, Z_Construct_UScriptStruct_FLiDARPosition_Statics::NewStructOps, TEXT("LiDARPosition"), &Z_Registration_Info_UScriptStruct_LiDARPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiDARPosition), 3214504470U) },
		{ FLiDARFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiDARFrameData_Statics::NewStructOps, TEXT("LiDARFrameData"), &Z_Registration_Info_UScriptStruct_LiDARFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiDARFrameData), 2503120625U) },
		{ FLiDARMapperMessage::StaticStruct, Z_Construct_UScriptStruct_FLiDARMapperMessage_Statics::NewStructOps, TEXT("LiDARMapperMessage"), &Z_Registration_Info_UScriptStruct_LiDARMapperMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiDARMapperMessage), 1414304558U) },
		{ FMetaBinaryMessage::StaticStruct, Z_Construct_UScriptStruct_FMetaBinaryMessage_Statics::NewStructOps, TEXT("MetaBinaryMessage"), &Z_Registration_Info_UScriptStruct_MetaBinaryMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaBinaryMessage), 3320416407U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaClientManager, UMetaClientManager::StaticClass, TEXT("UMetaClientManager"), &Z_Registration_Info_UClass_UMetaClientManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaClientManager), 3938611592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_2433113129(TEXT("/Script/MetaClient"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MetaClient_Source_MetaClient_Public_metaclient_MetaClientManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
