#include "Deleteedge.h"

void Deleteedge()
{
	int i, j;
	printf("请输入你要删除的边的两个顶点v1,v2\n");
	scanf("%d%d", &i, &j);
	DeleteEdge(&g1, i - 1, j - 1);
	menu();
}