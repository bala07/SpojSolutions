/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<queue>

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



struct node
{
	int vertex;
	node *next;
};

class my_queue
{
public:
	node *front;
	my_queue(){ front=NULL; }
	void insert(int v)
	{
		node *t=new node;
		t->vertex=v;
		t->next=NULL;
		if(!front){ front=t; return; }
		t->next=front;
		front=t;
		return;
	}
};

bool find_answer(my_queue[],int);
bool is_bipartite(my_queue[],int);

int level[2010];
bool visited[2010];


int main()
{
	int test;
	int v_count,e_count,b1,b2,scenario=1;
	scanf("%d",&test);
	//test=next_int();
	while(test--)
	{
		my_queue adj_list[2010];
		memset(level,0,sizeof(level));
		memset(visited,false,sizeof(visited));
		scanf("%d %d",&v_count,&e_count);
		//v_count=next_int();
		//e_count=next_int();
		for(int i=0;i<e_count;++i)
		{
			scanf("%d %d",&b1,&b2);
			//b1=next_int();
			//b2=next_int();
			adj_list[b1].insert(b2);
			adj_list[b2].insert(b1);
		}
		printf("Scenario #%d:\n",scenario++);
		//node *cur=adj_list[1].front;
		//node *cur=adj_list[1].front;
		//printf("%d %d %d \n",cur->vertex,cur->next->vertex,cur->next->next->vertex);
		if(!find_answer(adj_list,v_count))
		{
			printf("Suspicious bugs found!\n");
		}
		else
		{
			printf("No suspicious bugs found!\n");
		}
	}
	system("pause");
	return 0;
}
bool find_answer(my_queue adj_list[],int v_count)
{
	for(int i=1;i<=v_count;++i)
	{
		//printf("Inside for loop\n");
		if(level[i]==0 && !is_bipartite(adj_list,i)){ return false; }
	}
	return true;
}
bool is_bipartite(my_queue adj_list[],int source)
{
	bool ret=true;
	queue<int> q;
	int v,w;
	q.push(source);
	level[source]=1;
	visited[source]=true;
	while(!q.empty())
	{
		v=q.front();
		//printf("The popped node is %d\n",v);
		node *cur=adj_list[v].front;
		q.pop();
		while(cur)
		{
			w=cur->vertex;
			//printf("The vertex is %d\n",w);
			if(level[w]==level[v]){ ret=false; }
			if(!visited[w])
			{
				level[w]=level[v]+1;
				visited[w]=true;
				//printf("The pushed node is %d\n",w);
				q.push(w);
			}
			//printf("Inside while loop\n");
			cur=cur->next;
		}
	}
	return ret;
}
*/
		
