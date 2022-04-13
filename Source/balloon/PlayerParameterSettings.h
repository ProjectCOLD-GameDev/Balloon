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
	int playerType; // 何番を見ているのかを判りやすくするためだけのやつ（未使用）

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool stickLR_Move; // 左スティックで左右移動を行えるかどうか

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool stickUD_Move; // 左スティックで上下移動を行えるかどうか

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpPower; // ジャンプ力/自動上昇速度。0でジャンプ無効

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpOK_Velocity; // 縦方向の移動量がこれ以下だったら空中ジャンプが可能

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool jumpForever; // ボタンで上昇し続けるかどうか

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gravity; // 重力倍率

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool autoRise; // 自動上昇するかどうか

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float riseBreak; // 自動上昇のブレーキ力

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float breakLR; // 横方向の自動減速力

};
