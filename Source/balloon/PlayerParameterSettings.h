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
	bool hasStickLR_Move;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasStickUD_Move;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpPower; // 0でジャンプ無効

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpOK_Velocity; // 縦方向の移動量がこれ以下だったら空中ジャンプが可能

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool jumpForever; // ボタンで上昇し続けるかどうか

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gravity; // 重力倍率

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool autoRise; // 自動上昇するかどうか

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float breakLR; // 横方向の減速度 Breaking Deceleration Falling

};
