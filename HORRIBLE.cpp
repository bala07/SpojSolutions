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
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}

long long sum[1000010];
long long update[1000010];

void modify(int,int,int,int,int,int);
long long query(int,int,int,int,int);
long long value(int,int,int);

int main()
{
	int test,n,q_count,from,to,choice,val;
	scanf("%d",&test);
	//test=next_int();
	while(test--)
	{
		for(int i=0;i<1000010;++i)
		{
			sum[i]=0;
			update[i]=0;
		}
		scanf("%d %d",&n,&q_count);
		//n=next_int();
		//q_count=next_int();
		while(q_count--)
		{
			scanf("%d",&choice);
			//choice=next_int();
			if(!choice)
			{
				scanf("%d %d %d",&from,&to,&val);
				//from=next_int();
				//to=next_int();
				//val=next_int();
				modify(1,n,from,to,1,val);
			}
			else
			{
				scanf("%d %d",&from,&to);
				//from=next_int();
				//to=next_int();
				printf("%lld\n",query(1,n,from,to,1));
			}
		}
	}
	system("pause");
	return 0;
}

void modify(int start,int end,int from,int to,int pos,int val)
{
	if(from>end || to<start){ return; }
	if(from<=start && end<=to)
	{
		update[pos] += val;
		return;
	}
	if(update[pos])
	{
		update[pos<<1] += update[pos];
		update[(pos<<1)|1] += update[pos];
		update[pos]=0;
	}
	int mid=(start+end)/2;
	modify(start,mid,from,to,pos<<1,val);
	modify(mid+1,end,from,to,(pos<<1|1),val);
	sum[pos]=value(start,mid,pos<<1) + value(mid+1,end,(pos<<1)|1);
	return;
}

long long query(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start){ return 0; }
	if(from<=start && end<=to)
	{
		return value(start,end,pos);
	}
	if(update[pos])
	{
		update[pos<<1] += update[pos];
		update[(pos<<1)|1] += update[pos];
		update[pos]=0;
	}
	int mid=(start+end)/2;
	sum[pos]=value(start,mid,pos<<1) + value(mid+1,end,(pos<<1)|1);
	long long l=query(start,mid,from,to,pos<<1);
	long long r=query(mid+1,end,from,to,(pos<<1)|1);
	return l+r;
}

long long value(int start,int end,int pos)
{
	return sum[pos]+(end-start+1)*update[pos];
}

*/


