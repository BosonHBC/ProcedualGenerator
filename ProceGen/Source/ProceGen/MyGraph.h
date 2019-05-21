// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class PROCEGEN_API MyGraph
{
public:
	MyGraph();
	~MyGraph();

	void PushPointToGraph(FVector2D worldPos);
	void CreateBoundaryFaces(class AMapGeneartor* i_MainRoom);

private:
	TArray<class F*> faces;
	TArray<class E*> edges;
	TArray<class V*> vertexs;

};
