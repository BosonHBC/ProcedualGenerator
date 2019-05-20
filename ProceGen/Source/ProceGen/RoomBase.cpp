// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomBase.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "MapGeneartor.h"

#define TILE_SIZE 4
// Sets default values
ARoomBase::ARoomBase()
{
	// Set mesh
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	if (staticMesh) {
		staticMesh->SetupAttachment(RootComponent);

		// Visual
		static ConstructorHelpers::FObjectFinder<UStaticMesh> myMesh(TEXT("/Game/Geometry/Meshes/1M_Cube"));
		if (myMesh.Succeeded()) {
			staticMesh->SetStaticMesh(myMesh.Object);
			staticMesh->SetRelativeLocation(FVector(0, 0, 70));
			staticMesh->SetWorldScale3D(FVector(1, 1, 0.3f));
		}

		//  Collision
		static FName MeshCollisionProfileName(TEXT("OverlapAllDynamic"));
		staticMesh->SetCollisionProfileName(MeshCollisionProfileName);
		staticMesh->SetGenerateOverlapEvents(true);
		staticMesh->SetCanEverAffectNavigation(false);
		staticMesh->OnComponentBeginOverlap.AddDynamic(this, &ARoomBase::OnBeginOverlap);
		staticMesh->OnComponentEndOverlap.AddDynamic(this, &ARoomBase::OnEndOverlap);
	}
	ShiftingSpeed = 1;
	inOverlapListNum = 0;
	bCanTick = true;
	PrimaryActorTick.bCanEverTick = bCanTick;

}
// Called when the game starts or when spawned
void ARoomBase::BeginPlay()
{
	Super::BeginPlay();
	// Bind Function dynamically
}

void ARoomBase::PostInitializeComponents() {
	Super::PostInitializeComponents();

}

// Called every frame
void ARoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveActorsToProperLocation();

}

void ARoomBase::SetWorldLocation(int32 i_worldX, int32 i_worldY) {
	worldPosition.X = i_worldX;
	worldPosition.Y = i_worldY;
	RootComponent->SetWorldLocation(FVector(i_worldX, i_worldY, RootComponent->RelativeLocation.Z));

}

void ARoomBase::SetPositionAndScale(int16 i_id, int32 i_worldX, int32 i_worldY, int16 i_width, int16 i_height, int16 i_MovingSpeed) {
	worldPosition.X = i_worldX;
	worldPosition.Y = i_worldY;
	m_AABB.Center = FVector2D(0, 0);
	m_AABB.Extend = FVector2D(i_width / 2, i_height / 2);

	id = i_id;
	ShiftingSpeed = i_MovingSpeed;
	// Set size & location
	RootComponent->SetWorldScale3D(
		FVector(
			RootComponent->GetComponentScale().X * i_width,
			RootComponent->GetComponentScale().Y * i_height,
			RootComponent->GetComponentScale().Z
		)
	);
	RootComponent->SetWorldLocation(FVector(i_worldX, i_worldY, RootComponent->RelativeLocation.Z));
}

void ARoomBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) {
	// Other Actor is the actor that triggered the event. Check that is not ourself
#ifdef UE_BUILD_DEBUG
	if (GEngine) {
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Room_%d Overlaped Function triggered."), id));
	}
#endif // UE_BUILD_DEBUG
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr)) {
		ARoomBase* castedRoom = Cast<ARoomBase>(OtherActor);
		// Push the Room into the list if it is a room
		if (castedRoom && castedRoom->GetClass() == ARoomBase::StaticClass()) {
			otherRooms.AddUnique(castedRoom);
			inOverlapListNum ++;
		}
	}
}
void ARoomBase::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	// Other Actor is the actor that triggered the event. Check that is not ourself
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr)) {
		ARoomBase* castedRoom = Cast<ARoomBase>(OtherActor);
		// Remove the Room into the list if it is a room
		if (castedRoom && castedRoom->GetClass() == ARoomBase::StaticClass()) {
			otherRooms.Remove(castedRoom);
			inOverlapListNum--;
		}
	}
}

void ARoomBase::MoveActorsToProperLocation() {

	// Only do it when they are collided
	if (otherRooms.Num() > 0) {
		FVector CenterOfAllOverlappedRoom;
		for (auto& room : otherRooms) {
			CenterOfAllOverlappedRoom += room->GetRootComponent()->RelativeLocation;
		}
		CenterOfAllOverlappedRoom /= otherRooms.Num();

		USceneComponent* MyRoot = GetRootComponent();
		// Other center to Root
		FVector Difference = (MyRoot->RelativeLocation - CenterOfAllOverlappedRoom).GetSafeNormal2D();
		MyRoot->MoveComponent(Difference * ShiftingSpeed * TILE_SIZE, MyRoot->RelativeRotation, true);

		// Round the location according to TILE_SIZE
		FVector  RoundedRelativeLocation(
			AMapGeneartor::RoundnBym(MyRoot->RelativeLocation.X, TILE_SIZE),
			AMapGeneartor::RoundnBym(MyRoot->RelativeLocation.Y, TILE_SIZE),
			MyRoot->RelativeLocation.Z);

		MyRoot->SetRelativeLocation(RoundedRelativeLocation);
		worldPosition = FVector2D(RoundedRelativeLocation.X, RoundedRelativeLocation.Y);
	}

}



