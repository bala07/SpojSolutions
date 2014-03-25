/* Accepted */

/*
#include<iostream>
#include<stdio.h>

using namespace std;

/*int next_int()
{
	char ch;
	int n=0;
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		 n=n*10+ch-'0';
		 ch=getchar_unlocked();
	}
	return n;
}

int pos[510];
int dist[3][510];
int max_value=1000000000;

struct Node
{
	int vertex;
	int weight;
	Node *prev,*next;
};

class MyQueue
{
public:
	Node *front;
	MyQueue(){ front=NULL; }
	void insert(int v,int w)
	{
		Node *t=new Node;
		t->vertex=v;
		t->weight=w;
		t->prev=t->next=NULL;
		if(front==NULL){ front=t; return; }
		front->prev=t;
		t->next=front;
		front=t;
		return;
	}
	void remove(Node *cur)
	{
		if(cur==front)
		{
			front=cur->next;
			if(front){ front->prev=NULL; }
		}
		else if(cur->next==NULL)
		{
			cur->prev->next=NULL;
		}
		else
		{
			cur->prev->next=cur->next;
			cur->next->prev=cur->prev;
		}
		return;
	}
};

struct h_Node
{
	int vertex;
	int weight;
}heap[510];

class MyHeap
{
	int size;
public:
	MyHeap(){ size=0; }
	void insert(int v,int w)
	{
		heap[size].vertex=v;
		heap[size].weight=w;
		pos[v]=size;
		size++;
		return;
	}
	void dec_pri(int v,int p)
	{
		h_Node key=heap[pos[v]];
		key.weight=p;
		int child=pos[v];
		int parent=(child%2==0) ? child/2-1 : child/2;
		while(child>0 && key.weight<heap[parent].weight)
		{
			heap[child]=heap[parent];
			pos[heap[parent].vertex]=child;
			child=parent;
			parent=(child%2==0) ? child/2-1 : child/2;
		}
		heap[child]=key;
		pos[key.vertex]=child;
		return;
	}
	int del_min()
	{
		int ret=heap[0].vertex;
		heap[0]=heap[size-1];
		size--;
		h_Node key=heap[0];
		int parent=0,child=1;
		if(child+1<size && heap[child+1].weight<heap[child].weight){ ++child; }
		while(child<size && key.weight>heap[child].weight)
		{
			heap[parent]=heap[child];
			pos[heap[child].vertex]=parent;
			parent=child;
			child=child*2+1;
			if(child+1<size && heap[child+1].weight<heap[child].weight){ ++child; }
		}
		heap[parent]=key;
		pos[key.vertex]=parent;
		return ret;
	}
	bool empty()
	{
		if(!size){ return true; }
		return false;
	}
};

int findShortestPath(MyQueue[],int,int,int,int);
void removeSPEdges(MyQueue[],int,int);

int main()
{
	int v_count,e_count,from,to,source,dest,wt,flag=0;
	scanf("%d %d",&v_count,&e_count);
	//v_count=next_int();
	//e_count=next_int();
	while(v_count!=0 && e_count!=0)
	{
		MyQueue adjList[510],r_adjList[510];
		scanf("%d %d",&source,&dest);
		//source=next_int();
		//dest=next_int();
		for(int i=0;i<e_count;++i)
		{
			scanf("%d %d %d",&from,&to,&wt);
			//from=next_int();
			//to=next_int();
			//wt=next_int();
			adjList[from].insert(to,wt);
			r_adjList[to].insert(from,wt);
		}
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<510;++j)
			{
				dist[i][j]=max_value;
			}
		}
		flag=0;
		findShortestPath(adjList,source,-1,v_count,flag++);
		findShortestPath(r_adjList,dest,-1,v_count,flag++);
		removeSPEdges(adjList,v_count,dest);
		int ans=findShortestPath(adjList,source,dest,v_count,flag++);
		printf("%d\n",ans);
		scanf("%d %d",&v_count,&e_count);
		//v_count=next_int();
		//e_count=next_int();
	}
	return 0;
}

int findShortestPath(MyQueue adjList[],int source,int dest,int v_count,int flag)
{
	MyHeap h;
	h.insert(source,0);
	dist[flag][source]=0;
	for(int i=0;i<v_count;++i)
	{
		if(i==source){ continue; }
		h.insert(i,max_value);
	}
	int v,w;
	while(!h.empty())
	{
		v=h.del_min();
		Node *cur=adjList[v].front;
		while(cur)
		{
			w=cur->vertex;
			if(dist[flag][v]+cur->weight<dist[flag][w])
			{
				h.dec_pri(w,dist[flag][v]+cur->weight);
				dist[flag][w]=dist[flag][v]+cur->weight;
			}
			cur=cur->next;
		}
	}
	if(dest==-1||dist[flag][dest]==max_value){ return -1; }
	return dist[flag][dest];
}

void removeSPEdges(MyQueue adjList[],int v_count,int dest)
{
	for(int i=0;i<v_count;++i)
	{
		Node *cur=adjList[i].front;
		while(cur)
		{
			if(dist[0][i]+cur->weight+dist[1][cur->vertex]==dist[0][dest])
			{
				adjList[i].remove(cur);
			}
			cur=cur->next;
		}
	}
	return;
}

*/