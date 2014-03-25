/* Accepted */

/*


#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cmath>
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


int pos[1010];

int max_value = 2147483646;

struct h_node
{
	int vertex;
	int time;
}a[1010];

class heap
{
	int size;
public:
	heap(){ size=1; }
	void insert(int v,long long t)
	{
		a[size].vertex=v;
		a[size].time=t;
		pos[v]=size;
		++size;
		return;
	}
	int del_min()
	{
		int ret=a[1].vertex;
		a[1]=a[size-1];
		--size;
		h_node key=a[1];
		int parent=1;
		int child=2;
		if(child+1<size && a[child+1].time<a[child].time){ ++child; }
		while(child<size && a[child].time<key.time)
		{
			a[parent]=a[child];
			pos[a[child].vertex]=parent;
			parent=child;
			child *= 2;
			if(child+1<size && a[child+1].time<a[child].time){ ++child; }
		}
		a[parent]=key;
		pos[key.vertex]=parent;
		return ret;
	}
	void dec_pri(int v,int p)
	{
		h_node key=a[pos[v]];
		key.time=p;
		int child=pos[v];
		int parent=child/2;
		while(child>1 && a[parent].time>key.time)
		{
			a[child]=a[parent];
			pos[a[parent].vertex]=child;
			child=parent;
			parent /= 2;
		}
		a[child]=key;
		//printf("\tThe first node is %d\n",a[1].vertex);
		pos[key.vertex]=child;
		return;
	}
	bool empty()
	{
		if(size==1){ return true; }
		return false;
	}
};

struct node
{
	int vertex;
	int weight;
	int avail_time;
	node *next;
};

class queue
{
public:
	node *front;
	queue(){ front=NULL; }
	void insert(int v,int w,int a)
	{
		node *t=new node;
		t->vertex=v;
		t->weight=w;
		t->avail_time=a;
		t->next=NULL;
		if(!front){ front=t; return; }
		t->next=front;
		front=t;
		return;
	}
};

int dist[1010];

int run_dijkstra(queue[],int);
int wait_time(int,int,int);

int main()
{
	int v_count,e_count,from,to;
	queue adj_list[1010];
	//printf("%lld\n",max_value);
	for(int i=0;i<1010;++i){ dist[i]=max_value; }
	scanf("%d %d",&v_count,&e_count);
	//v_count=next_int();
	//e_count=next_int();
	for(int i=0;i<e_count;++i)
	{
		scanf("%d %d",&from,&to);
		//from=next_int();
		//to=next_int();
		adj_list[from].insert(to,(to-from)*5,0);
		adj_list[to].insert(from,(to-from)*5,(to-from)*5);
	}
	int ans=run_dijkstra(adj_list,v_count);
	printf("%d\n",ans);
	system("pause");
	return 0;
}

int run_dijkstra(queue adj_list[],int v_count)
{
	heap h;
	h.insert(1,0);
	dist[1]=0;
	for(int i=2;i<=v_count;++i)
	{
		h.insert(i,max_value);
	}
	int v,w;
	while(!h.empty())
	{
		v=h.del_min();
		node *cur=adj_list[v].front;
		while(cur)
		{
			w=cur->vertex;
			int new_dist=dist[v]+wait_time(cur->avail_time,cur->weight*2,dist[v])+cur->weight;
			if(new_dist<dist[w])
			{
				dist[w]=new_dist;
				h.dec_pri(w,new_dist);
			}
			cur=cur->next;
		}
	}
	return dist[v_count];
}

int wait_time(int start,int period,int arrival)
{
	int ret=(int)(ceil((double)arrival/period)*period + start);
	if(ret-arrival>period){ ret -= period; }
	return ret-arrival;
}


*/
