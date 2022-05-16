// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CurJson.generated.h"

UCLASS()
class DIGITALTWINBASE_API ACurJson : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACurJson();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "CurJson")
	void CreateJson();

	UFUNCTION(BlueprintCallable, Category = "CurJson")
	void ReadJson();
};
