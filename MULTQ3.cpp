/* Accepted */
/*

#include<iostream>
#include<cstdio>
#include<stdio.h>


using namespace std;

/*inline int next_int() {
	int n = 0;
	char c = getchar_unlocked();
	while (!('0' <= c && c <= '9')) {
		c = getchar_unlocked();
	}
	while ('0' <= c && c <= '9') {
		n = n * 10 + c - '0';
		c = getchar_unlocked();
	}
	return n;
}

struct s_node
{
	int zeroes,ones,twos;
	s_node()
	{
		zeroes=ones=twos=-1;
	}
}node[1000010];
int update[1000010];

void initialize(int,int,int);
void increment(int,int,int,int,int);
int query(int,int,int,int,int);

int main()
{
	int length,q_count,choice,from,to;
	scanf("%d %d",&length,&q_count);
	//length=next_int();
	//q_count=next_int();
	initialize(1,length,1);
	while(q_count--)
	{
		scanf("%d %d %d",&choice,&from,&to);
		//choice=next_int();
		//from=next_int();
		//to=next_int();
		if(choice)
		{
			printf("%d\n",query(1,length,from+1,to+1,1));
		}
		else
		{
			increment(1,length,from+1,to+1,1);
		}
	}
	return 0;
}

s_node value(int start,int end,int pos)
{
	s_node ret;
	if(!update[pos])
	{
		ret.zeroes=node[pos].zeroes;
		ret.ones=node[pos].ones;
		ret.twos=node[pos].twos;
	}
	else if(update[pos]==1)
	{
		ret.zeroes=node[pos].twos;
		ret.ones=node[pos].zeroes;
		ret.twos=node[pos].ones;
	}
	else
	{
		ret.zeroes=node[pos].ones;
		ret.ones=node[pos].twos;
		ret.twos=node[pos].zeroes;
	}
	return ret;
}

void initialize(int start,int end,int pos)
{
	if(start==end)
	{
		node[pos].zeroes=1;
		node[pos].ones=node[pos].twos=0;
		return;
	}
	int mid=(start+end)/2;
	initialize(start,mid,(pos<<1));
	initialize(mid+1,end,((pos<<1)|1));
	node[pos].zeroes=end-start+1;
	node[pos].twos=node[pos].ones=0;
	return;
}

void increment(int start,int end,int from,int to,int pos)
{

	if(from>end || to<start){ return; }
	if(from<=start && end<=to)
	{
		update[pos]=update[pos]+1;
		if(update[pos]>=3){ update[pos] -= 3; }
		return;
	}
	if(update[pos])
	{
		update[(pos<<1)]=(update[(pos<<1)]+update[pos]);
		if(update[(pos<<1)]>=3){ update[(pos<<1)] -= 3; }
		update[((pos<<1)|1)]=update[((pos<<1)|1)]+update[pos];
		if(update[((pos<<1)|1)]>=3){ update[((pos<<1)|1)] -= 3; }
		update[pos]=0;
	}
	int mid=(start+end)/2;
	increment(start,mid,from,to,(pos<<1));
	increment(mid+1,end,from,to,((pos<<1)|1));
	s_node l=node[pos<<1];
	int limit=update[pos<<1];
	while(limit>0)
	{
		int t=l.twos;
		l.twos=l.ones;
		l.ones=l.zeroes;
		l.zeroes=t;
		limit--;
	}
	s_node r=node[((pos<<1)|1)];
	limit=update[((pos<<1)|1)];
	while(limit>0)
	{
		int t=r.twos;
		r.twos=r.ones;
		r.ones=r.zeroes;
		r.zeroes=t;
		limit--;
	}
	node[pos].zeroes=l.zeroes + r.zeroes;
	node[pos].ones=l.ones + r.ones;
	node[pos].twos=l.twos + r.twos;
	return;
}

int query(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start){ return 0; }
	if(from<=start && end<=to)
	{
		s_node ret=node[pos];
		int limit=update[pos];
		while(limit>0)
		{
			int t=ret.twos;
			ret.twos=ret.ones;
			ret.ones=ret.zeroes;
			ret.zeroes=t;
			limit--;
		}
		return ret.zeroes;
	}
	if(update[pos])
	{
		update[(pos<<1)]=(update[(pos<<1)]+update[pos]);
		if(update[(pos<<1)]>=3){ update[(pos<<1)] -= 3; }
		update[((pos<<1)|1)]=update[((pos<<1)|1)]+update[pos];
		if(update[((pos<<1)|1)]>=3){ update[((pos<<1)|1)] -= 3; }
		update[pos]=0;
	}
	int mid=(start+end)/2;
	s_node l=node[pos<<1];
	int limit=update[pos<<1];
	while(limit>0)
	{
		int t=l.twos;
		l.twos=l.ones;
		l.ones=l.zeroes;
		l.zeroes=t;
		limit--;
	}
	s_node r=node[((pos<<1)|1)];
	limit=update[((pos<<1)|1)];
	while(limit>0)
	{
		int t=r.twos;
		r.twos=r.ones;
		r.ones=r.zeroes;
		r.zeroes=t;
		--limit;
	}
	node[pos].zeroes=l.zeroes+r.zeroes;
	node[pos].ones=l.ones+r.ones;
	node[pos].twos=l.twos+r.twos;
	if(to<=mid)
	{
		return query(start,mid,from,to,(pos<<1));
	}
	else if(from>mid)
	{
		return query(mid+1,end,from,to,((pos<<1)|1));
	}
	else
	{
		return query(start,mid,from,to,(pos<<1))+query(mid+1,end,from,to,((pos<<1)|1));
	}
}
*/

