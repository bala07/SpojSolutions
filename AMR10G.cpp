/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<climits>
#include<algorithm>

using namespace std;

int height[20010];

/*int next_int()
{
	char ch=getchar_unlocked();
	int n=0;
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
	int test,count,to_select;
	int min_height=INT_MAX;
	//test=next_int();
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d %d",&count,&to_select);
		//count=next_int();
		//to_select=next_int();
		min_height=INT_MAX;
		for(int i=0;i<count;++i)
		{ 
			scanf("%d",&height[i]); 
			//height[i]=next_int();
		}
		if(to_select==1){ printf("%d\n",0); continue; }
		sort(height,height+count);
		for(int i=0;(count-i)>=to_select;++i)
		{
			min_height=min(min_height,height[i+to_select-1]-height[i]);
		}
		printf("%d\n",min_height);
	}
}

*/
