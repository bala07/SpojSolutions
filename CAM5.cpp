/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<queue>


using namespace std;

/*int next_int()
{
	char ch;
	int n=0;
	ch=getchar_unlocked();
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

struct node
{
	int vertex;
	node *next;
};
class MyQueue
{
public:
	node *front;
	MyQueue(){ front=NULL; }
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

void findConnectedComponents(MyQueue[],int);
void doBFS(MyQueue[],int,int,int);

bool visited[100010];
int comp[100010];
int cur_comp;

int main()
{
	int test,v_count,e_count,from,to;
	//test=next_int();
	scanf("%d",&test);
	while(test--)
	{
		memset(visited,false,sizeof(visited));
		memset(comp,-1,sizeof(comp));
		cur_comp=0;
		MyQueue adj_list[100010];
		//v_count=next_int();
		//e_count=next_int();
		scanf("%d",&v_count);
		scanf("%d",&e_count);
		for(int i=0;i<e_count;++i)
		{
			scanf("%d %d",&from,&to);
			//from=next_int();
			//to=next_int();
			adj_list[from].insert(to);
			adj_list[to].insert(from);
		}
		findConnectedComponents(adj_list,v_count);
		printf("%d\n",cur_comp);
	}
	system("pause");
	return 0;
}
void findConnectedComponents(MyQueue adj_list[],int v_count)
{
	for(int i=0;i<v_count;++i)
	{
		if(comp[i]==-1)
		{
			doBFS(adj_list,i,v_count,cur_comp);
			cur_comp++;
		}
	}
	return;
}

void doBFS(MyQueue adj_list[],int s_vertex,int v_count,int c_comp)
{
	queue<int> q;
	int v,w;
	q.push(s_vertex);
	while(!q.empty())
	{
		int v=q.front();
		q.pop();
		visited[v]=true;
		comp[v]=c_comp;
		node *cur=adj_list[v].front;
		while(cur)
		{
			w=cur->vertex;
			if(!visited[w])
			{
				q.push(w);
			}
			cur=cur->next;
		}
	}
	return;
}
*/






		

