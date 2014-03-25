/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<map>
#include<utility>
#include<cstdlib>
#include<cstring>
#include<string.h>

using namespace std;

int mergeSort(int[],int,int);
int merge(int[],int,int,int);

char twisted[30002][21];
char original[30002][21];
int position[30002];
int temp[30002];

struct str_cmp
{
	bool operator()(char const* a,char const* b)
	{
		return (strcmp(a,b)<0);
	}
};

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int wordCount;
		scanf("%d",&wordCount);
		map<char*,int,str_cmp> m;
		map<char*,int,str_cmp>::iterator it1;
		int res=0;
		for(int i=0;i<wordCount;++i)
		{
			scanf("%s",twisted[i]);
		}
		for(int i=0;i<wordCount;++i)
		{
			scanf("%s",original[i]);
			m[original[i]]=i;
		}
		for(int i=0;i<wordCount;++i)
		{
			it1=m.find(twisted[i]);
			position[i]=it1->second;
		}
		res=mergeSort(position,0,wordCount-1);
		printf("%d\n",res);
	}
	printf("\n");
	return 0;
}
int mergeSort(int a[],int start,int end)
{
	if(end-start+1<2){ return 0; }
	int middle=(start+end)/2;
	int l=mergeSort(a,start,middle);
	int r=mergeSort(a,middle+1,end);
	int m=merge(a,start,middle+1,end);
	return l+m+r;
}
int merge(int a[],int first,int second,int end)
{
	int left=first;
	int right=second;
	int ret=0;
	int index=0;
	while(left<second && right<=end)
	{
		if(a[left]<a[right])
		{
			temp[index++]=a[left++];
		}
		else
		{
			ret += second-left;
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
	return ret;
}

*/			

