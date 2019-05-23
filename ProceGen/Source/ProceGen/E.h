// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Edge class
 */

class V;
class PROCEGEN_API E
{
public:
	E();
	E(V* i_v1,  V* i_v2) : V1(i_v1), V2(i_v2), IsBad(false) {}
	E(const E& i_other) : V1(i_other.V1), V2(i_other.V2), IsBad(i_other.IsBad) {}
	~E();
	void DebugDrawEdge(const class UWorld* InWorld);

	bool GetIsBad() const { return IsBad; }


private:
	V* V1;
	V* V2;
	bool IsBad;
};
