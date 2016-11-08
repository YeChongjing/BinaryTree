
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

void CreateBt1(BiTree &T);//1.模仿先序遍历建立二叉树
void InOrder(BiTNode *T) ;//2.中序遍历二叉树
int TreeDepth(BiTNode *T); //3.求二叉树的深度
int NodeCount(BiTNode *T);//4.求二叉树总结点数
BiTNode *CreateBt2();//5.按二叉树性质5建立二叉树
void PreOrder(BiTNode *T); //6.先序遍历二叉树
void PostOrder(BiTNode *T); //7.后序遍历二叉树
void LevelOrder(BiTNode *T); //8.按层遍历二叉树
int LeafNodeCount(BiTNode *T); //9.求二叉树叶子结点数
int D1NodeCount(BiTNode * bt);//10.求二叉树度为1的结点数
int D2NodeCount(BiTNode * bt);//11.求二叉树度为2的结点数
void FindBtree(BiTNode *T,DataType x);//12.查找二叉树中的结点
void ClearBtree(BiTNode *T); //13.清除二叉树
void PrintBtree(BiTNode *T);//14.输出二叉树
