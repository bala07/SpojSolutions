/*Accepted*/

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

#define MAX 50010

int pos[MAX],rnk[MAX],cnt[MAX],nxt[MAX],height[MAX];
bool bh[MAX],b2h[MAX];
char str[MAX];
int n=0;

bool smaller_first_char(int a,int b)
{
	return str[a]<str[b];
}

void compute_sarray();
void compute_lcp();
int find_ans();

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s",str);
		n=strlen(str);
		compute_sarray();
		compute_lcp();
		int ans=find_ans();
		printf("%d\n",ans);
	}
	system("pause");
	return 0;
}

void compute_sarray()
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
					for(int k=rnk[s]+1;!bh[k] && b2h[k];++k)
					{
						b2h[k]=false;
					}
				}
			}
		}
		for(int i=0;i<n;++i)
		{
			pos[rnk[i]]=i;
			bh[i]|=b2h[i];
		}
	}
	return;
}

void compute_lcp()
{
	for(int i=0;i<n;++i){ rnk[pos[i]]=i; }
	height[0]=0;
	for(int i=0,h=0;i<n;++i)
	{
		if(rnk[i]>0)
		{
			int j=pos[rnk[i]-1];
			while(i+h<n && j+h<n && str[i+h]==str[j+h]){ ++h; }
			height[rnk[i]]=h;
			if(h>0){ --h; }
		}
	}
	return;
}

int find_ans()
{
	int ret;
	if(n&1){ ret=(n+1)/2*n; }
	else{ ret=n/2*(n+1); }
	for(int i=1;i<n;++i)
	{
		ret -= height[i];
	}
	return ret;
}
*/