// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerParameterSettings.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct BALLOON_API FPlayerParameterSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int playerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasStickLR_Move;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasStickUD_Move;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gravity;
};
