/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int a[100001];

void my_sort(int,int);
void merge(int,int,int);

int main()
{
	int length=0;
	int i=0;
	while(scanf("%d",a[i++])!=EOF)
	{
		length++;
	}
	my_sort(0,length-1);
	for(int i=0;i<length-1;++i){ printf("%d ",a[i]); }
	printf("%d\n",a[length-1]); 
	system("pause");
	return 0;
}

void my_sort(int start,int end)
{
	if(start>=end){ return; }
	int middle=(start+end)/2;
	my_sort(start,middle);
	my_sort(middle+1,end);
	merge(start,middle+1,end);
	return;
}

void merge(int l,int r,int end)
{
	int *res=new int[end-l+1];
	int left=l,right=r;
	int index=0;
	while(left<r && right<=end)
	{
		if(a[left]<a[right])
		{
			res[index++]=a[left++];
		}
		else
		{
			res[index++]=a[right++];
		}
	}
	while(left<r)
	{
		res[index++]=a[left++];
	}
	while(right<=end)
	{
		res[index++]=a[right++];
	}
	for(int i=0,j=l;i<index;++i,++j)
	{
		a[j]=res[i];
	}
	return;
}
*/