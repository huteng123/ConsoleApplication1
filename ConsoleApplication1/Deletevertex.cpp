#include "Deletevertex.h"

void Deletevertex()
{
	int i;
	printf("��������Ҫɾ�����ǵڼ�������v\n");
	printf("��˧��\n")��
	scanf("%d", &i);
	DeleteVertex(&g1, i);
    isExist[i] = 1;
	menu();
}
