// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGeneartor.generated.h"
class ARoomBase;
UCLASS()
class PROCEGEN_API AMapGeneartor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapGeneartor();

	static FVector2D GetRandomPointInCircle(FVector2D i_EllipseSize);
	static int16 RoundnBym(float input, int16 tile);

	UPROPERTY(EditAnywhere)
	int16 StartRoomAmount;
	UPROPERTY(EditAnywhere)
	int16 RoomSizeMin;
	UPROPERTY(EditAnywhere)
	int16 RoomSizeMax;
	UPROPERTY(EditAnywhere)
	FVector2D EllipseSize;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> RoomActorToSpawn;
	UPROPERTY(EditAnywhere)
	int32 ShiftingSpeed;
	UPROPERTY(EditAnywhere)
	bool bGenerateRoom;

	UPROPERTY(BlueprintReadOnly)
	TArray<ARoomBase*> RoomList;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
