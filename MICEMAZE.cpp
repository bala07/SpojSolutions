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
	ch=getchar_unlocked();
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}

int pos[110];
int dist[110];

int MAX=2147483645;

struct q_node
{
	int vertex,weight;
	q_node* next;
};

class queue
{
public:
	q_node *front;
	queue(){ front=NULL; }
	void push(int v,int w)
	{
		q_node *t=new q_node;
		t->vertex=v;
		t->weight=w;
		t->next=NULL;
		if(!front)
		{
			front=t;
			return;
		}
		t->next=front;
		front=t;
		return;
	}
};

struct h_node
{
	int vertex;
	int weight;
}h[110];

class heap
{
	int size;
public:
	heap(){ size=1; }
	void insert(int v,int w)
	{
		h[size].vertex=v;
		h[size].weight=w;
		pos[v]=size;
		size++;
		return;
	}
	void dec_pri(int v,int p)
	{
		h_node key=h[pos[v]];
		key.weight=p;
		int child=pos[v];
		int parent=child/2;
		while(parent>=1 && key.weight<h[parent].weight)
		{
			h[child]=h[parent];
			pos[h[parent].vertex]=child;
			child=parent;
			parent /= 2;
		}
		h[child]=key;
		pos[key.vertex]=child;
		return;
	}
	int del_min()
	{
		int ret=h[1].vertex;
		h[1]=h[size-1];
		h_node key=h[1];
		size--;
		int parent=1,child=2;
		if(child+1<size && h[child+1].weight<h[child].weight){ ++child; }
		while(child<size && key.weight>h[child].weight)
		{
			h[parent]=h[child];
			pos[h[child].vertex]=parent;
			parent=child;
			child *= 2;
			if(child+1<size && h[child+1].weight<h[child].weight){ ++child; }
		}
		h[parent]=key;
		pos[key.vertex]=parent;
		return ret;
	}
	bool empty()
	{
		if(size==1){ return true; }
		return false;
	}
};

int run_dijkstra(int,int,queue[],int);

int main()
{
	int v_count,e_count,from,to,wt,dest,deadline;
	queue adj_list[110];
	scanf("%d",&v_count);
	scanf("%d",&dest);
	scanf("%d",&deadline);
	scanf("%d",&e_count);
	//v_count=next_int();
	//dest=next_int();
	//deadline=next_int();
	//e_count=next_int();
	for(int i=0;i<e_count;++i)
	{
		scanf("%d %d %d",&from,&to,&wt);
		//from=next_int();
		//to=next_int();
		//wt=next_int();
		adj_list[to].push(from,wt);
	}
	for(int i=0;i<=110;++i){ dist[i]=MAX; }
	int ans=run_dijkstra(dest,v_count,adj_list,deadline);
	printf("%d\n",ans);
	system("pause");
	return 0;
}

int run_dijkstra(int source,int v_count,queue adj_list[],int deadline)
{
	heap hp;
	int ans=0;
	hp.insert(source,0);
	dist[source]=0;
	for(int i=1;i<=v_count;++i)
	{
		if(i!=source)
		{
			hp.insert(i,MAX);
		}
	}
	int v,w;
	while(!hp.empty())
	{
		v=hp.del_min();
		if(dist[v]<=deadline){ ++ans; }
		q_node *cur=adj_list[v].front;
		while(cur)
		{
			w=cur->vertex;
			if(dist[v]+cur->weight<dist[w])
			{
				hp.dec_pri(w,dist[v]+cur->weight);
				dist[w]=dist[v]+cur->weight;
			}
			cur=cur->next;
		}
	}
	return ans;
}
*/




