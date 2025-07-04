// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorPoolInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UActorPoolInterface : public UInterface
{
	GENERATED_BODY()
};


class CPPANDBP_PORTFOLIO_API IActorPoolInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "ActorPool")
	void ReturnProjectileToPool(AActor* Projectile);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "ActorPool")
	void PooledProjectileReference(AActor* PooledProjectile);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "ActorPool")
	void SpawnProjectileFromPool(AActor* Requester, AActor* Weapon, FTransform Transform);
};

