#pragma once
#include <stdio.h>
#define MaxSize 20
typedef int DataType;
typedef struct
{
	DataType list[MaxSize];
	int size;
}SeqList;
void ListInitiate(SeqList *);
int ListLength(SeqList);
int ListInsert(SeqList *, int, DataType);
int ListDelete(SeqList *, int, DataType *);
int ListGet(SeqList, int, DataType *);
