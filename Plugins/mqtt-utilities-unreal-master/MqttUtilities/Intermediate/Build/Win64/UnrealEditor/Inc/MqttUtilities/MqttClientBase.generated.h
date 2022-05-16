// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMqttMessage;
struct FMqttConnectionData;
#ifdef MQTTUTILITIES_MqttClientBase_generated_h
#error "MqttClientBase.generated.h already included, missing '#pragma once' in MqttClientBase.h"
#endif
#define MQTTUTILITIES_MqttClientBase_generated_h

#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_SPARSE_DATA
#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOnErrorHandler); \
	DECLARE_FUNCTION(execSetOnUnsubscribeHandler); \
	DECLARE_FUNCTION(execSetOnSubscribeHandler); \
	DECLARE_FUNCTION(execSetOnMessageHandler); \
	DECLARE_FUNCTION(execSetOnPublishHandler); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOnErrorHandler); \
	DECLARE_FUNCTION(execSetOnUnsubscribeHandler); \
	DECLARE_FUNCTION(execSetOnSubscribeHandler); \
	DECLARE_FUNCTION(execSetOnMessageHandler); \
	DECLARE_FUNCTION(execSetOnPublishHandler); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMqttClientBase(); \
	friend struct Z_Construct_UClass_UMqttClientBase_Statics; \
public: \
	DECLARE_CLASS(UMqttClientBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MqttUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMqttClientBase) \
	virtual UObject* _getUObject() const override { return const_cast<UMqttClientBase*>(this); }


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMqttClientBase(); \
	friend struct Z_Construct_UClass_UMqttClientBase_Statics; \
public: \
	DECLARE_CLASS(UMqttClientBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MqttUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMqttClientBase) \
	virtual UObject* _getUObject() const override { return const_cast<UMqttClientBase*>(this); }


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClientBase(UMqttClientBase&&); \
	NO_API UMqttClientBase(const UMqttClientBase&); \
public:


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClientBase(UMqttClientBase&&); \
	NO_API UMqttClientBase(const UMqttClientBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientBase)


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_9_PROLOG
#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_SPARSE_DATA \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_RPC_WRAPPERS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_INCLASS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_SPARSE_DATA \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MQTTUTILITIES_API UClass* StaticClass<class UMqttClientBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
