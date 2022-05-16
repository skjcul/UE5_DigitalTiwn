// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttUtilities/Private/MqttClientBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientBase() {}
// Cross Module References
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase_NoRegister();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMqttClientBase::execSetOnErrorHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onErrorCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnErrorHandler(FOnMqttErrorDelegate(Z_Param_Out_onErrorCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnUnsubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onUnsubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnUnsubscribeHandler(FOnUnsubscribeDelegate(Z_Param_Out_onUnsubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnSubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onSubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnSubscribeHandler(FOnSubscribeDelegate(Z_Param_Out_onSubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnMessageHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onMessageCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnMessageHandler(FOnMessageDelegate(Z_Param_Out_onMessageCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnPublishHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onPublishCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPublishHandler(FOnPublishDelegate(Z_Param_Out_onPublishCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execPublish)
	{
		P_GET_STRUCT(FMqttMessage,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Publish(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execUnsubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unsubscribe(Z_Param_topic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_GET_PROPERTY(FIntProperty,Z_Param_qos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Subscribe(Z_Param_topic,Z_Param_qos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execDisconnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDisconnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(FOnDisconnectDelegate(Z_Param_Out_onDisconnectCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execConnect)
	{
		P_GET_STRUCT(FMqttConnectionData,Z_Param_connectionData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onConnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_connectionData,FOnConnectDelegate(Z_Param_Out_onConnectCallback));
		P_NATIVE_END;
	}
	void UMqttClientBase::StaticRegisterNativesUMqttClientBase()
	{
		UClass* Class = UMqttClientBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UMqttClientBase::execConnect },
			{ "Disconnect", &UMqttClientBase::execDisconnect },
			{ "Publish", &UMqttClientBase::execPublish },
			{ "SetOnErrorHandler", &UMqttClientBase::execSetOnErrorHandler },
			{ "SetOnMessageHandler", &UMqttClientBase::execSetOnMessageHandler },
			{ "SetOnPublishHandler", &UMqttClientBase::execSetOnPublishHandler },
			{ "SetOnSubscribeHandler", &UMqttClientBase::execSetOnSubscribeHandler },
			{ "SetOnUnsubscribeHandler", &UMqttClientBase::execSetOnUnsubscribeHandler },
			{ "Subscribe", &UMqttClientBase::execSubscribe },
			{ "Unsubscribe", &UMqttClientBase::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMqttClientBase_Connect_Statics
	{
		struct MqttClientBase_eventConnect_Parms
		{
			FMqttConnectionData connectionData;
			FScriptDelegate onConnectCallback;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_connectionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onConnectCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onConnectCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_connectionData = { "connectionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventConnect_Parms, connectionData), Z_Construct_UScriptStruct_FMqttConnectionData, METADATA_PARAMS(nullptr, 0) }; // 1141400522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback = { "onConnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventConnect_Parms, onConnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback_MetaData)) }; // 3618295619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_connectionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Connect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::MqttClientBase_eventConnect_Parms), Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics
	{
		struct MqttClientBase_eventDisconnect_Parms
		{
			FScriptDelegate onDisconnectCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onDisconnectCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDisconnectCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback = { "onDisconnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventDisconnect_Parms, onDisconnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData)) }; // 1287122037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Disconnect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::MqttClientBase_eventDisconnect_Parms), Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Publish_Statics
	{
		struct MqttClientBase_eventPublish_Parms
		{
			FMqttMessage message;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientBase_Publish_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventPublish_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(nullptr, 0) }; // 2033591038
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Publish_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Publish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Publish", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::MqttClientBase_eventPublish_Parms), Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Publish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Publish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics
	{
		struct MqttClientBase_eventSetOnErrorHandler_Parms
		{
			FScriptDelegate onErrorCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onErrorCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onErrorCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback = { "onErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnErrorHandler_Parms, onErrorCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData)) }; // 3289135695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnErrorHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::MqttClientBase_eventSetOnErrorHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics
	{
		struct MqttClientBase_eventSetOnMessageHandler_Parms
		{
			FScriptDelegate onMessageCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onMessageCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onMessageCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback = { "onMessageCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnMessageHandler_Parms, onMessageCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData)) }; // 2741974069
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnMessageHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::MqttClientBase_eventSetOnMessageHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics
	{
		struct MqttClientBase_eventSetOnPublishHandler_Parms
		{
			FScriptDelegate onPublishCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onPublishCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onPublishCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback = { "onPublishCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnPublishHandler_Parms, onPublishCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData)) }; // 1854912132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnPublishHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::MqttClientBase_eventSetOnPublishHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics
	{
		struct MqttClientBase_eventSetOnSubscribeHandler_Parms
		{
			FScriptDelegate onSubscribeCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSubscribeCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSubscribeCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback = { "onSubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnSubscribeHandler_Parms, onSubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData)) }; // 2042511633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnSubscribeHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::MqttClientBase_eventSetOnSubscribeHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics
	{
		struct MqttClientBase_eventSetOnUnsubscribeHandler_Parms
		{
			FScriptDelegate onUnsubscribeCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onUnsubscribeCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onUnsubscribeCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback = { "onUnsubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnUnsubscribeHandler_Parms, onUnsubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData)) }; // 3335462996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnUnsubscribeHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::MqttClientBase_eventSetOnUnsubscribeHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics
	{
		struct MqttClientBase_eventSubscribe_Parms
		{
			FString topic;
			int32 qos;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_qos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventSubscribe_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventSubscribe_Parms, qos), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_qos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Subscribe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::MqttClientBase_eventSubscribe_Parms), Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics
	{
		struct MqttClientBase_eventUnsubscribe_Parms
		{
			FString topic;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientBase_eventUnsubscribe_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::NewProp_topic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Unsubscribe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::MqttClientBase_eventUnsubscribe_Parms), Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMqttClientBase);
	UClass* Z_Construct_UClass_UMqttClientBase_NoRegister()
	{
		return UMqttClientBase::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClientBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnectDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnectDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnectDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPublishDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPublishDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMessageDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubscribeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubscribeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnsubscribeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUnsubscribeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnErrorDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnErrorDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClientBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttClientBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttClientBase_Connect, "Connect" }, // 635598748
		{ &Z_Construct_UFunction_UMqttClientBase_Disconnect, "Disconnect" }, // 796742314
		{ &Z_Construct_UFunction_UMqttClientBase_Publish, "Publish" }, // 1301512593
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler, "SetOnErrorHandler" }, // 3460021922
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler, "SetOnMessageHandler" }, // 3528530115
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler, "SetOnPublishHandler" }, // 4114431994
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler, "SetOnSubscribeHandler" }, // 724635255
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler, "SetOnUnsubscribeHandler" }, // 1533466423
		{ &Z_Construct_UFunction_UMqttClientBase_Subscribe, "Subscribe" }, // 2851658676
		{ &Z_Construct_UFunction_UMqttClientBase_Unsubscribe, "Unsubscribe" }, // 4170822118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MqttClientBase.h" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate = { "OnConnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMqttClientBase, OnConnectDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate_MetaData)) }; // 3618295619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate = { "OnDisconnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMqttClientBase, OnDisconnectDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate_MetaData)) }; // 1287122037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate = { "OnPublishDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMqttClientBase, OnPublishDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate_MetaData)) }; // 1854912132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate = { "OnMessageDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMqttClientBase, OnMessageDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate_MetaData)) }; // 2741974069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate = { "OnSubscribeDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMqttClientBase, OnSubscribeDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate_MetaData)) }; // 2042511633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate = { "OnUnsubscribeDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMqttClientBase, OnUnsubscribeDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate_MetaData)) }; // 3335462996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate = { "OnErrorDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMqttClientBase, OnErrorDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate_MetaData)) }; // 3289135695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMqttClientBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMqttClientBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMqttClientInterface_NoRegister, (int32)VTABLE_OFFSET(UMqttClientBase, IMqttClientInterface), false },  // 2075987800
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClientBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClientBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClientBase_Statics::ClassParams = {
		&UMqttClientBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMqttClientBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttClientBase()
	{
		if (!Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton, Z_Construct_UClass_UMqttClientBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton;
	}
	template<> MQTTUTILITIES_API UClass* StaticClass<UMqttClientBase>()
	{
		return UMqttClientBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClientBase);
	struct Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClientBase, UMqttClientBase::StaticClass, TEXT("UMqttClientBase"), &Z_Registration_Info_UClass_UMqttClientBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClientBase), 4217830842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_1065046890(TEXT("/Script/MqttUtilities"),
		Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
