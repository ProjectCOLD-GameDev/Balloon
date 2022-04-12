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
	float jumpPower; // 0�ŃW�����v����

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpOK_Velocity; // �c�����̈ړ��ʂ�����ȉ���������󒆃W�����v���\

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool jumpForever; // �{�^���ŏ㏸�������邩�ǂ���

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gravity; // �d�͔{��

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool autoRise; // �����㏸���邩�ǂ���

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float breakLR; // �������̌����x Breaking Deceleration Falling

};
