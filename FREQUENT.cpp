/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

int num[100010];

struct node
{
	int l_value,l_count,r_value,r_count,best,b_count;
}tree[1000010];

void initialize(int,int,int);
node query(int,int,int,int,int);

/*int next_int()
{
	char ch;
	int n=0;
	bool neg=false;
	ch=getchar_unlocked();
	if(ch=='-'){ neg=true; }
	while(!('0'<=ch && ch<='9'))
	{ 
		ch=getchar_unlocked();
	}
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return (neg ? -n :n);
}

int main()
{
	int length,q_count,from,to;
	scanf("%d",&length);
	//length=next_int();
	while(length)
	{
		scanf("%d",&q_count);
		//q_count=next_int();
		for(int i=1;i<=length;++i)
		{
			scanf("%d",&num[i]);
			//num[i]=next_int();
		}
		initialize(1,length,1);
		while(q_count--)
		{
			scanf("%d %d",&from,&to);
			//from=next_int();
			//to=next_int();
			node ans=query(1,length,from,to,1);
			printf("%d\n",ans.b_count);
		}
		scanf("%d",&length);
		//length=next_int();
	}
	system("pause");
	return 0;
}

void initialize(int start,int end,int pos)
{
	if(start==end)
	{
		tree[pos].best=tree[pos].l_value=tree[pos].r_value=num[start];
		tree[pos].l_count=tree[pos].r_count=tree[pos].b_count=1;
		return;
	}
	int mid=(start+end)/2;
	initialize(start,mid,pos<<1);
	initialize(mid+1,end,(pos<<1)|1);
	tree[pos].l_value=tree[pos<<1].l_value;
	tree[pos].l_count=tree[pos<<1].l_count;
	tree[pos].r_value=tree[(pos<<1)|1].r_value;
	tree[pos].r_count=tree[(pos<<1)|1].r_count;
	if(tree[pos<<1].b_count>tree[(pos<<1)|1].b_count)
	{
		tree[pos].best=tree[pos<<1].best;
		tree[pos].b_count=tree[pos<<1].b_count;
	}
	else
	{
		tree[pos].best=tree[(pos<<1)|1].best;
		tree[pos].b_count=tree[(pos<<1)|1].b_count;
	}
	if(tree[pos<<1].r_value==tree[(pos<<1)|1].l_value && tree[pos<<1].r_count+tree[(pos<<1)|1].l_count>tree[pos].b_count)
	{
		tree[pos].best=tree[pos<<1].r_value;
		tree[pos].b_count=tree[pos<<1].r_count + tree[(pos<<1)|1].l_count;
	}
	if(tree[pos].l_value==tree[pos].best)
	{
		tree[pos].l_count=tree[pos].b_count;
	}
	if(tree[pos].r_value==tree[pos].best)
	{
		tree[pos].r_count=tree[pos].b_count;
	}
	return;
}

node query(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start)
	{
		node ret={0};
		return ret;
	}
	if(from<=start && end<=to)
	{
		node ret=tree[pos];
		return ret;
	}
	int mid=(start+end)/2;
	node l=query(start,mid,from,to,pos<<1);
	node r=query(mid+1,end,from,to,(pos<<1)|1);
	if(!l.b_count){ return r; }
	if(!r.b_count){ return l; }
	node ret;
	ret.l_value=l.l_value;
	ret.l_count=l.l_count;
	ret.r_value=r.r_value;
	ret.r_count=r.r_count;
	if(l.b_count>r.b_count)
	{
		ret.best=l.best;
		ret.b_count=l.b_count;
	}
	else
	{
		ret.best=r.best;
		ret.b_count=r.b_count;
	}
	if(l.r_value==r.l_value && l.r_count+r.l_count>ret.b_count)
	{
		ret.best=l.r_value;
		ret.b_count=l.r_count+r.l_count;
	}
	if(ret.l_value==ret.best){ ret.l_count=ret.b_count; }
	if(ret.r_value==ret.best){ ret.r_count=ret.b_count; }
	return ret;
}

*/



