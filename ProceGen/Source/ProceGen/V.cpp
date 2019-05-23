// Fill out your copyright notice in the Description page of Project Settings.


#include "V.h"
V::~V()
{
}

bool V::operator == (const V& v2) const {
	return (this->X == v2.X && this->Y == v2.Y);
}