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
	int playerType; // ���Ԃ����Ă���̂��𔻂�₷�����邽�߂����̂�i���g�p�j

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool stickLR_Move; // ���X�e�B�b�N�ō��E�ړ����s���邩�ǂ���

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool stickUD_Move; // ���X�e�B�b�N�ŏ㉺�ړ����s���邩�ǂ���

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpPower; // �W�����v��/�����㏸���x�B0�ŃW�����v����

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float jumpOK_Velocity; // �c�����̈ړ��ʂ�����ȉ���������󒆃W�����v���\

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool jumpForever; // �{�^���ŏ㏸�������邩�ǂ���

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gravity; // �d�͔{��

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool autoRise; // �����㏸���邩�ǂ���

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float riseBreak; // �����㏸�̃u���[�L��

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float breakLR; // �������̎���������

};
