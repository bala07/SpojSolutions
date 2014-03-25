/* Accepted */

/*
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <deque>

using namespace std;

int a[1000010];
int res[1000010];

void do_it(int,int);



int main()
{
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	do_it(n,k);
	for(int i=0;i<n-k;++i)
	{
		printf("%d ",res[i]);
	}
	printf("%d\n",res[n-k]);
	system("pause");
	return 0;
}

void do_it(int n,int k)
{
	deque<int> q;
	for(int i=0;i<k;++i)
	{
		while(!q.empty() && a[i]>=a[q.back()])
		{
			q.pop_back();
		}
		q.push_back(i);
	}
	//printf("%d\n",q.front());
	for(int i=k;i<n;++i)
	{
		res[i-k]=a[q.front()];
		while(!q.empty() && a[i]>=a[q.back()]){ q.pop_back(); }
		while(!q.empty() && q.front()<=i-k){ q.pop_front(); }
		q.push_back(i);
	}
	res[n-k]=a[q.front()];
	return;
}
*/



