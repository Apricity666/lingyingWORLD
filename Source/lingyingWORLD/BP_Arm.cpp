// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Arm.h"

// Sets default values
ABP_Arm::ABP_Arm()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_Arm::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_Arm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

