// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Face( triangle ) class
 */
class PROCEGEN_API F
{
public:
	F();

	F( const class V& v1, const V& v2, const V& v3);
	~F();

	V V1;
	V V2;
	V V3;
	E E1;
	E E2;
	E E3;
};
