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



