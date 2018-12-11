#pragma once
#include "seqlist.h"
#include <stdlib.h>
#define MaxWeight 10000

typedef struct
{
	SeqList vertices;  //存放顶点的顺序表
	int edge[MaxSize][MaxSize];//存放边的邻接矩阵
	int numOfEdges;  //边的数目
}AdjMGraph;//图的结构体定义

typedef struct
{
	int row;  //行下标
	int col;  //列下标 
	int weight;  //权值
}RowColWeight;//边信息结构体定义

void GraphInitiate(AdjMGraph *G);
void InsertVertex(AdjMGraph *G, DataType vertex);
void InsertEdge(AdjMGraph *G, int v1, int v2, int weight);
void DeleteEdge(AdjMGraph *G, int v1, int v2);
void DeleteVertex(AdjMGraph *G, int v);
int GetFirstVex(AdjMGraph G, int v);
int GetNextVex(AdjMGraph G, int v1, int v2);
void CreatGraph(AdjMGraph *G, DataType v[], int n, RowColWeight W[], int e);
void Dijkstra(AdjMGraph *G, int v0, int distance[], int path[]);
