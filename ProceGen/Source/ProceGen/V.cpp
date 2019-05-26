// Fill out your copyright notice in the Description page of Project Settings.

#include "V.h"
#include"Engine/World.h"
#include"DrawDebugHelpers.h"

V::~V()
{
}

bool V::operator == (const V& v2) const {
	return (this->X == v2.X && this->Y == v2.Y);
}

void V::DebugDrawVertex(const UWorld* context) {
	DrawDebugPoint(
		context,
		FVector(X,Y,200),
		15,  					//size
		FColor::Blue,  // blue
		false,  				//persistent (never goes away)
		0.03 				//point leaves a trail on moving object
	);
}
