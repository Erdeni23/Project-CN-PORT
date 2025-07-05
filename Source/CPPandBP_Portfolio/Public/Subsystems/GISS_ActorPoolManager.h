// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BaseProjectileClassCPP.h"
#include "ActorPoolInterface.h"

#include "GISS_ActorPoolManager.generated.h"


UCLASS(Blueprintable)
class CPPANDBP_PORTFOLIO_API UGISS_ActorPoolManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	/*
	создаем проверку наличия сабсистемы на блюпринтах, для того чтобы иметь
	только одну инстанцию в игре
	(для того чтобы С++ не работал одновременно с блюпринт версией)
	*/
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	
	/*
	Получаем данные World через указатель и встроенную фунцкию GetWorld,
	для того, чтобы сабсистема имела, контекст WorldContext,
	это нужно для доступа к нодам, например SpawnActorFromClass
	*/
	virtual UWorld* GetWorld() const override;
	
	UFUNCTION(BlueprintImplementableEvent)
	void Init();

	/*
	Актор пул система, создается при инициалзации в BP_GameInstanceActorPoolManager.
	Логика передачи/возврата актора исполнена здесь 
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject")) 
	static AActor* SpawnProjectileFromGameInstancePool
		(
		UObject* WorldContextObject,
		AActor* Requester,
		AActor* Weapon,
		FTransform Transform,
		const TArray<ABaseProjectileClassCPP*>& ActorPool
		);

	
protected:



private:



};
