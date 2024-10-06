// Fill out your copyright notice in the Description page of Project Settings.

#include "MySecond.h"

// Sets default values
AMySecond::AMySecond()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//MyText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("My Text Component")); // initialise UTextRenderComponent
	MyText->SetWorldSize(150.f);
	MyText->SetText(FText::FromString(TEXT("defaultText"))); // Set Text

	RootComponent = MyText;
}

// Called when the game starts or when spawned
void AMySecond::BeginPlay()
{
	Super::BeginPlay();
	//MyFunction();
	MyText->SetText(FText::FromString(TEXT("Countdown Text")));
	CountDownTime = StartingTime;
}

// Called every frame
void AMySecond::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CountDown(DeltaTime);
	MyText->SetText(FText::AsNumber(CountDownTime));

}

void AMySecond::CountDown(float DeltaTime)
{
	if(CountDownTime >= DeltaTime) CountDownTime -= DeltaTime;
	else {
		CountDownTime = 0;
	}
}

