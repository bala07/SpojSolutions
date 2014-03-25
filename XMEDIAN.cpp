/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

int h1[200010];
int h2[200010];

class max_heap
{
	int size;
public:
	max_heap(){ size=1; }
	void insert(int d)
	{
		h1[size]=d;
		int child=size++;
		int parent=child/2;
		int key=d;
		while(parent>=1 && key>h1[parent])
		{
			h1[child]=h1[parent];
			child=parent;
			parent /= 2;
		}
		h1[child]=key;
		return;
	}
	void del_top()
	{
		h1[1]=h1[size-1];
		size--;
		int parent=1;
		int child=2;
		if(child+1<size && h1[child+1]>h1[child]){ child++; }
		int key=h1[1];
		while(child<size && key<h1[child])
		{
			h1[parent]=h1[child];
			parent=child;
			child *= 2;
			if(child+1<size && h1[child+1]>h1[child]){ ++child; }
		}
		h1[parent]=key;
		return;
	}
	int get_top(){ return h1[1]; }
	int get_size(){ return size-1; }
}l;

class min_heap
{
	int size;
public:
	min_heap(){ size=1; }
	void insert(int d)
	{
		h2[size]=d;
		int child=size++;
		int parent=child/2;
		int key=d;
		while(parent>=1 && key<h2[parent])
		{
			h2[child]=h2[parent];
			child=parent;
			parent /= 2;
		}
		h2[child]=key;
		return;
	}
	void del_top()
	{
		h2[1]=h2[size-1];
		size--;
		int parent=1;
		int child=2;
		int key=h2[1];
		if(child+1<size && h2[child+1]<h2[child]){ ++child; }
		while(child<size && key>h2[child])
		{
			h2[parent]=h2[child];
			parent=child;
			child *= 2;
			if(child+1<size && h2[child+1]<h2[child]){ ++child; }
		}
		h2[parent]=key;
		return;
	}
	int get_top(){ return h2[1]; }
	int get_size(){ return size-1; }
}r;

void find_median(int);

int m=0;

int main()
{
	int len,val;
	scanf("%d",&len);
	for(int i=0;i<len;++i)
	{
		scanf("%d",&val);
		find_median(val);
		printf("%d\n",m);
	}
	system("pause");
	return 0;
}

void find_median(int val)
{
	int diff=l.get_size()-r.get_size();
	if(diff==1)
	{
		if(val<m)
		{
			r.insert(l.get_top());
			l.del_top();
			l.insert(val);
		}
		else{ r.insert(val); }
		m=l.get_top();
	}
	else if(diff==0)
	{
		if(val<m){ l.insert(val); m=l.get_top();}
		else{ r.insert(val); m=r.get_top(); }
	}
	else
	{
		if(val<m){ l.insert(val); }
		else
		{
			//printf("The top value is %d\n",r.get_top());
			l.insert(r.get_top());
			//printf("The size is %d\n",l.get_size());
			r.del_top();
			r.insert(val);
		}
		m=l.get_top();
	}
}

*/