// Copyright (c) 2019 Nineva Studios

#pragma once

#include "MqttMessage.generated.h"

USTRUCT(BlueprintType)
struct MQTTUTILITIES_API FMqttMessage
{
	GENERATED_BODY()

    /** Message content. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Message;

    /** Message topic. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Topic;

    /** Retain flag. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	bool Retain;

    /** Quality of signal. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	int Qos;
};