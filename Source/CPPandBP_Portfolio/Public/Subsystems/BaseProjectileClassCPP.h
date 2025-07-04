// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorPoolInterface.h"

#include "BaseProjectileClassCPP.generated.h"

UCLASS(Blueprintable)
class CPPANDBP_PORTFOLIO_API ABaseProjectileClassCPP : public AActor
{
	GENERATED_BODY()
	/*
	Этот актор является надстройкой для BP_BaseProjectileClass для более удобной работы в С++
	*/
public:	
	// Sets default values for this actor's properties
	ABaseProjectileClassCPP();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsActive = false; // находится ли актор в пуле или используется(isActive?)

	/*
	 ивент isInUse создается для отключения логики вычисления:
	 тик, видимость, система ниагара, коллизия
	*/
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void isInUse(bool InUse, AActor* Requester, AActor* Weapon);
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
