/* Accepted */

/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

#define SIZE 90010

char str[SIZE];
int pos[SIZE],rnk[SIZE],cnt[SIZE],nxt[SIZE],lcp[SIZE];
bool bh[SIZE],b2h[SIZE];

bool smaller_first_char(int a,int b)
{
	return str[a]<str[b];
}

void compute_sarray(int);
void find_answer(int,int);

int main()
{
	//scanf("%s",str);
	gets(str);
	int n=strlen(str);
	compute_sarray(n);
	int q_count;
	scanf("%d",&q_count);
	int k;
	while(q_count--)
	{
		scanf("%d",&k);
		find_answer(k,n);
	}
	system("pause");
	return 0;
}


void compute_sarray(int n)
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
					for(int k=rnk[s]+1;!bh[k] && b2h[k];++k){ b2h[k]=false; }
				}
			}
		}
		for(int i=0;i<n;++i)
		{
			pos[rnk[i]]=i;
			bh[i]=b2h[i];
		}
	}
	lcp[0]=0;
	for(int i=0,h=0;i<n;++i)
	{
		if(rnk[i]>0)
		{
			int j=pos[rnk[i]-1];
			while(i<n && j<n && str[i+h]==str[j+h]){ ++h; }
			lcp[rnk[i]]=h;
			if(h>0){ --h; }
		}
	}
	return;
}

void find_answer(int k,int n)
{
	int p_rnk=0,c_rnk=0;
	int i;
	for(i=0;i<n;++i)
	{
		c_rnk += n-pos[i]-lcp[i];
		if(c_rnk>=k){ break; }
		p_rnk=c_rnk;
	}
	int limit=pos[i]+lcp[i]+k-p_rnk;
	for(i=pos[i];i<limit;++i)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	return;
}
*/


