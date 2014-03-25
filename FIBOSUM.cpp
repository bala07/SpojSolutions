/* Accepted */

/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

long long MOD=1000000007ll;

struct matrix
{
	long long v00,v01,v10,v11;
	matrix(unsigned long long a=0,unsigned long long b=0,unsigned long long c=0,unsigned long long d=0)
	{
		v00=a,v01=b,v10=c,v11=d;
	}
};

long long mod(long long,long long);

matrix findFibo(matrix,int);

int main()
{
	int test,n,m;
	matrix x(1,1,1,0);
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d %d",&n,&m);
		matrix res1=findFibo(x,m+2);
		matrix res2=findFibo(x,n+1);
		//printf("%lld %lld\n",res1.v01,res2.v01);
		printf("%lld\n",mod(mod(res1.v01,MOD)+mod(-res2.v01,MOD),MOD));
	}
	system("pause");
	return 0;
}

matrix findFibo(matrix x,int n)
{
	if(n==1){ return x; }
	matrix ret=findFibo(x,n/2);
	matrix a=ret,b=ret;
	ret.v00=mod( (mod(a.v00*b.v00,MOD) + mod(a.v01*b.v10,MOD)),MOD );
	ret.v01=mod( (mod(a.v00*b.v01,MOD) + mod(a.v01*b.v11,MOD)),MOD );
	ret.v10=mod( (mod(a.v10*b.v00,MOD) + mod(a.v11*b.v10,MOD)),MOD );
	ret.v11=mod( (mod(a.v10*b.v01,MOD) + mod(a.v11*b.v11,MOD)),MOD );
	if(n%2==1)
	{
		a=ret,b=x;
		ret.v00=mod( (mod(a.v00*b.v00,MOD) + mod(a.v01*b.v10,MOD)),MOD );
		ret.v01=mod( (mod(a.v00*b.v01,MOD) + mod(a.v01*b.v11,MOD)),MOD );
		ret.v10=mod( (mod(a.v10*b.v00,MOD) + mod(a.v11*b.v10,MOD)),MOD );
		ret.v11=mod( (mod(a.v10*b.v01,MOD) + mod(a.v11*b.v11,MOD)),MOD );
	}
	return ret;
}

long long mod (long long a,long long b)
{
   long long ret = a % MOD;
   if(ret < 0)
     ret+=b;
   return ret;
}
*/