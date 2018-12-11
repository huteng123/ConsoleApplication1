#include "Insertvertex.h"

void Insertvertex() {
	DataType c;
	printf("请输入你要添加的顶点\n");
	scanf("%d", &c);
	InsertVertex(&g1, c);
	int index = g1.vertices.size;
	a[index - 1] = index;
	DataType b;
	int value;
	printf("请输入你要添加与该点相连的边和权重,按0结束输入\n");
	while (1) {
		scanf("%d", &b);
		if (b == 0)   break;
		scanf("%d", &value);
		InsertEdge(&g1, c - 1, b - 1, value);
	}
	menu();
}