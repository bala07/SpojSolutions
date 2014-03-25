/*

#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

#define MAX 100010

int pos[MAX],rnk[MAX],cnt[MAX],nxt[MAX];
bool bh[MAX],b2h[MAX];

char str[200020];
int n;

bool smaller_first_char(int i,int j)
{
	return str[i]<str[j];
}

bool all_same(int);
void prepare_str(int);
void compute_sarray(char*,int);

int main()
{
	scanf("%s",str);
	n=strlen(str);
	if(all_same(n)){ printf("0\n"); return 0; }
	prepare_str(n);
	compute_sarray(str,2*n+1);
	//int ans=find_ans(n);
	printf("%d\n",pos[0]);
	system("pause");
	return 0;
}

bool all_same(int n)
{
	for(int i=1;i<n;++i)
	{
		if(str[i]!=str[i-1]){ return false; }
	}
	return true;
}

void prepare_str(int n)
{
	for(int i=0;i<n;++i)
	{
		str[n+i]=str[i];
	}
	str[2*n]='~';
	str[2*n+1]='\0';
	//printf("%s\n",str);
	return;
}

void compute_sarray(char* str,int n)
{
	for(int i=0;i<n;++i){ pos[i]=i; }
	sort(pos,pos+n,smaller_first_char);
	for(int i=0;i<n;++i)
	{
		bh[i]=(i==0||str[pos[i]]!=str[pos[i-1]]);
		b2h[i]=false;
	}
	for(int h=1;h<n;h<<=1)
	{
		int buckets=0;
		for(int i=0,j;i<n;i=j)
		{
			j=i+1;
			while(j<n && !bh[j]){ ++j; }
			nxt[i]=j;
			++buckets;
		}
		if(buckets==n){ break; }
		for(int i=0;i<n;i=nxt[i])
		{
			cnt[i]=0;
			for(int j=i;j<nxt[i];++j)
			{
				rnk[pos[j]]=i;
			}
		}
		cnt[rnk[n-h]]++;
		b2h[rnk[n-h]]=true;
		for(int i=0;i<n;i=nxt[i])
		{
			for(int j=i;j<nxt[i];++j)
			{
				int s=pos[j]-h;
				if(s>=0)
				{
					int head=rnk[s];
					rnk[s]=head+cnt[head]++;
					b2h[rnk[s]]=true;
				}
			}
			for(int j=i;j<nxt[i];++j)
			{
				int s=pos[j]-h;
				if(s>=0 && b2h[rnk[s]])
				{
					for(int k=rnk[s]+1;!bh[k]&&b2h[k];++k){ b2h[k]=false; }
				}
			}
		}
		for(int i=0;i<n;++i)
		{
			pos[rnk[i]]=i;
			bh[i]=b2h[i];
		}
	}
	return;
}
*/
/*int find_ans(int n)
{
	int ret=0;
	int min_rank=rnk[0];
	for(int i=1;i<n;++i)
	{
		if(rnk[i]<min_rank)
		{
			min_rank=rnk[i];
			ret=i;
		}
	}
	return ret;
}*/