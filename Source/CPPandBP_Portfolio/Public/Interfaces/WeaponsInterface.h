// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WeaponsInterface.generated.h"


UINTERFACE(MinimalAPI)

class UWeaponsInterface : public UInterface
{
	GENERATED_BODY()
};

class CPPANDBP_PORTFOLIO_API IWeaponsInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapons") // from GunOwner to Gun
	void Shoot(ACharacter* GunOwner, USkeletalMeshComponent* OwnerSkeletalMesh, UPrimitiveComponent* OwnerCapsule, FTransform OwnerTransform);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapons") // from DamageSource to HitObject
	void DealDamage(float Damage, FName HitBone, FVector ImpactNormal);
};
