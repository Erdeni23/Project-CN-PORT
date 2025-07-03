// Fill out your copyright notice in the Description page of Project Settings.


#include "GISS_ActorPoolManager.h"

void UGISS_ActorPoolManager::Initialize(FSubsystemCollectionBase& Collection) 
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("ObjectPoolSubsystem has been initialized"));
}

void UGISS_ActorPoolManager::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("ObjectPoolSubsystem has been deinitialized"));
	Super::Deinitialize();
}

void UGISS_ActorPoolManager::SpawnProjectileFromPool() 
{

}

void UGISS_ActorPoolManager::SendPooledActorReference()
{
	int a = 1;
}