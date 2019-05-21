// Fill out your copyright notice in the Description page of Project Settings.


#include "V.h"
#include "E.h"
V::V()
{
}

V::~V()
{
}

void V::PushEdgeToVertex(E* i_other) 
{ 
	edgs.AddUnique(i_other); 

}