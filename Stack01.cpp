
#include "stdafx.h"


int main()
{
	BiTree T;
	int k,count;
	do{
		cout<<"\n";
		cout<<"\n    1.模仿先序遍历建立二叉树";//ok
		cout<<"\n    2.中序递归遍历二叉树";//ok
		cout<<"\n    3.计算树的深度";//ok
		cout<<"\n    4.计算树中结点个数";//ok                  
		cout<<"\n    5.按二叉树性质5建立二叉树"; //ok		
		cout<<"\n    6.先序递归遍历二叉树";//ok 
		cout<<"\n    7.后序递归遍历二叉树"; //ok
		cout<<"\n    8.层次遍历二叉树"; //ok		
		cout<<"\n    9.计算树中叶子结点个数";		
		cout<<"\n    10.计算树中度为1的结点个数";//ok	
		cout<<"\n    11.计算树中度为2的结点个数";//ok
		cout<<"\n    12.查找结点";//ok
		cout<<"\n    13.清除二叉树";//ok
		cout<<"\n    14.输出二叉树";//ok
		cout<<"\n    15.结束程序运行";//ok
		cout<<"\n======================================";
		cout<<"\n     请输入您的选择 (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15)"; 
	   cin>>k;
	   switch(k){
	   case 1:CreateBt1(T);break;
	   case 2:
			cout<<"中序遍历的结果是：\n";
		    InOrder(T);break;		   
	   case 3:cout<<"\n此树的深度为:  "<<TreeDepth(T); break;   
	   case 4:
		   cout<<"\n计算树中结点总个数为:  "<<NodeCount(T);break;	   
	   case 5:T=CreateBt2();break;   
	   case 6:
		   cout<<"前序遍历的结果是：\n";
		   PreOrder(T);break;   
	   case 7:
			cout<<"后序遍历的结果是：\n";
		    PostOrder(T);break;	   
	   case 8:
		   cout<<"层次遍历二叉树：\n";
		   LevelOrder(T);break;
	   case 9: cout<<"\n此树节点个数:  "<<LeafNodeCount(T);break;	   
	   case 10:cout<<"\n度数为1的节点个数: "<<D1NodeCount(T);break;
	   case 11:cout<<"\n度数为2的节点个数:"<<D2NodeCount(T);break;	   
	   case 12:cout<<"查找是否存在值为e的节点(找到1，没找到0):  ";
				  DataType x;
				  cin>>x;
				  FindBtree(T,x);
				  break;
	   case 13:
		   cout<<"清除二叉树成功！";
		   ClearBtree(T);break; 
	   case 14:PrintBtree(T);break; 
	   case 15:exit(0);
	   }
	   cout<<"\n ----------------";
	}while(k>=1 && k<=15);
	cout<<"\n               再见！";
	 cout<<"\n  打回车键，继续。";

	return 0;
}
