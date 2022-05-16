// Copyright (c) 2019 Nineva Studios

#pragma once

#include "Interface/MqttClientInterface.h"
#include "Entities/MqttClientConfig.h"

#include "Kismet/BlueprintFunctionLibrary.h"

#include "MqttUtilitiesBPL.generated.h"

UCLASS()
class MQTTUTILITIES_API UMqttUtilitiesBPL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
	 * Create new instance of MQTT client
	 *
	 * @return - reference to MQTT client interface object
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	static TScriptInterface<IMqttClientInterface> CreateMqttClient(FMqttClientConfig config);
};