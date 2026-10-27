// CXItemSpawner.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CXItemSpawner.generated.h"

class UBillboardComponent;


UCLASS()
class CX_API ACXItemSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACXItemSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnItem();

	// 스폰 아이템 제거할 때, 호출 될 함수
	UFUNCTION()
	void OnItemDestroyed(AActor* DestroyedActor);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawner")
	TSubclassOf<AActor> ItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawner")
	float SpawnInterval = 2.f;

protected:
	UPROPERTY()
	TObjectPtr<AActor>SpawnedItem;

	FTimerHandle SpawnTimerHandle;

protected:
	UPROPERTY()
	TObjectPtr<UBillboardComponent>BillboardComponent;
};
