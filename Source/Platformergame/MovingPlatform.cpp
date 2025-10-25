// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	startLocation = GetActorLocation();	

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	movingPlatform(DeltaTime);
	rotatePlatform(DeltaTime);
}

void AMovingPlatform::movingPlatform(float DeltaTime) {

	distanceMoved = getDistanceMoved();

	if(distanceMoved >= moveDistance) {

		
		float Overshoot = distanceMoved - moveDistance;
		UE_LOG(LogTemp, Warning, TEXT("%s overshot by %f"), *GetName(), Overshoot);

		FVector moveDirection = platformVelocity.GetSafeNormal();
		FVector newStartLocation = startLocation + (moveDirection * moveDistance);
		SetActorLocation(newStartLocation);
		startLocation = newStartLocation;

		platformVelocity = -platformVelocity;
	}
	else {
		FVector currentActorLocation = GetActorLocation();
		currentActorLocation = currentActorLocation + (platformVelocity * DeltaTime);
		SetActorLocation(currentActorLocation);
	}
}

void AMovingPlatform::rotatePlatform(float DeltaTime) {

	AddActorLocalRotation(platformRotation * DeltaTime);
}

float AMovingPlatform::getDistanceMoved() {

	return FVector::Dist(startLocation, GetActorLocation());
}
