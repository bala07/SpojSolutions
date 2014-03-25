/* Accepted */

/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

int a[1000010];

long long find_ans(int);


int main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		for(int i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
		}
		printf("%lld\n",find_ans(n));
		scanf("%d",&n);
	}
	system("pause");
	return 0;
}

long long find_ans(int n)
{
	long long count=0;
	int left,right,mid;
	mid=n/2;
	if(n&1==1)
	{
		left=mid-1,right=mid+1;
	}
	else
	{
		count += a[mid]-a[mid-1]-1;
		a[mid-1]=a[mid]-1;
		left=mid-2,right=mid+1;
	}
	while(left>=0)
	{
		count += a[left+1]-a[left]-1;
		a[left]=a[left+1]-1;
		count += a[right]-a[right-1]-1;
		a[right]=a[right-1]+1;
		left--;
		right++;
	}
	return count;
}
*/