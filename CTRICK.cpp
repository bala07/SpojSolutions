/* Accepted */

/*

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

void find_answer(int);

int a[20010];


struct node
{
	int value,index;
	node *prev,*next;
}*front,*rear;

class list
{
public:
	list(){ front=rear=NULL; }
	void insert(int val,int ind)
	{
		node *t=new node;
		t->value=val;
		t->index=ind;
		t->next=t->prev=t;
		if(!front)
		{
			front=rear=t;
			return;
		}
		rear->next=t;
		t->prev=rear;
		t->next=front;
		rear=t;
		front->prev=rear;
		return;
	}
	void remove(node *cur)
	{
		if(front==rear){ front=rear=NULL; return; }
		cur->prev->next=cur->next;
		cur->next->prev=cur->prev;
		if(cur==front){ front=cur->next; }
		if(cur==rear){ rear=cur->prev; }
		return;
	}
};


int main()
{
	int test,count;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&count);
		find_answer(count);
		for(int i=0;i<count-1;++i){ printf("%d ",a[i]); }
		printf("%d\n",a[count-1]);
		for(int i=0;i<=count;++i){ a[i]=0; }
	}
	system("pause");
	return 0;
}

void find_answer(int k)
{
	list l;
	int count=0;
	for(int i=0;i<k;++i)
	{
		l.insert(i+1,i);
	}
	node *cur=front;
	for(int i=1;i<k;++i)
	{
		count=0;
		while(count<i)
		{
			cur=cur->next;
			count++;
		}
		a[cur->index]=i;
		l.remove(cur);
		cur=cur->next;
	}
	a[cur->index]=k;
	return;
}

*/