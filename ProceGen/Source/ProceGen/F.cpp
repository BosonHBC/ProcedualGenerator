// Fill out your copyright notice in the Description page of Project Settings.


#include "F.h"
#include "E.h"

F::F()
{
}
F::F(class E* e1, E* e2, E* e3) {
	// Three edges has to be in counter-clockwise order
	edgs.AddUnique(e1);
	edgs.AddUnique(e2);
	edgs.AddUnique(e3);

	e1->PushFaceToEdge(this);
	e2->PushFaceToEdge(this);
	e3->PushFaceToEdge(this);
}

F::~F()
{
}
