/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

long long h1[200010];
long long h2[200010];

long long m;

long long mod=1000000007;

/*long long next_int()
{
	long long n=0;
	char ch;
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}*/

/*int get_int()
{

	int n=0;
	char ch;
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}

class max_heap
{
	int size;
public:
	max_heap(){ size=1; }
	void insert(long long key)
	{
		h1[size]=key;
		int child=size++;
		int parent=child/2;
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
		long long key=h1[1];
		if(child+1<size && h1[child+1]>h1[child]){ ++child; }
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
	long long get_top(){ return h1[1]; }
	int get_size(){ return size-1; }
	void set_size(int s){ size=s; }
}l;

class min_heap
{
	int size;
public:
	min_heap(){ size=1; }
	void insert(long long key)
	{
		h2[size]=key;
		int child=size++;
		int parent=child/2;
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
		long long key=h2[1];
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
	long long get_top(){ return h2[1]; }
	int get_size(){ return size-1; }
	void set_size(int s){ size=s; }
}r;

long long find_answer(long long,long long,long long,int);
void find_median(long long);


int main()
{
	//printf("%d\n",mod);
	int test,n;
	long long a,b,c;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%lld %lld %lld %d",&a,&b,&c,&n);
		//a=next_int();
		//b=next_int();
		//c=next_int();
		//n=get_int();
		l.set_size(1); r.set_size(1);
		m=0;
		long long ans=find_answer(a,b,c,n);
		printf("%lld\n",ans);
	}
	system("pause");
	return 0;
}

long long find_answer(long long a,long long b,long long c,int n)
{
	long long ret=1;
	long long val=1;
	for(int i=2;i<=n;++i)
	{
		find_median(val);
		val=( (a*m) % mod + (b*i) % mod +c ) % mod;
		//printf("The value is %lld\n",val);
		//printf("The median is %lld\n",m);
		ret += val;
	}
	return ret;
}

void find_median(long long val)
{
	//printf("The val is %lld\n",val);
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
		if(val<m)
		{
			l.insert(val);
			m=l.get_top();
		}
		else
		{
			r.insert(val);
			m=r.get_top();
		}
	}
	else
	{
		if(val<m){ l.insert(val); }
		else
		{
			l.insert(r.get_top());
			r.del_top();
			r.insert(val);
		}
		m=l.get_top();
	}
	return;
}

*/