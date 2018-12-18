#include "menu.h"

void menu()
{
	//gaidongyrr
	int p;
	void putList();
	void Deletevertex();
	void Deleteedge();
	void Insertedge();
	void Insertvertex();
	printf("					   路由表生成						  \n");
	printf("					  请选择相应实现功能			   	  \n");
	printf("					  1.路由表输出并打印				  \n");
	printf("					  2.删除路由器						  \n");
	printf("					  3.删除边							  \n");
	printf("					  4.添加边							  \n");
	printf("					  5.添加路由器						  \n");
	printf("					  6.退出系统						  \n");
	printf("					  请输入你的选择（1~6）                 \n");
	scanf("%d", &p);
	if (p < 1 || p>6)
	{
		printf("\n\n输入序号不属于菜单，请重新输入\n\n");
		p = 6;
	}
	switch (p)
	{
	case 1:putList(); break;      //路由表输出并打印
	case 2:Deletevertex(); break;   //删除节点
	case 3:Deleteedge(); break;   //删除边
	case 4:Insertedge(); break;   //添加边 
	case 5:Insertvertex(); break;  //添加点 
	case 6:exit(0); break;      //退出
	case 7:menu();
	}
}