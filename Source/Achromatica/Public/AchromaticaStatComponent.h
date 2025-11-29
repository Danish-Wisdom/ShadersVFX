// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AchromaticaStatComponent.generated.h"


UENUM(BlueprintType)
enum EAuraMode : uint8
{
	Solar    UMETA(DisplayName = "Solar Aura"),
	Lunar    UMETA(DisplayName = "Lunar Aura")
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACHROMATICA_API UAchromaticaStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAchromaticaStatComponent();

protected:
	virtual void BeginPlay() override;

public:
	/* Core Stats - WIP  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues|Stats")
	float Strength = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues|Stats")
	float Vitality = 1.f;


	// Current Aura State
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CustomValues|Aura")
	TEnumAsByte<EAuraMode> CurrentAuraMode = EAuraMode::Solar;


	UFUNCTION(BlueprintCallable, Category = "CustomValues|Aura")
	void ToggleAuraMode();

	
};
