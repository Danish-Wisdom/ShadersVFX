// Fill out your copyright notice in the Description page of Project Settings.


#include "AchromaticaStatComponent.h"

// Sets default values for this component's properties
UAchromaticaStatComponent::UAchromaticaStatComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UAchromaticaStatComponent::BeginPlay()
{
	Super::BeginPlay();

	Strength = 10.f;
	Vitality = 10.f;
	
}

void UAchromaticaStatComponent::ToggleAuraMode()
{
	if (CurrentAuraMode == EAuraMode::Solar)
	{
		CurrentAuraMode = EAuraMode::Lunar;
		UE_LOG(LogTemp, Warning, TEXT("Aura Switched to Lunar: Power/Defense Mode"))
	}
	else
	{
		CurrentAuraMode = EAuraMode::Solar;
		UE_LOG(LogTemp, Warning, TEXT("Aura Switched to Solar: Speed/Combo Mode"))
	}
}





