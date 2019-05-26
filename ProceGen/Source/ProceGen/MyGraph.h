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
	void TrianglateVertex(int16 vertexID);

	// Denig Function
	void DebugDrawAllVertex();
	void DebugDrawAllFace();

	// Getter
	FORCEINLINE TArray<class F*> GetFaces() const { return faces; }
	FORCEINLINE TArray<class E*> GetEdges() const { return edges; }
	FORCEINLINE TArray<class V*> GetVertexs() const { return vertexs; }

private:
	TArray<class ARoomBase*> listOfMainRooms;

	TArray<class F*> faces;
	TArray<class E*> edges;
	TArray<class V*> vertexs;
	const UWorld* Context;

};
