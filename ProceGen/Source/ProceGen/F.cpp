// Fill out your copyright notice in the Description page of Project Settings.


#include "F.h"
#include "E.h"
#include "V.h"
#include "Engine/World.h"
F::F()
{
}
F::F(  V* v1,   V* v2,  V* v3):
	V1(v1), V2(v2), V3(v3),
	E1(new E(v1,v2)), E2(new E(v2, v3)), E3(new E(v3, v1)), IsBad(false)
{}

bool F::IsContainVertex(V* i_other) const {
	return *V1 == *i_other || *V2 == *i_other || *V3 == *i_other;
}
bool F::CircumCircleContains(const V* v) const
{
	float ab = V1->norm2();
	float cd = V2->norm2();
	float ef = V3->norm2();

	float circum_x = (ab * (V3->Y - V2->Y) + cd * (V1->Y - V3->Y) + ef * (V2->Y - V1->Y)) / (V1->X * (V3->Y - V2->Y) + V2->X * (V1->Y - V3->Y) + V3->X * (V2->Y - V1->Y));
	float circum_y = (ab * (V3->X - V2->X) + cd * (V1->X - V3->X) + ef * (V2->X - V1->X)) / (V1->Y * (V3->X - V2->X) + V2->Y * (V1->X - V3->X) + V3->Y * (V2->X - V1->X));

	V circum(circum_x/2.0f, circum_y/2.0f);
	float circum_radius = V1->dist2(circum);
	float dist = v->dist2(circum);
	return dist <= circum_radius;
}

void F::DebugDrawFace(const UWorld* context) const {

	E1->DebugDrawEdge(context);
	E2->DebugDrawEdge(context);
	E3->DebugDrawEdge(context);
}

bool F::operator== (F* f) const {
	return	(*V1 == *(f->V1) ||*V1 ==*(f->V2) ||*V1 ==*(f->V3)) &&
		(*V2 == *(f->V1) ||*V2 ==*(f->V2) ||*V2 ==*(f->V3)) &&
		(*V3 == *(f->V1) ||*V3 ==*(f->V2) ||*V3 ==*(f->V3));
}

F::~F()
{
}
