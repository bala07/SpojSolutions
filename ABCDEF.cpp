/* Accepted */


/*
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<utility>

using namespace std;

int firstOccurence(int*,int,int);
int lastOccurence(int*,int,int);
int l[1000009];
int r[1000009];

int main()
{
	int size;
	scanf("%d",&size);
	//size=next_int();
	int s[105];
	for(int i=0;i<size;i++)
	{ 
		scanf("%d",&s[i]); 
		//s[i]=next_int();
	}
	int index1=0,index2=0;
	for(int a=0;a<size;a++)
	{
		for(int b=0;b<size;b++)
		{
			for(int c=0;c<size;c++)
			{
				l[index1++]=s[a]*s[b]+s[c];
				if(s[a]!=0)r[index2++]=s[a]*(s[b]+s[c]);
			}
		}
	}
	int res=0;
	sort(l,l+index1);
	sort(r,r+index2);
	for(int i=0;i<index2;i++)
	{
		int low=firstOccurence(l,index1,r[i]);
		if(low!=-1)
		{
			int high=lastOccurence(l,index1,r[i]);
			res += high-low+1;
		}
	}
	printf("%d\n",res);
	return 0;
}
int firstOccurence(int *a,int l,int elem)
{
	int start=0,end=l-1;
	while(start<=end)
	{
		int middle=(start+end)/2;
		if(a[middle]==elem)
		{
			if(middle==start){ return start; }
			if(a[middle-1]==elem){ end=middle-1; }
			else{ return middle; }
		}
		else if(a[middle]>elem){ end=middle-1; }
		else{ start=middle+1; }
	}
	return -1;
}
int lastOccurence(int *a,int l,int elem)
{
	int start=0,end=l-1;
	while(start<=end)
	{
		int middle=(start+end)/2;
		if(a[middle]==elem)
		{
			if(middle==end){ return end; }
			if(a[middle+1]==elem){ start=middle+1; }
			else{ return middle; }
		}
		else if(a[middle]>elem){ end=middle-1; }
		else{ start=middle+1; }
	}
	return -1;
}
*/

