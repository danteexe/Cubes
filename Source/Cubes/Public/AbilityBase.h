// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CUBES_API UAbilityBase : public UObject
{
	GENERATED_BODY()

public:
	UWorld* GetWorld() const override;
};
