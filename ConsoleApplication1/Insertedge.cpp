#include "Insertedge.h"

void Insertedge()
{
	int i, j, w;
	printf("请输入你要添加的边的两个顶点和其权直v1,v2,w\n");
	scanf("%d%d%d", &i, &j, &w);
	InsertEdge(&g1, i - 1, j - 1, w);
	menu();
}