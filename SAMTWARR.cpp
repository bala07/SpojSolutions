/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

/*int next_int()
{
	char ch;
	int n=0;
	bool neg=false;
	ch=getchar_unlocked();
	if(ch=='-'){ neg=true;  }
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return neg ? -n : n;
}

struct s_node
{
	int sum[2];
	bool update;
}node[1000000];

int a[10001],b[10001];

int value(int,int);
int query(int,int,int,int,int,int);
void modify(int,int,int,int,int,int,int);
void swap(int,int,int,int,int);


int main()
{
	int n,q_count,choice,arr,from,to,index,new_value;
	scanf("%d %d",&n,&q_count);
	//n=next_int();
	//q_count=next_int();
	for(int i=0;i<q_count;++i)
	{
		scanf("%d",&choice);
		//choice=next_int();
		if(choice==0)
		{
			scanf("%d %d %d",&arr,&from,&to);
			//arr=next_int();
			//from=next_int();
			//to=next_int();
			int ans=query(1,n,from+1,to+1,1,arr);
			printf("%d\n",ans);
		}
		else if(choice==1)
		{
			scanf("%d %d %d",&arr,&index,&new_value);
			//arr=next_int();
			//index=next_int();
			//new_value=next_int();
			modify(1,n,index+1,index+1,1,new_value,arr);
		}
		else
		{
			scanf("%d %d",&from,&to);
			//from=next_int();
			//to=next_int();
			swap(1,n,from+1,to+1,1);
		}
	}
	system("pause");
	return 0;
}

int value(int pos,int arr)
{
	if(node[pos].update)
	{
		if(arr==0){ return node[pos].sum[1]; }
		return node[pos].sum[0];
	}
	return node[pos].sum[arr];
}

int query(int start,int end,int from,int to,int pos,int arr)
{
	if(from>end || to<start){ return 0; }
	if(from<=start && end<=to)
	{
		return value(pos,arr);
	}
	if(node[pos].update)
	{
		node[pos].update=false;
		node[pos<<1].update=!node[pos<<1].update;
		node[(pos<<1)|1].update=!node[(pos<<1)|1].update;
	}
	int mid=(start+end)/2;
	int l=query(start,mid,from,to,pos<<1,arr);
	int r=query(mid+1,end,from,to,(pos<<1)|1,arr);
	node[pos].sum[0]=value(pos<<1,0) + value((pos<<1)|1,0);
	node[pos].sum[1]=value(pos<<1,1) + value((pos<<1)|1,1);
	return l+r;
}

void modify(int start,int end,int from,int to,int pos,int new_value,int arr)
{
	if(from>end || to<start){ return; }
	if(start==end && start==from)
	{
		if(node[pos].update)
		{
			node[pos].update=false;
			int temp=node[pos].sum[0];
			node[pos].sum[0]=node[pos].sum[1];
			node[pos].sum[1]=temp;
		}
		node[pos].sum[arr]=new_value;
		return;
	}
	if(node[pos].update)
	{
		node[pos].update=false;
		node[pos<<1].update=!node[pos<<1].update;
		node[(pos<<1)|1].update=!node[(pos<<1)|1].update;
	}
	int mid=(start+end)/2;
	modify(start,mid,from,to,pos<<1,new_value,arr);
	modify(mid+1,end,from,to,(pos<<1)|1,new_value,arr);
	node[pos].sum[0]=value(pos<<1,0)+value((pos<<1)|1,0);
	node[pos].sum[1]=value(pos<<1,1)+value((pos<<1)|1,1);
	return;
}

void swap(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start){ return; }
	if(from<=start && end<=to)
	{
		node[pos].update=!node[pos].update;
		return;
	}
	if(node[pos].update)
	{
		node[pos].update=false;
		node[pos<<1].update=!node[pos<<1].update;
		node[(pos<<1)|1].update=!node[(pos<<1)|1].update;
	}
	int mid=(start+end)/2;
	swap(start,mid,from,to,pos<<1);
	swap(mid+1,end,from,to,(pos<<1)|1);
	node[pos].sum[0]=value(pos<<1,0) + value((pos<<1)|1,0);
	node[pos].sum[1]=value(pos<<1,1) + value((pos<<1)|1,1);
	return;
}


*/
