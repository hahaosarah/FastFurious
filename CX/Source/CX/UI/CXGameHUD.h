// CXGameHUD.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CXGameHUD.generated.h"

class UTextBlock;

/**
 * 게임 상태, 남은 시간, 승패 결과를 표시하는 HUD
 */

UCLASS()
class CX_API UCXGameHUD : public UUserWidget
{
	GENERATED_BODY()

protected:
	// 게임 상태 표시
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_GameState;

	// 남은 시간 표시
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_RemainingTime;

	// 승리 또는 패배 결과 표시
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Result;

public:
	// 게임 상태와 남은 시간을 UI에 반영
	UFUNCTION(BlueprintCallable, Category = "Game HUD")
	void UpdateGameStatus();
};
