/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<climits>
#include<cmath>

using namespace std;

long long findCount(int,int);
long long findMaxSum(int);
long long findOccurences(long,int);

int a[100001];

/*int next_int()
{
	char ch;
	int n=0;
	bool neg=false;
	ch=getchar_unlocked();
	if(ch=='-'){ neg=true; }
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}
	

int main()
{
	int test;
	scanf("%d",&test);
	//test=next_int();
	int count;
	while(test--)
	{
		bool allAreNegative=true;
		int max_elem=INT_MIN;
		scanf("%d",&count);
		//count=next_int();
		for(int i=0;i<count;++i)
		{
			scanf("%d",&a[i]);
			//a[i]=next_int();
			if(a[i]>=0){ allAreNegative=false; }
			max_elem=max(max_elem,a[i]);
		}
		if(allAreNegative)
		{
			long long ans=findCount(max_elem,count);
			printf("%d %lld\n",max_elem,ans);
		}
		else
		{
			long long max_sum=findMaxSum(count);
			long long ans=findOccurences(max_sum,count);
			printf("%lld %lld\n",max_sum,ans);
		}
	}
	return 0;
}

long long  findCount(int elem,int length)
{
	long long ans=0;
	for(int i=0;i<length;++i)
	{
		if(a[i]==elem){ ++ans; }
	}
	return ans;
}

long long findMaxSum(int length)
{
	long long max_so_far=0;
	long long max_end_here=0;
	for(int i=0;i<length;++i)
	{
		if(max_end_here+a[i]>=0)
		{
			max_so_far=max(max_so_far,max_end_here+a[i]);
			max_end_here += a[i];
		}
		else
		{
			max_end_here=0;
		}
	}
	return max_so_far;
}

long long findOccurences(long max_sum,int length)
{
	long addValue=1;
	long long ans=0;
	long long max_end_here=0;
	for(int i=0;i<length;++i)
	{
		if(max_end_here+a[i]==max_sum)
		{
			ans += addValue;
		}
		if(max_end_here+a[i]==0)
		{
			addValue += 1;
		}
		else if(max_end_here+a[i]<0)
		{
			addValue=1;
		}
		if(max_end_here+a[i]>=0)
		{
			max_end_here += a[i];
		}
		else{ max_end_here=0; }
	}
	return ans;
}
*/
			

