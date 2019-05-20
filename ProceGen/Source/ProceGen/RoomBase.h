// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomBase.generated.h"

USTRUCT()
struct FAABB {
	GENERATED_BODY()

	UPROPERTY()
	FVector2D Center;
	UPROPERTY()
	FVector2D Extend;
};


UCLASS()
class PROCEGEN_API ARoomBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoomBase();

	/*Getters for property*/
	FORCEINLINE int16 GetId()const { return id; }

	UPROPERTY(Category = "Room", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* staticMesh;

	virtual void PostInitializeComponents() override;

	void SetPositionAndScale(int16 i_id, int32 i_worldX, int32 i_worldY, int16 i_width, int16 i_height, int16 i_MovingSpeed);
	void SetWorldLocation(int32 i_worldX, int32 i_worldY);
	UFUNCTION() 
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION() 	
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:	
	UPROPERTY(EditAnywhere, Category = "Room")
		int32 id;
	UPROPERTY(EditAnywhere, Category = "Room")
		FVector2D worldPosition;
	/**Self defined Bounding Box of my Room base**/
	UPROPERTY()
		FAABB m_AABB;

	/** Shifting Speed for a room when it is collided, it should be the multiple of TILE_SIZE **/
	int32 ShiftingSpeed;
	/***This is only a reference for the list size, should not be modified*/
	UPROPERTY(EditAnywhere, Category = "Room")
		int32 inOverlapListNum;
	/**The lis of stroing others room that overlaped in**/
	UPROPERTY()
		TArray<ARoomBase*> otherRooms;
	UPROPERTY(EditAnywhere, Category = "Room")
		bool bCanTick;

	void MoveActorsToProperLocation();
};
