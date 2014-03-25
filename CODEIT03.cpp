/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	char day[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int test,Y,d,m,y,c,w,mon;
	scanf("%d",&test);
	while(test--)
	{
		int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
		scanf("%d %d %d",&d,&m,&y);
		y -= m < 3;
		printf("%s\n",day[(y + y/4 - y/100 + y/400 + t[m-1] + d) % 7]);
	}
	system("pause");
	return 0;
}
*/