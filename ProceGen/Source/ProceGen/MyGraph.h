// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class PROCEGEN_API MyGraph
{
public:
	MyGraph(TArray<class ARoomBase*> _List, const class UWorld* _context);
	MyGraph();
	~MyGraph();

	void BuildBoundaryTriangle();
	void DebugDrawAllFace();
private:
	TArray<class ARoomBase*> listOfMainRooms;

	TArray<class F*> faces;
	TArray<class E*> edges;
	TArray<class V*> vertexs;
	const UWorld* Context;

};
