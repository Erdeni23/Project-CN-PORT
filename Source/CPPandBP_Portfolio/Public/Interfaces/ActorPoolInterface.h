// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorPoolInterface.generated.h"


UINTERFACE(MinimalAPI)
class UActorPoolInterface : public UInterface
{
	GENERATED_BODY()
};


class CPPANDBP_PORTFOLIO_API IActorPoolInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "ActorPool")  // from Projectile to Game Instance SubSystem
	void ReturnProjectileToPool(AActor* Projectile);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "ActorPool")  // from Projectile to Owner of an initiator
	void PooledProjectileReference(AActor* PooledProjectile);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "ActorPool")  // from an Initiator to Game Instance SubSystem
	void SpawnProjectileFromPool(AActor* Requester, AActor* Weapon, FTransform Transform);
};

