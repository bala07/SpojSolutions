/* Accepted */

/*
#include<iostream>
#include<stdio.h>

using namespace std;

int gain[1001];
int debt_info[1001][1001];

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
	int n;
	//scanf("%d",&n);
	n=next_int();
	int k=1;
	int total=0,res=0;
	while(n)
	{
		total=res=0;
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				scanf("%d",&debt_info[i][j]);
				//debt_info[i][j]=next_int();
				total += debt_info[i][j];
			}
		}
		for(int i=0;i<n;++i)
		{
			for(int j=i+1;j<n;++j)
			{
				gain[i] -= debt_info[i][j];
				gain[j] += debt_info[i][j];
				gain[i] += debt_info[j][i];
				gain[j] -= debt_info[j][i];
			}
			if(gain[i]>0){ res += gain[i]; }
			gain[i]=0;
		}
		printf("%d. %d %d\n",k,total,res);
		++k;
		scanf("%d",&n);
	}
	return 0;
}

*/
