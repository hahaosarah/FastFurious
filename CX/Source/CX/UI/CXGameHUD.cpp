// CXGameHUD.cpp

#include "UI/CXGameHUD.h"

#include "Components/TextBlock.h"
#include "GameState/CXGameState.h"
#include "PlayerState/CXPlayerState.h"
#include "CXPlayerController.h"

void UCXGameHUD::UpdateGameStatus()
{
	// 1. UI를 소유한 PlayerController 가져오기
	ACXPlayerController* PC = GetOwningPlayer<ACXPlayerController>();

	if (!IsValid(PC))
	{
		return;
	}

	// 2. 현재 GameState 가져오기
	ACXGameState* GS = GetWorld()->GetGameState<ACXGameState>();

	if (!IsValid(GS))
	{
		return;
	}

	// 3. 현재 게임 상태 표시
    if (IsValid(TextBlock_GameState))
    {
        switch (GS->GetCurrentGameState())
        {
        case EGameState::Waiting:
            TextBlock_GameState->SetText(
                FText::FromString(TEXT("WAITING"))
            );
            break;

        case EGameState::Playing:
            TextBlock_GameState->SetText(
                FText::FromString(TEXT("PLAYING"))
            );
            break;

        case EGameState::Finished:
            TextBlock_GameState->SetText(
                FText::FromString(TEXT("FINISHED"))
            );
            break;

        default:
            TextBlock_GameState->SetText(
                FText::FromString(TEXT("UNKNOWN"))
            );
            break;
        }
    }

    // 4. 남은 시간 표시 (MM:SS)
    if (IsValid(TextBlock_RemainingTime))
    {
        const int32 RemainingSeconds =
            FMath::Max(0, GS->GetRemainingTime());

        const int32 Minutes = RemainingSeconds / 60;
        const int32 Seconds = RemainingSeconds % 60;

        const FString TimeString = FString::Printf(
            TEXT("%02d:%02d"),
            Minutes,
            Seconds
        );

        TextBlock_RemainingTime->SetText(
            FText::FromString(TimeString)
        );
    }

    // 5. 게임 종료 시 승리 / 패배 결과 표시
    if (IsValid(TextBlock_Result))
    {
        if (GS->GetCurrentGameState() == EGameState::Finished)
        {
            ACXPlayerState* LocalPlayerState =
                PC->GetPlayerState<ACXPlayerState>();

            if (!IsValid(LocalPlayerState))
            {
                TextBlock_Result->SetText(FText::GetEmpty());
                return;
            }

            const bool bIsWinner =
                GS->Winners.Contains(LocalPlayerState);

            TextBlock_Result->SetText(
                FText::FromString(
                    bIsWinner ? TEXT("YOU WIN!") : TEXT("YOU LOSE!")
                )
            );
        }
        else
        {
            TextBlock_Result->SetText(FText::GetEmpty());
        }
    }
}