// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGraph.h"
#include "MapGeneartor.h"
#include "RoomBase.h"

MyGraph::MyGraph()
{
}

MyGraph::~MyGraph()
{
}
void MyGraph::CreateBoundaryFaces(AMapGeneartor* i_MapGen)
{
	TArray<ARoomBase*> m_MainRoom(i_MapGen->MainRoomList);
	m_MainRoom.Sort([](const ARoomBase* _A, const ARoomBase* _B) {
		return _A->GetWorldLocation().X < _B->GetWorldLocation().X;
	});
	float minX = m_MainRoom[0]->GetWorldLocation().X;
	float maxX = m_MainRoom[m_MainRoom.Num()-1]->GetWorldLocation().X;
	m_MainRoom.Sort([](const ARoomBase* _A, const ARoomBase* _B) {
		return _A->GetWorldLocation().Y < _B->GetWorldLocation().Y;
	});
	float minY = m_MainRoom[0]->GetWorldLocation().Y;
	float maxY = m_MainRoom[m_MainRoom.Num() - 1]->GetWorldLocation().Y;
}
