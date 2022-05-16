// Fill out your copyright notice in the Description page of Project Settings.


#include "FileHandle/CurJson.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"

// Sets default values
ACurJson::ACurJson()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACurJson::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACurJson::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACurJson::CreateJson()
{
	FString FilePath = FPaths::ProjectContentDir() + TEXT("Test.json");
	FString jsonStr;
	TSharedPtr<TJsonWriter<>> jsonWriter = TJsonWriterFactory<>::Create(&jsonStr);
	jsonWriter->WriteObjectStart();
	jsonWriter->WriteValue(TEXT("ServerName"), TEXT("·þÎñÆ÷"));
	jsonWriter->WriteObjectEnd();
	jsonWriter->Close();
	FFileHelper::SaveStringToFile(jsonStr, *FilePath);
}

void ACurJson::ReadJson()
{
	FString FilePath = FPaths::ProjectContentDir() + TEXT("Test.json");
	FString jsonStr;
	if (FFileHelper::LoadFileToString(jsonStr, *FilePath))
	{
		GEngine->AddOnScreenDebugMessage(-1, 40, FColor::Blue, jsonStr);
	}

}

