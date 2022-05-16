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
#ifdef MQTTUTILITIES_MqttClientInterface_generated_h
#error "MqttClientInterface.generated.h already included, missing '#pragma once' in MqttClientInterface.h"
#endif
#define MQTTUTILITIES_MqttClientInterface_generated_h

#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_13_DELEGATE \
static inline void FOnConnectDelegate_DelegateWrapper(const FScriptDelegate& OnConnectDelegate) \
{ \
	OnConnectDelegate.ProcessDelegate<UObject>(NULL); \
}


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_14_DELEGATE \
static inline void FOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& OnDisconnectDelegate) \
{ \
	OnDisconnectDelegate.ProcessDelegate<UObject>(NULL); \
}


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_15_DELEGATE \
struct _Script_MqttUtilities_eventOnPublishDelegate_Parms \
{ \
	int32 mid; \
}; \
static inline void FOnPublishDelegate_DelegateWrapper(const FScriptDelegate& OnPublishDelegate, int32 mid) \
{ \
	_Script_MqttUtilities_eventOnPublishDelegate_Parms Parms; \
	Parms.mid=mid; \
	OnPublishDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_16_DELEGATE \
struct _Script_MqttUtilities_eventOnMessageDelegate_Parms \
{ \
	FMqttMessage message; \
}; \
static inline void FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMqttMessage message) \
{ \
	_Script_MqttUtilities_eventOnMessageDelegate_Parms Parms; \
	Parms.message=message; \
	OnMessageDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_17_DELEGATE \
struct _Script_MqttUtilities_eventOnSubscribeDelegate_Parms \
{ \
	int32 mid; \
	TArray<int32> qos; \
}; \
static inline void FOnSubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnSubscribeDelegate, int32 mid, TArray<int32> const& qos) \
{ \
	_Script_MqttUtilities_eventOnSubscribeDelegate_Parms Parms; \
	Parms.mid=mid; \
	Parms.qos=qos; \
	OnSubscribeDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_18_DELEGATE \
struct _Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms \
{ \
	int32 mid; \
}; \
static inline void FOnUnsubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnUnsubscribeDelegate, int32 mid) \
{ \
	_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms Parms; \
	Parms.mid=mid; \
	OnUnsubscribeDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_19_DELEGATE \
struct _Script_MqttUtilities_eventOnMqttErrorDelegate_Parms \
{ \
	int32 code; \
	FString message; \
}; \
static inline void FOnMqttErrorDelegate_DelegateWrapper(const FScriptDelegate& OnMqttErrorDelegate, int32 code, const FString& message) \
{ \
	_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms Parms; \
	Parms.code=code; \
	Parms.message=message; \
	OnMqttErrorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_SPARSE_DATA
#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_RPC_WRAPPERS \
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


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClientInterface(UMqttClientInterface&&); \
	NO_API UMqttClientInterface(const UMqttClientInterface&); \
public:


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClientInterface(UMqttClientInterface&&); \
	NO_API UMqttClientInterface(const UMqttClientInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientInterface)


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMqttClientInterface(); \
	friend struct Z_Construct_UClass_UMqttClientInterface_Statics; \
public: \
	DECLARE_CLASS(UMqttClientInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MqttUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMqttClientInterface)


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_UINTERFACE_BODY() \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_GENERATED_UINTERFACE_BODY() \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMqttClientInterface() {} \
public: \
	typedef UMqttClientInterface UClassType; \
	typedef IMqttClientInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_INCLASS_IINTERFACE \
protected: \
	virtual ~IMqttClientInterface() {} \
public: \
	typedef UMqttClientInterface UClassType; \
	typedef IMqttClientInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_21_PROLOG
#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_SPARSE_DATA \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_RPC_WRAPPERS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_SPARSE_DATA \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MQTTUTILITIES_API UClass* StaticClass<class UMqttClientInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DigitalTwinBase_Plugins_mqtt_utilities_unreal_master_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
