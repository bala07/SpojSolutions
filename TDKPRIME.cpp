/*
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

bool comp[86028122];
vector<int> primes;

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
	comp[0]=comp[1]=true;
	int index=1;
	for(int i=3;i*i<=86028121;++i)
	{
		if(!comp[i])
		{
			for(int j=i*i;j<=86028121; j+=i)
			{
				comp[j]=true;
			}
		}
	}
	primes.push_back(2);
	primes.push_back(3);
	for(int i=5,j=7;i<=86028122;i+=6,j+=6)
	{
		if(!comp[i]){ primes.push_back(i); }
		if(!comp[j]){ primes.push_back(j); }
	}
	//printf("The count is %d\n",index);
	int q_count,k;
	scanf("%d",&q_count);
	//q_count=next_int();
	while(q_count--)
	{
		scanf("%d",&k);
		//k=next_int();
		printf("%d\n",primes.at(k-1));
	}
	system("pause");
	return 0;
}
*/