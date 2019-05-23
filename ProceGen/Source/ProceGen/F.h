// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Face( triangle ) class
 */
class V;
class E;
class PROCEGEN_API F
{
public:
	F();

	F( V* v1,  V* v2,  V* v3);
	~F();

	bool IsContainVertex(V* i_other) const;
	bool CircumCircleContains(const V* v) const;
	void DebugDrawFace(const UWorld* context) const;

	bool operator == (F* f) const;

	V* V1;
	V* V2;
	V* V3;
	E* E1;
	E* E2;
	E* E3;
	bool IsBad;
};
