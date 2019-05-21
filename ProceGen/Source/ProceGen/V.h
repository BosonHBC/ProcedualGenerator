// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Vertex class
 */
class PROCEGEN_API V
{
public:
	V();
	V(float i_X, float i_Y) : X(i_X), Y(i_Y) {}
	~V();

	void PushEdgeToVertex(class E* i_other);

private:
	float X;
	float Y;
	TArray<E*> edgs;
};
