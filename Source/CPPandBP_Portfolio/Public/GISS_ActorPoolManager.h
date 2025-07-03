// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GISS_ActorPoolManager.generated.h"

UCLASS(Blueprintable)
class CPPANDBP_PORTFOLIO_API UGISS_ActorPoolManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	void SpawnProjectileFromPool();

	void SendPooledActorReference();

protected:



private:



};
