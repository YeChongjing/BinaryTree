
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<iostream>
using namespace std;
typedef int DataType;
#define NULL 0

typedef struct BiTNode{
	DataType data;
	struct BiTNode *left;
	struct BiTNode *right;
}BiTNode,* BiTree;

void CreateBt1(BiTree &T);//1.ģ�������������������
void InOrder(BiTNode *T) ;//2.�������������
int TreeDepth(BiTNode *T); //3.������������
int NodeCount(BiTNode *T);//4.��������ܽ����
BiTNode *CreateBt2();//5.������������5����������
void PreOrder(BiTNode *T); //6.�������������
void PostOrder(BiTNode *T); //7.�������������
void LevelOrder(BiTNode *T); //8.�������������
int LeafNodeCount(BiTNode *T); //9.�������Ҷ�ӽ����
int D1NodeCount(BiTNode * bt);//10.���������Ϊ1�Ľ����
int D2NodeCount(BiTNode * bt);//11.���������Ϊ2�Ľ����
void FindBtree(BiTNode *T,DataType x);//12.���Ҷ������еĽ��
void ClearBtree(BiTNode *T); //13.���������
void PrintBtree(BiTNode *T);//14.���������
