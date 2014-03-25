/* Accepted */

/*
#include<iostream>
#include<stdio.h>

using namespace std;

long long a[200001];
long long temp[200001];

long long mergeSort(long long[],int,int);
long long merge(long long[],int,int,int);

int main()
{
	long long count;
	long long res;
	int test;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%lld",&count);
		for(int i=0;i<count;++i)
		{
			scanf("%d",&a[i]);
		}
		res=mergeSort(a,0,count-1);
		printf("%lld\n",res);
	}
	system("pause");
	return 0;
}
long long mergeSort(long long a[],int start,int end)
{
	if(end-start+1<2){ return 0; }
	int middle=(start+end)/2;
	long long l=mergeSort(a,start,middle);
	long long  r=mergeSort(a,middle+1,end);
	long long m=merge(a,start,middle+1,end);
	return l+m+r;
}
long long merge(long long a[],int first,int second,int end)
{
	int left=first;
	int right=second;
	long long res=0,index=0;
	while(left<second && right<=end)
	{
		if(a[left]<a[right]){ temp[index++]=a[left++]; }
		else
		{
			res += second-left;
			temp[index++]=a[right++];
		}
	}
	while(left<second){ temp[index++]=a[left++]; }
	while(right<=end){ temp[index++]=a[right++]; }
	index=0;
	for(int i=first;i<=end;++i)
	{
		a[i]=temp[index++];
	}
	return res;
}

*/