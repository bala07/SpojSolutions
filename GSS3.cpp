/* Accepted */

/*

#include<iostream>
#include<stdio.h>

using namespace std;

/*int next_int()
{
	char c=getchar_unlocked();
	int n=0;
	bool neg=false;
	if(c=='-'){ neg=true; }
	while(!('0'<=c && c<='9'))
	{
		c=getchar_unlocked();
	}
	while('0'<=c && c<='9')
	{
		n=n*10+c-'0';
		c=getchar_unlocked();
	}
	return (neg ? -n : n);
}

int a[50002];

struct s_node
{
	int sum,max_sum,max_prefix,max_suffix;
}node[500010];

void initialize(int,int,int);
s_node* query(int,int,int,int,int);
void modify(int,int,int,int,int,int);


int main()
{
	int length,q_count,choice,from,to;
	scanf("%d",&length);
	//length=next_int();
	for(int i=1;i<=length;++i)
	{
		scanf("%d",&a[i]);
		//a[i]=next_int();
	}
	initialize(1,length,1);
	scanf("%d",&q_count);
	//q_count=next_int();
	while(q_count--)
	{
		scanf("%d %d %d",&choice,&from,&to);
		//choice=next_int();
		//from=next_int();
		//to=next_int();
		if(choice)
		{
			s_node *ans=query(1,length,from,to,1);
			printf("%d\n",ans->max_sum);
		}
		else
		{
			modify(1,length,from,from,to,1);
		}
	}
	system("pause");
	return 0;
}

void initialize(int start,int end,int pos)
{
	if(start==end)
	{
		node[pos].sum=a[start];
		node[pos].max_sum=a[start];
		node[pos].max_prefix=node[pos].max_suffix=a[start];
		return;
	}
	int mid=(start+end)/2;
	initialize(start,mid,pos<<1);
	initialize(mid+1,end,(pos<<1)|1);
	node[pos].max_prefix = max(node[pos<<1].max_prefix,node[pos<<1].sum+node[(pos<<1)|1].max_prefix);
	node[pos].max_suffix = max(node[(pos<<1)|1].max_suffix,node[(pos<<1)|1].sum+node[pos<<1].max_suffix);
	node[pos].sum = node[pos<<1].sum + node[(pos<<1)|1].sum;
	node[pos].max_sum = max(node[pos<<1].max_sum,node[(pos<<1)|1].max_sum);
	node[pos].max_sum = max(node[pos].max_sum,node[pos<<1].max_suffix+node[(pos<<1)|1].max_prefix);
	return;
}

s_node* query(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start){ return NULL; }
	if(from<=start && end<=to)
	{
		s_node *ret=new s_node;
		ret->max_prefix=node[pos].max_prefix;
		ret->max_suffix=node[pos].max_suffix;
		ret->max_sum=node[pos].max_sum;
		ret->sum=node[pos].sum;
		return ret;
	}
	int mid=(start+end)/2;
	s_node *l=query(start,mid,from,to,pos<<1);
	s_node *r=query(mid+1,end,from,to,(pos<<1)|1);
	if(!l){ return r; }
	if(!r){ return l; }
	s_node *ret=new s_node;
	ret->max_prefix = max(l->max_prefix,l->sum+r->max_prefix);
	ret->max_suffix = max(r->max_suffix,l->max_suffix+r->sum);
	ret->sum = l->sum + r->sum;
	ret->max_sum = max(l->max_sum,r->max_sum);
	ret->max_sum = max(ret->max_sum,l->max_suffix+r->max_prefix);
	return ret;
}

void modify(int start,int end,int from,int to,int elem,int pos)
{
	if(from>end || to<start){ return; }
	if(start==end && from==start)
	{
		a[start]=elem;
		node[pos].max_prefix=elem;
		node[pos].max_suffix=elem;
		node[pos].max_sum=elem;
		node[pos].sum=elem;
		return;
	}
	int mid=(start+end)/2;
	modify(start,mid,from,to,elem,pos<<1);
	modify(mid+1,end,from,to,elem,(pos<<1)|1);
	node[pos].max_prefix = max(node[pos<<1].max_prefix,node[pos<<1].sum+node[(pos<<1)|1].max_prefix);
	node[pos].max_suffix = max(node[(pos<<1)|1].max_suffix,node[(pos<<1)|1].sum+node[pos<<1].max_suffix);
	node[pos].sum = node[pos<<1].sum + node[(pos<<1)|1].sum;
	node[pos].max_sum = max(node[pos<<1].max_sum,node[(pos<<1)|1].max_sum);
	node[pos].max_sum = max(node[pos].max_sum,node[pos<<1].max_suffix+node[(pos<<1)|1].max_prefix);
	return;
}
*/
