// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Vertex class
 */
class PROCEGEN_API V
{
public:
	V() :X(0), Y(0) {};
	V(float i_X, float i_Y) : X(i_X), Y(i_Y) {}
	V(const FVector2D i_V2D) : X(i_V2D.X), Y(i_V2D.Y) {}
	V(const V&i_other) : X(i_other.X), Y(i_other.Y) {}
	~V();

	float dist2(const V& v) const {
		float dx = X - v.X;
		float dy = Y - v.Y;

		return dx * dx* +dy * dy;
	}
	float dist(const V& v) const { return FMath::Sqrt(dist2(v)); }

	float norm2() const { return X * X + Y * Y; }

	bool operator == (const V& v2) const;
	float X;
	float Y;

};
