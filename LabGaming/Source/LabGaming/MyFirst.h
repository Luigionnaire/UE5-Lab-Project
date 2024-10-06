// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/TextRenderComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirst.generated.h"

UCLASS()
class LABGAMING_API AMyFirst : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirst();

	UTextRenderComponent* MyText;
	float ElapsedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCategory")
	float MyFloat;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MyCategory")
	int32 MyInt;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MyCategory")
	bool bMyBool;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "MyCategory")
	bool bMyBool2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void MyFunction();

	void TimeElapsed(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	float AddNumbers(float A, float B);

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	float SubtractNumbers(float A, float B);

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	float DivideNumbers(float A, float B);

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	float MultiplyNumbers(float A, float B);

};
