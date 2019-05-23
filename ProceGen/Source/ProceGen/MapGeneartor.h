// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGeneartor.generated.h"
class ARoomBase;
UENUM(BlueprintType)
enum class EGenStepEnum : uint8
{
	GSE_GENERATING_ROOMS				UMETA(DisplayName = "Generaing"),
	GSE_SEPARATING_ROOMS 				UMETA(DisplayName = "Separating"),
	GSE_SELECTING_ROOMS					UMETA(DisplayName = "Selecting"),
	GSE_GRAPHING_ROOMS					UMETA(DispalyName = "Graphing"),
	GSE_CHOOSE_HALLWAY						UMETA(DispalyName = "Hallway")

};

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
	EGenStepEnum GenStepEnum;
	///
	/// Room Property
	///
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
	///
	/// Seperating Rooms
	///
	UPROPERTY(EditAnywhere)
		int32 ShiftingSpeed;
	UPROPERTY(EditAnywhere)
		bool bGenerateRoom;
	///
	/// Selecting Main Rooms
	///
	UPROPERTY(EditAnywhere)
		float SizeThreshold;
	UPROPERTY(EditAnywhere)
		FVector2D CenterArea;

	UPROPERTY()
	class UMaterial* UM_MainRoomInst;

	UPROPERTY(BlueprintReadOnly)
		TArray<ARoomBase*> RoomList;
	UPROPERTY()
	TArray<ARoomBase*> MainRoomList;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	class MyGraph* myGraph;

};
