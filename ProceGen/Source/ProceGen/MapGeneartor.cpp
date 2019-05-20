// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGeneartor.h"
#include "ProceGen/RoomBase.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"
#define TILE_SIZE 4
// Sets default values
AMapGeneartor::AMapGeneartor()
{
	// Room Generation
	StartRoomAmount = 10;
	EllipseSize = FVector2D(800, 600);
	RoomSizeMin = 1;
	RoomSizeMax = 4;
	RoomActorToSpawn = ARoomBase::StaticClass();
	RoomList = TArray<ARoomBase*>();

	ShiftingSpeed = 1;
	bGenerateRoom = true;
	GenStepEnum = EGenStepEnum::GSE_GENERATING_ROOMS;

	// Select Main Room
	SizeThreshold = 1.25f;
	CenterArea = FVector2D(500, 500);
	ConstructorHelpers::FObjectFinder<UMaterial> m_MainRoom(TEXT("/Game/Material/M_MainRoom"));
	if (m_MainRoom.Succeeded()) {
		UM_MainRoomInst = m_MainRoom.Object;
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Did not find Main Room Material, maybe wrong address"));
	}

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
}

// Called when the game starts or when spawned
void AMapGeneartor::BeginPlay()
{
	Super::BeginPlay();
	if (!RoomActorToSpawn) {
		UE_LOG(LogTemp, Error, TEXT("The Actor class is null! Please Set it in Details pannel."))
			return;
	}
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
	if (GenStepEnum == EGenStepEnum::GSE_GENERATING_ROOMS) {
		bool bAllFinished = true;
		for (auto& room : RoomList) {
			bAllFinished = room->IsFinishSeperating();
			if (!bAllFinished)
				break;
		}
		if (bAllFinished) {
			GenStepEnum = EGenStepEnum::GSE_SELECTING_ROOMS;
			if (RoomList.Num() > 0) {
				// Calculaing Rooms mean here
				float AreaSum = 0;
				for (auto& room : RoomList) {
					AreaSum += room->GetAreaOfRoom();
				}
				float AreaMean = AreaSum / RoomList.Num();
				// another loop to check if it is larger than mean
				for (auto& room : RoomList) {
					if (room->GetAreaOfRoom() > AreaMean * SizeThreshold || room->IsIn2DArea(CenterArea)) {
						room->SetAsMainRoom(UM_MainRoomInst);
						MainRoomList.AddUnique(room);
					}
					else {
						room->SetMeshVisibility(true);
					}
				}
				// After marking all main room, create graph
				GenStepEnum = EGenStepEnum::GSE_GRAPHING_ROOMS;
			}
		}
	}
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


