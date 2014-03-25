/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

/*int next_int()
{
	char ch;
	int n=0;
	bool negative=false;
	ch=getchar_unlocked();
	if(ch=='-'){ negative=true; }
	while(!('0'<=ch && ch<='9'))
	{
		ch=getchar_unlocked();
	}
	while('0'<=ch && ch<='9')
	{
		n=(n*10)+ch-'0';
		ch=getchar_unlocked();
	}
	return (negative ? -n : n);
}

struct Node
{
	long l_sum,r_sum,sum,max_sum;
}s_tree[10*50000];

long a[50002];

void initialize(int,int,int);
Node* query(int,int,int,int,int);

int main()
{
	int n;
	int q_count,from,to;
	Node *ans;
	scanf("%d",&n);
	//n=next_int();
	for(int i=1;i<=n;++i)
	{
		scanf("%d",&a[i]);
		//a[i]=next_int();
	}
	initialize(1,n,1);
	scanf("%d",&q_count);
	//q_count=next_int();
	while(q_count--)
	{
		scanf("%d %d",&from,&to);
		//from=next_int();
		//to=next_int();
		ans=query(1,n,from,to,1);
		printf("%ld\n",ans->max_sum);
	}
	system("pause");
	return 0;
}

void initialize(int start,int end,int pos)
{
	if(start==end)
	{
		s_tree[pos].l_sum=a[start];
		s_tree[pos].r_sum=a[start];
		s_tree[pos].sum=a[start];
		s_tree[pos].max_sum=a[start];
		return;
	}
	int mid=(start+end)/2;
	initialize(start,mid,pos<<1);
	initialize(mid+1,end,pos<<1|1);
	s_tree[pos].l_sum = max(s_tree[pos<<1].l_sum,s_tree[pos<<1].sum+s_tree[pos<<1|1].l_sum);
	s_tree[pos].r_sum = max(s_tree[pos<<1|1].r_sum,s_tree[pos<<1].r_sum+s_tree[pos<<1|1].sum);
	s_tree[pos].sum = s_tree[pos<<1].sum + s_tree[pos<<1|1].sum;
	s_tree[pos].max_sum = max(s_tree[pos<<1].max_sum,s_tree[pos<<1|1].max_sum);
	s_tree[pos].max_sum = max(s_tree[pos].max_sum,(s_tree[pos<<1].r_sum + s_tree[pos<<1|1].l_sum));
	return;
}

Node* query(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start){ return NULL; }
	if(from<=start && end<=to)
	{
		Node *t=new Node;
		t->l_sum=s_tree[pos].l_sum;
		t->r_sum=s_tree[pos].r_sum;
		t->sum=s_tree[pos].sum;
		t->max_sum=s_tree[pos].max_sum;
		return t;
	}
	int mid=(start+end)/2;
	Node *l=query(start,mid,from,to,pos<<1);
	Node *r=query(mid+1,end,from,to,pos<<1|1);
	if(!l){ return r; }
	if(!r){ return l; }
	Node *t=new Node;
	t->l_sum=max(l->l_sum,(l->sum+r->l_sum));
	t->r_sum=max(r->r_sum,(l->r_sum+r->sum));
	t->sum=l->sum+r->sum;
	t->max_sum=max(l->max_sum,r->max_sum);
	t->max_sum=max(t->max_sum,(l->r_sum+r->l_sum));
	return t;
}
*/




