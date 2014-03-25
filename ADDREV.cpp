/* Accepted */
/*

#include<iostream>
#include<stdio.h>

long long reverse(long long);

int main()
{
	int test;
	long long a,b;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%lld %lld",&a,&b);
		a=reverse(a);
		b=reverse(b);
		long long sum=reverse(a+b);
		printf("%lld\n",sum);
	}
	return 0;
}
long long reverse(long long num)
{
	long long res=0;
	while(num>0)
	{
		res=(res*10)+num%10;
		num /= 10;
	}
	return res;
}

*/