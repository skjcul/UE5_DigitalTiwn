// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttUtilities/Private/Windows/MqttClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClient() {}
// Cross Module References
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient_NoRegister();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
	void UMqttClient::StaticRegisterNativesUMqttClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMqttClient);
	UClass* Z_Construct_UClass_UMqttClient_NoRegister()
	{
		return UMqttClient::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMqttClientBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Windows/MqttClient.h" },
		{ "ModuleRelativePath", "Private/Windows/MqttClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClient_Statics::ClassParams = {
		&UMqttClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttClient()
	{
		if (!Z_Registration_Info_UClass_UMqttClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClient.OuterSingleton, Z_Construct_UClass_UMqttClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMqttClient.OuterSingleton;
	}
	template<> MQTTUTILITIES_API UClass* StaticClass<UMqttClient>()
	{
		return UMqttClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClient);
	struct Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClient, UMqttClient::StaticClass, TEXT("UMqttClient"), &Z_Registration_Info_UClass_UMqttClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClient), 1026856730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_3227820697(TEXT("/Script/MqttUtilities"),
		Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_Windows_MqttClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
