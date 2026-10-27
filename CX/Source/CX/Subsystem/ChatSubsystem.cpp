// ChatSubsystem.cpp

#include "Subsystem/ChatSubsystem.h"

void UChatSubsystem::AddChatMessage(const FString& InSender, const FString& InMessage)
{
	if (ChatLog.Num() > MaxChatLogSize)
	{
		ChatLog.RemoveAt(0);
	}

	ChatLog.Emplace(InSender, InMessage);
}