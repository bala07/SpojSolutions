/* Accepted */


/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

int lucky[1001];

void findLuckyNumbers();
bool isLucky(int);

/*int next_int()
{
	char ch;
	int n=0;
	ch=getchar_unlocked();
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
	findLuckyNumbers();
	scanf("%d",&test);
	//test=next_int();
	int n;
	while(test--)
	{
		scanf("%d",&n);
		//n=next_int();
		printf("%d\n",lucky[n-1]);
	}
	return 0;
}
void findLuckyNumbers()
{
	lucky[0]=30;
	lucky[1]=42;
	int count=2;
	for(int i=43;(i<=1000000 && count<=1000);++i)
	{
		if(isLucky(i)){ lucky[count++]=i; }
	}
	return;
}

bool isLucky(int num)
{
	int count=0;
	int i=2;
	while(i*i<=num)
	{
		if(num%i==0)
		{
			++count;
			while(num%i==0){ num /= i; }
		}
		++i;
	}
	if(num>1){ ++count; }
	if(count>=3){ return true; }
	return false;
}
*/