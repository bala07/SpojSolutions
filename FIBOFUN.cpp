/* Accepted */

/*

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

struct matrix
{
	long long v00,v01,v10,v11;
	matrix(int a=0,int b=0,int c=0,int d=0)
	{
		v00=a,v01=b,v10=c,v11=d;
	}
};

matrix fibo_num(matrix,int,int);
long long mod(long long,long long);

int main()
{
	int test,a,b,n,m;
	matrix mat(1,1,1,0);
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d %d %d %d",&a,&b,&n,&m);
		matrix res1=fibo_num(mat,n+2,m);
		matrix res2=fibo_num(mat,n+1,m);
		long long ans=mod( mod(res1.v01*a,m) + mod(res2.v01*(b-a),m),m );
		ans=mod( ans - (mod(b,m)),m );
		printf("%lld\n",ans);
	}
	system("pause");
	return 0;
}

matrix fibo_num(matrix mat,int n,int m)
{
	if(n==1){ return mat; }
	matrix ret=fibo_num(mat,n/2,m);
	matrix a=ret,b=ret;
	ret.v00=mod( (mod(a.v00*b.v00,m) + mod(a.v01*b.v10,m)),m );
	ret.v01=mod( (mod(a.v00*b.v01,m) + mod(a.v01*b.v11,m)),m );
	ret.v10=mod( (mod(a.v10*b.v00,m) + mod(a.v11*b.v10,m)),m );
	ret.v11=mod( (mod(a.v10*b.v01,m) + mod(a.v11*b.v11,m)),m );
	if(n%2==1)
	{
		a=ret,b=mat;
		ret.v00=mod( (mod(a.v00*b.v00,m) + mod(a.v01*b.v10,m)),m );
		ret.v01=mod( (mod(a.v00*b.v01,m) + mod(a.v01*b.v11,m)),m );
		ret.v10=mod( (mod(a.v10*b.v00,m) + mod(a.v11*b.v10,m)),m );
		ret.v11=mod( (mod(a.v10*b.v01,m) + mod(a.v11*b.v11,m)),m );
	}
	return ret;
}

long long mod(long long a,long long b)
{
	long long ret;
	ret=a%b;
	if(ret<0)
	{
		ret += b;
	}
	return ret;
}

*/

