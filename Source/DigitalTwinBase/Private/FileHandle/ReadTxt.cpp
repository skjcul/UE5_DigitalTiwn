// Fill out your copyright notice in the Description page of Project Settings.


#include "FileHandle/ReadTxt.h"

// Sets default values
AReadTxt::AReadTxt()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReadTxt::BeginPlay()
{
	Super::BeginPlay();
	FString LoadDir = FPaths::ProjectContentDir() / TEXT("LoadTText.txt");
	if (!IFileManager::Get().FileExists(*LoadDir))
	{
		FPaths::MakeValidFileName(LoadDir);
		FFileHelper::SaveStringToFile(TEXT("ÄãºÃ£¡"), *LoadDir);
	}
	else
	{
		FString TxtInfo;
		FFileHelper::LoadFileToString(TxtInfo, *(LoadDir));
		GEngine->AddOnScreenDebugMessage(-1, 40, FColor::White, TxtInfo);
	}

}

// Called every frame
void AReadTxt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

