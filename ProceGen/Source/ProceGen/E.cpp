// Fill out your copyright notice in the Description page of Project Settings.


#include "E.h"
#include "V.h"
#include "F.h"
E::E()
{
}
E::E(V* i_v1, V* i_v2) 
	: v1(i_v1), v2(i_v2)
{
	v1->PushEdgeToVertex(this);
	v2->PushEdgeToVertex(this);
}

E::~E()
{
}

void E::PushFaceToEdge(F* i_other) {
	if (f1 == nullptr)
		f1 = i_other;
	else if (f2 == nullptr)
		f2 = i_other;
}
