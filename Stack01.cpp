
#include "stdafx.h"


int main()
{
	BiTree T;
	int k,count;
	do{
		cout<<"\n";
		cout<<"\n    1.ģ�������������������";//ok
		cout<<"\n    2.����ݹ����������";//ok
		cout<<"\n    3.�����������";//ok
		cout<<"\n    4.�������н�����";//ok                  
		cout<<"\n    5.������������5����������"; //ok		
		cout<<"\n    6.����ݹ����������";//ok 
		cout<<"\n    7.����ݹ����������"; //ok
		cout<<"\n    8.��α���������"; //ok		
		cout<<"\n    9.��������Ҷ�ӽ�����";		
		cout<<"\n    10.�������ж�Ϊ1�Ľ�����";//ok	
		cout<<"\n    11.�������ж�Ϊ2�Ľ�����";//ok
		cout<<"\n    12.���ҽ��";//ok
		cout<<"\n    13.���������";//ok
		cout<<"\n    14.���������";//ok
		cout<<"\n    15.������������";//ok
		cout<<"\n======================================";
		cout<<"\n     ����������ѡ�� (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15)"; 
	   cin>>k;
	   switch(k){
	   case 1:CreateBt1(T);break;
	   case 2:
			cout<<"��������Ľ���ǣ�\n";
		    InOrder(T);break;		   
	   case 3:cout<<"\n���������Ϊ:  "<<TreeDepth(T); break;   
	   case 4:
		   cout<<"\n�������н���ܸ���Ϊ:  "<<NodeCount(T);break;	   
	   case 5:T=CreateBt2();break;   
	   case 6:
		   cout<<"ǰ������Ľ���ǣ�\n";
		   PreOrder(T);break;   
	   case 7:
			cout<<"��������Ľ���ǣ�\n";
		    PostOrder(T);break;	   
	   case 8:
		   cout<<"��α�����������\n";
		   LevelOrder(T);break;
	   case 9: cout<<"\n�����ڵ����:  "<<LeafNodeCount(T);break;	   
	   case 10:cout<<"\n����Ϊ1�Ľڵ����: "<<D1NodeCount(T);break;
	   case 11:cout<<"\n����Ϊ2�Ľڵ����:"<<D2NodeCount(T);break;	   
	   case 12:cout<<"�����Ƿ����ֵΪe�Ľڵ�(�ҵ�1��û�ҵ�0):  ";
				  DataType x;
				  cin>>x;
				  FindBtree(T,x);
				  break;
	   case 13:
		   cout<<"����������ɹ���";
		   ClearBtree(T);break; 
	   case 14:PrintBtree(T);break; 
	   case 15:exit(0);
	   }
	   cout<<"\n ----------------";
	}while(k>=1 && k<=15);
	cout<<"\n               �ټ���";
	 cout<<"\n  ��س�����������";

	return 0;
}
