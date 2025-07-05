// Fill out your copyright notice in the Description page of Project Settings.


#include "GISS_ActorPoolManager.h"



bool UGISS_ActorPoolManager::ShouldCreateSubsystem(UObject* Outer) const 
{
	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
	{
		return true;
	}
	return false;
}

void UGISS_ActorPoolManager::Initialize(FSubsystemCollectionBase& Collection) 
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("ObjectPoolSubsystem has been initialized"));
	
	Init();
}

	UWorld* UGISS_ActorPoolManager::GetWorld() const
{
	UGameInstance* MyGameInstance = GetGameInstance();
	if (MyGameInstance)
	{
		return MyGameInstance->GetWorld();
	}
	return nullptr;
}


void UGISS_ActorPoolManager::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("ObjectPoolSubsystem has been deinitialized"));
	Super::Deinitialize();
}

AActor* UGISS_ActorPoolManager::SpawnProjectileFromGameInstancePool
	(
	UObject* WorldContextObject,
	AActor* Requester,
	AActor* Weapon,
	FTransform Transform,
	const TArray<ABaseProjectileClassCPP*>& ActorPool
	)
{
	for(auto* Projectile : ActorPool)
	{
		if (Projectile && !Projectile->bIsActive)
		{
			Projectile->SetActorTransform(Transform);
			Projectile->isInUse(true, Requester, Weapon);
			IActorPoolInterface::Execute_PooledProjectileReference(Weapon,Projectile);
			
			/*интерфейс для передачи оружию инофрмации о снаряде выпущенным Requester'ом
			нужно для правильной работы коллизии 
			*/
			
			
			return Projectile;
		}
	}
	return nullptr;
}

