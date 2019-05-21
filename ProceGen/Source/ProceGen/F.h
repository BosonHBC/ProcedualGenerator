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
	F(class E* e1, E* e2, E* e3);
	~F();

private:
	TArray<E*> edgs;
};
