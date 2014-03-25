/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

const int N=100010;

int pos[N],cnt[N],rnk[N],nxt[N];
bool bh[N],b2h[N];
char str[N],p[2010];

bool smaller_char_first(int a,int b)
{
	return str[a]<str[b];
}

void s_array(char*,int);
bool is_substring(char*,int);

int main()
{
	scanf("%s",str);
	int count;
	int n=strlen(str);
	s_array(str,n);
	scanf("%d",&count);
	while(count--)
	{
		scanf("%s",p);
		if(is_substring(p,n))
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}
	system("pause");
	return 0;
}

void s_array(char* str,int n)
{
	for(int i=0;i<n;++i){ pos[i]=i; }
	sort(pos,pos+n,smaller_char_first);
	for(int i=0;i<n;++i)
	{
		bh[i]=(i==0 || str[pos[i]]!=str[pos[i-1]] );
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
			buckets++;
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
			bh[i] = b2h[i];
		}
	}
	return;
}

bool is_substring(char* p,int n)
{
	int l=strlen(p);
	if(l>n){ return false; }
	int left=0,right=n-1;
	char temp=' ';
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(pos[mid]+l<n)
		{
			temp=str[pos[mid]+l];
			str[pos[mid]+l]='\0';
		}
		int val=strcmp(p,str+pos[mid]);
		if(val<0){ right=mid-1; }
		else if(val==0)
		{
			if(pos[mid]+l<n){ str[pos[mid]+l]=temp; }
			return true; 
		}
		else{ left=mid+1; }
		if(pos[mid]+l<n)
		{
			str[pos[mid]+l]=temp;
		}
	}
	return false;
}
*/
