/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>

using namespace std;

/*int next_int()
{
	char c;
	int n=0;
	c=getchar_unlocked();
	while(!('0'<=c && c<='9')){ c=getchar_unlocked(); }
	while('0'<=c && c<='9')
	{
		n=n*10+c-'0';
		c=getchar_unlocked();
	}
	return n;
}

void myReverse(int,int);

int a[100001];

int main()
{
	int test;
	scanf("%d",&test);
	//test=next_int();
	while(test--)
	{
		int length;
		scanf("%d",&length);
		//length=next_int();
		for(int i=0;i<length;++i)
		{
			scanf("%d",&a[i]);
			//a[i]=next_int();
		}
		sort(a,a+length);
		if(length==2 && a[0]==2 && a[1]==3)
		{
			printf("%d %d\n",a[0],a[1]);
			continue;
		}
		int start=0;
		while(a[start]==1&&start<length){ ++start; }
		if(length-start==2 && a[start]==2 && a[start+1]==3)
		{
			for(int i=0;i<length-1;++i){ printf("%d ",a[i]); }
			printf("%d\n",a[length-1]);
			continue;
		}
		myReverse(start,length-1);
		for(int i=0;i<length-1;++i)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[length-1]);
	}
	system("pause");
	return 0;
}
void myReverse(int start,int end)
{
	while(start<end)
	{
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		++start;
		--end;
	}
	return;
}

*/