// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGraph.h"
#include "RoomBase.h"
#include "Engine/World.h"
#include "V.h"
#include "E.h"
#include "F.h"

MyGraph::MyGraph()
{
}
MyGraph::MyGraph(TArray<ARoomBase*> _List, const UWorld* _context) :
	listOfMainRooms(_List), Context(_context)
{
}
MyGraph::~MyGraph()
{
}
void MyGraph::BuildBoundaryTriangle() {

	// Determinate the super triangle
	float minX = listOfMainRooms[0]->GetWorldLocation().X;
	float minY = listOfMainRooms[0]->GetWorldLocation().Y;
	float maxX = minX;
	float maxY = minY;

	for (auto & room : listOfMainRooms)
	{
		// push the center of room to the vertex list
		vertexs.Add(new V(room->GetWorldLocation()));
	}
	for (auto &v : vertexs)
	{
		if (v->X < minX) minX = v->X;
		if (v->Y < minY) minY = v->Y;
		if (v->X > maxX) maxX = v->X;
		if (v->Y > maxY) maxY = v->Y;
	}

	// Length
	float dx = maxX - minX;
	float dy = maxY - minY;
	// Coordinate
	float midx = (minX + maxX) / 2.0f;
	float midy = (minY + maxY) / 2.0f;

	// Circumcircle of the rectangle
	float r = FMath::Sqrt((dx / 2 * dx / 2) + (dy / 2 * dy / 2));

	V* L = new V(midx - r / FMath::Tan(FMath::DegreesToRadians(30)), midy - r);
	V* T = new V(midx, midy + r / FMath::Sin(FMath::DegreesToRadians(30)));
	V* R = new V(midx + r / FMath::Tan(FMath::DegreesToRadians(30)), midy - r);

	UE_LOG(LogTemp, Warning, TEXT("L: (%f, %f), T: (%f, %f), R: (%f, %f)"), L->X, L->Y, T->X, T->Y, R->X, R->Y);

	// Push the super triangle into the list
	F* superTriangle = new F(L, T, R);
	faces.AddUnique(superTriangle);
}
void MyGraph::TrianglateVertex(int16 vertexID) {
	V* v = vertexs[vertexID];

}

void MyGraph::DebugDrawAllFace() {

	for (auto& face : faces) {
		face->DebugDrawFace(Context);
	}
}

void MyGraph::DebugDrawAllVertex() {
	for (auto& vertex : vertexs) {
		vertex->DebugDrawVertex(Context);
	}
}

