// Fill out your copyright notice in the Description page of Project Settings.


#include "E.h"
#include "V.h"
#include"DrawDebugHelpers.h"
#include"Engine/World.h"
E::E()
{
}
void E::DebugDrawEdge(const UWorld* InWorld) {
	DrawDebugLine(InWorld, FVector(V1->X, V1->Y, 200.0f), FVector(V2->X, V2->Y, 200.0f), FColor::Black, true, 2.0f);
}

E::~E()
{
}
