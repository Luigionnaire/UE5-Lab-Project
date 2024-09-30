// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyFirst.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySecond.generated.h"

class UTextRenderComponent;

UCLASS()
class LABGAMING_API AMySecond : public AMyFirst
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMySecond();
	float StartingTime = 5.0f;
	float CountDownTime;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CountDown(float DeltaTime);

};
