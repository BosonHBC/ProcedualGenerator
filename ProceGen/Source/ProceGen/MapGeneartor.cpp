// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGeneartor.h"
#include "ProceGen/RoomBase.h"
#include "Engine/World.h"
#define TILE_SIZE 4
// Sets default values
AMapGeneartor::AMapGeneartor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Room Generation
	StartRoomAmount = 10;
	EllipseSize = FVector2D(800, 600);
	RoomSizeMin = 1;
	RoomSizeMax = 4;
	RoomActorToSpawn = ARoomBase::StaticClass();
	RoomList = TArray<ARoomBase*>();

	ShiftingSpeed = 1;
	bGenerateRoom = true;
}

// Called when the game starts or when spawned
void AMapGeneartor::BeginPlay()
{
	Super::BeginPlay();

	for (size_t i = 0; i < StartRoomAmount; i++) {
		FVector Location(AMapGeneartor::GetRandomPointInCircle(EllipseSize), 70);
		FRotator Rotaion(0);
		UWorld* WRLD = GetWorld();
		ARoomBase* tempRoom = Cast<ARoomBase>(WRLD->SpawnActor(RoomActorToSpawn, &Location, &Rotaion));
		RoomList.Add(tempRoom);
		tempRoom->SetPositionAndScale(i, Location.X, Location.Y, FMath::RandRange(RoomSizeMin, RoomSizeMax), FMath::RandRange(RoomSizeMin, RoomSizeMax), ShiftingSpeed);
	}

}

// Called every frame
void AMapGeneartor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Static Function
int16 AMapGeneartor::RoundnBym(float input, int16 tile) {
	return FMath::FloorToInt(((input + tile - 1) / tile))*tile;
}
FVector2D AMapGeneartor::GetRandomPointInCircle(FVector2D i_EllipseSize) {
	float a = FMath::FRandRange(0.0f, 1.0f);
	float b = FMath::FRandRange(0.0f, 1.0f);

	if (b < a) {
		float t = b;
		b = a;
		a = t;
	}

	return FVector2D(
		RoundnBym(b*i_EllipseSize.X*cos(2 * PI*a / b), TILE_SIZE),
		RoundnBym(b*i_EllipseSize.Y*sin(2 * PI*a / b), TILE_SIZE)
	);
}


