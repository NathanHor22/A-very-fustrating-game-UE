// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class PLATFORMERGAME_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void movingPlatform(float DeltaTime);

	void rotatePlatform(float DeltaTime);
	float getDistanceMoved();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FVector platformVelocity = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere)
	FRotator platformRotation = FRotator(0.0f, 0.0f, 0.0f);

	UPROPERTY(VisibleAnywhere)
	float distanceMoved = 0.0f;

	UPROPERTY(VisibleAnywhere)
	float moveDistance = 500.0f;

	FVector startLocation;
};
