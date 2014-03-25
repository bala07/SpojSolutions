/*
#include<iostream>
#include<stdio.h>

using namespace std;

int next_int()
{
	char c=getchar_unlocked();
	int n=0;
	bool neg=false;
	if(c=='-'){ neg=true; }
	while(!('0'<=c && c<='9'))
	{
		if(c=='-'){ neg=true; }
		c=getchar_unlocked();
	}
	while('0'<=c && c<='9')
	{
		n=n*10+c-'0';
		c=getchar_unlocked();
	}
	return (neg ? -n : n);
}


int num[100002];
struct seg
{
	int *a;
	int length;
}list[1000010];

void initialize(int,int,int);
seg query(int,int,int,int,int);
void merge(int*,int,int*,int,int*);

int main()
{
	int length,q_count,from,to,rank;
	seg res;
	length=next_int();
	q_count=next_int();
	//scanf("%d %d",&length,&q_count);
	for(int i=1;i<=length;++i)
	{ 
		//scanf("%d",&num[i]); 
		num[i]=next_int();
	}
	initialize(1,length,1);
	while(q_count--)
	{
		//scanf("%d %d %d",&from,&to,&rank);
		from=next_int();
		to=next_int();
		rank=next_int();
		res=query(1,length,from,to,1);
		printf("%d\n",res.a[rank-1]);
	}
	return 0;
}
void initialize(int start,int end,int pos)
{
	if(start==end)
	{
		list[pos].a=new int;
		*(list[pos].a)=num[start];
		list[pos].length=1;
		return;
	}
	int mid=(start+end)/2;
	initialize(start,mid,pos<<1);
	initialize(mid+1,end,(pos<<1)|1);
	int *l=list[pos<<1].a;
	int *r=list[(pos<<1)|1].a;
	list[pos].a=new int[end-start+1];
	merge(l,list[pos*2].length,r,list[pos*2+1].length,list[pos].a);
	list[pos].length=end-start+1;
	return;
}

seg query(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start)
	{
		seg ret;
		ret.length=0;
		return ret;
	}
	if(from<=start && end<=to)
	{
		seg ret;
		ret.a=list[pos].a;
		ret.length=list[pos].length;
		return ret;
	}
	int mid=(start+end)/2;
	seg l=query(start,mid,from,to,pos<<1);
	seg r=query(mid+1,end,from,to,(pos<<1)|1);
	if(l.length==0){ return r; }
	if(r.length==0){ return l; }
	int *res=new int[l.length+r.length];
	merge(l.a,l.length,r.a,r.length,res);
	seg ret;
	ret.a=res;
	ret.length=l.length+r.length;
	return ret;
}
void merge(int *l,int l1,int *r,int l2,int *res)
{
	int left=0,right=0;
	int index=0;
	while(left<l1 && right<l2)
	{
		if(l[left]<=r[right])
		{
			res[index++]=l[left++];
		}
		else
		{
			res[index++]=r[right++];
		}
	}
	if(left<l1)
	{
		while(left<l1)
		{
			res[index++]=l[left++];
		}
	}
	if(right<l2)
	{
		while(right<l2)
		{
			res[index++]=r[right++];
		}
	}
	return;
}

*/
	
	
	

