// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirst.h"

// Sets default values
AMyFirst::AMyFirst()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("My Text Component")); // initialise UTextRenderComponent
	MyText->SetWorldSize(150.f);
	MyText->SetText(FText::FromString(TEXT("defaultText"))); // Set Text

	RootComponent = MyText; // adding MyText to root component. WIthout this you wont see the component being displayed

}

// Called when the game starts or when spawned
void AMyFirst::BeginPlay()
{
	Super::BeginPlay();

	MyText->SetText(FText::FromString(TEXT("Begin Play Text")));
	//MyFunction();
}

// Called every frame
void AMyFirst::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimeElapsed(DeltaTime);
	MyText->SetText(FText::AsNumber(ElapsedTime));
}

void AMyFirst::MyFunction()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("My first function works!")));
	}
}

void AMyFirst::TimeElapsed(float DeltaTime)
{
	ElapsedTime += DeltaTime;
}

float AMyFirst::AddNumbers(float A, float B)
{
	return A+B;
}

float AMyFirst::SubtractNumbers(float A, float B)
{
	return A-B;
}

float AMyFirst::DivideNumbers(float A, float B)
{
	return A/B;
}

float AMyFirst::MultiplyNumbers(float A, float B)
{
	return A*B;
}


