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
	while(!('0'<=ch && ch<='9'))
	{
		ch=getchar_unlocked();
	}
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}

struct Edge
{
	int from,to,weight;
}edge_list[1000010];

struct Node
{
	int vertex,count;
	Node *parent;
};

int cmp(const void* x,const void *y)
{
	Edge* a=(Edge*)x;
	Edge* b=(Edge*)y;
	if(a->weight<b->weight){ return -1; }
	else if(a->weight==b->weight){ return 0; }
	else{ return 1; }
}

int runKruskal(Edge[],int,int);
Node* find(int);
void join(Node*,Node*);

Node *ref[10010];

int main()
{
	int test,v_count,e_count,to,cost,index=0;
	char city[20];
	scanf("%d",&test);
	//test=next_int();
	while(test--)
	{
		index=0;
		//v_count=next_int();
		scanf("%d",&v_count);
		for(int i=1;i<=v_count;++i)
		{
			scanf("%s",city);
			//e_count=next_int();
			scanf("%d",&e_count);
			for(int j=0;j<e_count;++j)
			{
				//to=next_int();
				//cost=next_int();
				scanf("%d %d",&to,&cost);
				edge_list[index].from=i;
				edge_list[index].to=to;
				edge_list[index++].weight=cost;
			}
		}
		qsort(edge_list,index,sizeof(Edge),cmp);
		int ans=runKruskal(edge_list,v_count,index);
		printf("%d\n",ans);
	}
	system("pause");
	return 0;
}

int runKruskal(Edge edge_list[],int v_count,int e_count)
{
	int ans=0;
	for(int i=1;i<=v_count;++i)
	{
		Node *p=new Node;
		p->vertex=i;
		p->count=1;
		p->parent=NULL;
		ref[i]=p;
	}
	for(int i=0;i<e_count;++i)
	{
		Node *c1=find(edge_list[i].from);
		Node *c2=find(edge_list[i].to);
		if(c1->vertex != c2->vertex)
		{
			ans += edge_list[i].weight;
			join(c1,c2);
		}
	}
	return ans;
}

Node* find(int v)
{
	Node *cur=ref[v];
	while(cur->parent)
	{
		cur=cur->parent;
	}
	Node *cur1=ref[v];
	Node *temp;
	while(cur1!=cur)
	{
		temp=cur1->parent;
		cur1->parent=cur;
		cur1=temp;
	}
	return cur;
}

void join(Node *c1,Node *c2)
{
	if(c1->count<c2->count)
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