/* Accepted */


/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

char t[20010],p[110];
char text[20010];
int pos[110];

int find_ans();

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s",t);
		scanf("%s",p);
		int ans=find_ans();
		printf("%d\n",ans==INT_MAX ? -1 : ans);
	}
	system("pause");
	return 0;
}

int find_ans()
{
	int ret=INT_MAX;
	for(int i=0;i<110;++i){ pos[i]=-1; }
	int t_len=strlen(t);
	int p_len=strlen(p);
	for(int i=0;t_len-i>=p_len;++i)
	{
		if(t[i]!=p[0]){ continue; }
		pos[0]=i;
		int j=i+1;
		int cur=1;
		while(cur<p_len && j<t_len)
		{
			if(pos[cur]>pos[cur-1])
			{
				j=pos[cur]+1;
				++cur;
				continue;
			}
			for(;j<t_len;++j)
			{
				if(t[j]==p[cur])
				{
					pos[cur++]=j++;
					break;
				}
			}
		}
		if(cur>=p_len){ ret=min(ret,pos[p_len-1]-pos[0]+1); }
	}
	return ret;
}
*/