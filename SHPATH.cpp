/* Accepted */

/*

#include<iostream>
#include<stdio.h>
#include<map>
#include<climits>

using namespace std;

int dist[10002];
int pos[10002];
char cities[10002][12];

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

class MyQueue;

int findShortestPath(MyQueue[],int,int,int);


struct Node
{
	int vertex;
	int weight;
	Node *next;
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
		t->next=NULL;
		if(front==NULL){ front=t; return; }
		t->next=front;
		front=t;
		return;
	}
};


struct h_Node
{
	int vertex;
	int weight;
}a[10002];

class MyHeap
{
public:
	int size;
	MyHeap(){ size=1; }
	void insert(int v,int w)
	{
		a[size].vertex=v;
		a[size].weight=w;
		pos[v]=size;
		size++;
		return;
	}
	void dec_pri(int v,int p)
	{
		h_Node key=a[pos[v]];
		key.weight=p;
		int parent=pos[v]/2;
		int child=pos[v];
		while(child>1 && key.weight<a[parent].weight)
		{
			a[child]=a[parent];
			pos[a[parent].vertex]=child;
			child=parent;
			parent /= 2;
		}
		a[child]=key;
		pos[key.vertex]=child;
		return;
	}
	int del_min()
	{
		int ret=a[1].vertex;
		a[1]=a[size-1];
		size--;
		heapify();
		return ret;
	}
	void heapify()
	{
		h_Node key=a[1];
		int parent=1;
		int child=2;
		if(child+1<size && a[child+1].weight<a[child].weight){ ++child; }
		while(child<size && key.weight>a[child].weight)
		{
			a[parent]=a[child];
			pos[a[child].vertex]=parent;
			parent=child;
			child *= 2;
			if(child+1<size && a[child+1].weight<a[child].weight){ ++child; }
		}
		a[parent]=key;
		pos[key.vertex]=parent;
		return;
	}
	bool empty()
	{
		if(size==1){ return true; }
		return false;
	}
};

struct my_cmp
{
	bool operator()(const char* a,const char* b)
	{
		return (strcmp(a,b)<0);
	}
};

int main()
{
	int test,city_count,edge_count,to,wt,query_count,source,dest;
	char input[12];
	scanf("%d",&test);
	//test=next_int();
	while(test--)
	{
		map<char*,int,my_cmp> mymap;
		MyQueue adjList[10002];
		scanf("%d",&city_count);
		//city_count=next_int();
		for(int i=0;i<city_count;++i)
		{
			scanf("%s",cities[i]);
			mymap[cities[i]]=i+1;
			scanf("%d",&edge_count);
			//edge_count=next_int();
			for(int j=0;j<edge_count;++j)
			{
				scanf("%d %d",&to,&wt);
				//to=next_int();
				//wt=next_int();
				adjList[i+1].insert(to,wt);
			}
		}
		scanf("%d",&query_count);
		//query_count=next_int();
		for(int i=0;i<query_count;++i)
		{
			for(int i=0;i<10002;++i)
			{
				dist[i]=INT_MAX;
				pos[i]=-1;
			}
			scanf("%s",input);
			source=mymap.find(input)->second;
			scanf("%s",input);
			dest=mymap.find(input)->second;
			int ans=findShortestPath(adjList,source,dest,city_count);
			printf("%d\n",ans);
		}
	}
	return 0;
}

int findShortestPath(MyQueue adjList[],int source,int dest,int city_count)
{
	MyHeap h;
	h.insert(source,0);
	dist[source]=0;
	for(int i=1;i<=city_count;++i)
	{
		if(i==source){ continue; }
		h.insert(i,INT_MAX);
	}
	int v,w;
	while(!h.empty())
	{
		v=h.del_min();
		Node *cur=adjList[v].front;
		while(cur)
		{
			w=cur->vertex;
			if(dist[v]+cur->weight<dist[w])
			{
				h.dec_pri(w,dist[v]+cur->weight);
				dist[w]=dist[v]+cur->weight;
			}
			cur=cur->next;
		}
	}
	return dist[dest];
}

*/


