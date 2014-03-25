/* Accepted */


/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstdlib>

using namespace std;

/*int next_int()
{
	char ch;
	int n=0;
	ch=getchar_unlocked();
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}

struct Edge
{
	int from;
	int to;
	int weight;
};

struct Node
{
	int v,count;
	Node *parent;
};

int cmp(const void *x,const void *y)
{
	Edge *a=(Edge*)x;
	Edge *b=(Edge*)y;
	if(a->weight<b->weight){ return -1; }
	else if(a->weight==b->weight){ return 0; }
	else{ return 1; }
}

Node *find(int);
void join(Node*,Node*);
Edge edge_list[100001];
Node* ref[10001];
int main()
{
	int v_count,e_count,from,to,weight;
	long long ans=0;
	//v_count=next_int();
	//e_count=next_int();
	scanf("%d %d",&v_count,&e_count);
	for(int i=1;i<=v_count;++i)
	{
		Node *t=new Node;
		t->count=1;
		t->v=i;
		t->parent=NULL;
		ref[i]=t;
	}
	for(int i=0;i<e_count;++i)
	{
		//from=next_int();
		//to=next_int();
		//weight=next_int();
		scanf("%d %d %d",&from,&to,&weight);
		edge_list[i].from=from;
		edge_list[i].to=to;
		edge_list[i].weight=weight;
	}
	qsort(edge_list,e_count,sizeof(Edge),cmp);
	for(int i=0;i<e_count;++i)
	{
		Node *c1=find(edge_list[i].from);
		Node *c2=find(edge_list[i].to);
		if(c1->v!=c2->v)
		{
			ans += edge_list[i].weight;
			join(c1,c2);
		}
	}
	printf("%lld\n",ans);
	return 0;
}
Node* find(int v)
{
	Node *cur=ref[v];
	while(cur->parent!=NULL){ cur=cur->parent; }
	Node *cur1=ref[v];
	Node *temp;
	while(cur1->parent!=NULL && cur1->parent!=cur)
	{
		temp=cur1->parent;
		cur1->parent=cur;
		cur1=temp;
	}
	return cur;
}
void join(Node *c1,Node *c2)
{
	if(c1->count<=c2->count)
	{
		c1->parent=c2;
		c2->count += c1->count;
	}
	else
	{
		c2->parent=c1;
		c1->count += c2->count;
	}
	return;
}

*/


