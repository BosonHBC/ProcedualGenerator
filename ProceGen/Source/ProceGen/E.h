// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Edge class
 */
class PROCEGEN_API E
{
public:
	E();
	E(class V* i_v1, V* i_v2) : v1(i_v1), v2(i_v2);

	void PushFaceToEdge(class F* i_other);

	~E();
private:
	V* v1;
	V* v2;
	F* f1;
	F* f2;
};
