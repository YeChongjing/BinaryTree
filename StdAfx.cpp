
#include "stdafx.h"

//1.ģ�������������������
void CreateBt1(BiTree &T){
	int x;
	cout<<"�����뵱ǰ�ڵ��ֵ��";
	cin>>x;
	if(x==0)
		T = NULL;
	else{
		T=(BiTNode *)malloc(sizeof(BiTNode));
		T->data = x;
		CreateBt1(T->left);
		CreateBt1(T->right);
	}
}

//2�������������
void InOrder(BiTNode *T){
	if(T->left)
		InOrder(T->left);
	cout<<T->data<<" ";
	if(T->right)
		InOrder(T->right);
}

//3.������������
int TreeDepth(BiTNode *T){
	int HL,HR,Max;
	if(T==NULL)
		return 0;
	else
	{
		HL = TreeDepth(T->left);
		HR = TreeDepth(T->right);
		Max = HL >= HR?HL:HR;
		return Max+1;
	}
}

//4.��������ܽ����
int NodeCount(BiTNode *T){
	int count;
	if(T==NULL)
		count = 0;
	else
		count = 1+NodeCount(T->left)+NodeCount(T->right);
	return count;
}

//5.������������5����������
BiTNode *CreateBt2(){
	BiTNode *t,*p,*v[20];
	int i,j;
	DataType e;
	cout<<"�������i��  ";
	cin>>i;
	cout<<"����i������e��  ";
	cin>>e;
	while(i!=0 && e!=0){
		p = (BiTree)malloc(sizeof(BiTNode));
		p->data = e;
		p->left = NULL;
		p->right = NULL;
		v[i] = p;
		if(i==1){
			t = p;
		}else{
			j = i/2;
			if(j%2==0) v[j]->left = p;
			else v[j]->right = p;
		}
		cout<<"�������i��  ";
		cin>>i;
		cout<<"����i������e��  ";
		cin>>e;
	}
	return (t);
}

//6.�������������
void PreOrder(BiTNode *T){
	cout<<T->data<<" ";
	if(T->left)
		PreOrder(T->left);
	if(T->right)
		PreOrder(T->right);
}

//7.�������������
void PostOrder(BiTNode *T){
	if(T->left)
		PostOrder(T->left);
	if(T->right)
		PostOrder(T->right);
	cout<<T->data<<" ";
}

//8.�������������
void LevelOrder(BiTNode *T){
	BiTree Queue[100],p;
	int front=0,rear=0;
	if(T){
		p = T;
		Queue[rear] = p;
		rear = (rear+1)%20;
		while(front != rear){
			p = Queue[front];
			cout<<p->data<<" ��";
			front = (front+1)%100;
			if(p->left){
				Queue[rear] = p->left;
				rear = (rear+1)%100;
			}
			if(p->right){
				Queue[rear] = p->right;
				rear = (rear+1)%100;
			}
		}
	}
}

//9.�������Ҷ�ӽ����
int LeafNodeCount(BiTNode *T){
	int LeafCount;
	if(T==NULL)
		LeafCount=0;
	else if(T->left==NULL && T->right==NULL)
		LeafCount = 1;
	else
		LeafCount = LeafNodeCount(T->right)+LeafNodeCount(T->left);
	return LeafCount;
}

//10.���������Ϊ1�Ľ����
int D1NodeCount(BiTNode *T){
	int node;
	if(T==NULL)
		node = 0;
	else if((T->left != NULL && T->right == NULL) || (T->left == NULL && T->right != NULL))
			node =1;
	else node = D1NodeCount(T->left) + D1NodeCount(T->right);
	return node;
}
//11.���������Ϊ2�Ľ����
int D2NodeCount(BiTNode *T){
	int node;
	if((T->left) && (T->right))
		node = 1 + D2NodeCount(T->left) + D2NodeCount(T->right);
	else node = 0;
	return node;	
}

//12.���Ҷ������еĽ��
 void FindBtree(BiTNode *T,DataType x){
	if(T!=NULL){
		if(T->data == x) cout<<"Finded It !";
		FindBtree(T->left,x);
		FindBtree(T->right,x);
	}
}

 //13.���������
void ClearBtree(BiTNode *T){
	if(T == NULL) return ;
	else{
		ClearBtree(T->left);
		ClearBtree(T->right);
		free(T);
	}
}

//14.���������
void PrintBtree(BiTNode *T){
	if(T!=NULL){
		cout<<T->data<<" ";
		PrintBtree(T->left);
		PrintBtree(T->right);
	}
}