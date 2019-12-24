#include "Deletevertex.h"

void Deletevertex()
{
	int i;
	printf("请输入你要删除的是第几个顶点v\n");
	scanf("%d", &i);
	DeleteVertex(&g1, i);
    isExist[i] = 0;
	menu();
}
