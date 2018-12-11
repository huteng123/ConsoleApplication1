// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#pragma once
#include "seqlist.h"
#include "graph.h"
#include <malloc.h>
#include "menu.h"
#pragma warning(suppress : 4477)
#pragma warning(disable : 4996)
#define scanf scanf_s
#define fscanf fscanf_s
AdjMGraph g1;
int a[MaxSize];
RowColWeight rcw[100];



void putList()
{
	//我艾盖汗国iGig
	int xxx, j;
	int distance[100], path[100];
	printf("请输入你要生成的路由表的起始路由器是第几个路由器v\n");
	scanf("%d", &xxx);
	xxx--;
	Dijkstra(&g1, xxx, distance, path);
	FILE *fp;
	printf("目的路由  下一跳路由\n");
	fp = fopen("luyoubiao.txt", "w");
	for (int i = 0; i < g1.vertices.size; i++)
	{
		if (i == xxx) continue;
		j = i;
		while (path[j] != xxx)
		{
			j = path[j];
			if (j == -1) break;
		}
		printf("%5d%12d\n", i + 1, j + 1);
		fprintf(fp, "%5d%12d\n", i + 1, j + 1);
	}
	fclose(fp);
	printf("从顶点%d到其他各顶点的最短距离为：\n", a[xxx]);
	for (j = 0; j < g1.vertices.size; j++) {
		if (j == xxx) continue;
		printf("到顶点%d的最短距离为%d\n", a[j], distance[j]);
	}
	menu();

}








int main()
{
	//	AdjMGraph g1;
	int i, j, k;
	FILE *fp;           //读入文件
//	int a[MaxSize];
  //  RowColWeight rcw[100];

	fp = fopen("tuoputu10.txt","r");

	fscanf(fp, "%d", &i);
	for (k = 0; k < i; k++)
	{
		fscanf(fp, "%d", &a[k]);
	}
	fscanf(fp, "%d", &j);
	for (k = 0; k < j; k++)
	{
		fscanf(fp, "%d%d%d", &rcw[k].row, &rcw[k].col, &rcw[k].weight);
	}
	fclose(fp);
	GraphInitiate(&g1);
	CreatGraph(&g1, a, i, rcw, j);
	menu();

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
