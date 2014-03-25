/* Accepted */
/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;
int res[10000010];

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

void run_z_algo(char*,int);

int main()
{
	int test;
	char str[1000010];
	scanf("%d",&test);
	//test=next_int();
	int q_count,index;
	while(test--)
	{
		scanf("%s",str);
		int len=strlen(str);
		run_z_algo(str,len);
		scanf("%d",&q_count);
		//q_count=next_int();
		while(q_count--)
		{
			scanf("%d",&index);
			//index=next_int();
			printf("%d\n",res[len-index]);
		}
	}
	system("pause");
	return 0;
}

void run_z_algo(char* str,int len)
{
	res[0]=len;
	for(int i=0;i<len/2;++i)
	{
		char temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
	//printf("%s\n",str);
	int l=0,r=0;
	int zk=0;
	for(int k=1;k<len;++k)
	{
		zk=0;
		if(k>r)
		{
			int si;
			for(si=0;si<len;++si)
			{
				if(k+si>=len || str[si]!=str[k+si]){ break; }
			}
			if(si>0)
			{
				zk=si;
				l=k;
				r=k+zk-1;
			}
		}
		else
		{
			int kOld=k-l;
			int zOld=res[kOld];
			int b=r-k+1;
			if(zOld<b)
			{
				zk=zOld;
			}
			else
			{
				zk=b;
				int si;
				for(si=b;si<len;++si)
				{
					if(k+si>=len || str[si]!=str[k+si]){ break; }
				}
				zk=si;
				l=k;
				r=k+zk-1;
			}
		}
		res[k]=zk;
	}
	//for(int i=0;i<len;++i){ printf("%d ",res[i]); }
	//printf("\n");
	return;
}
*/