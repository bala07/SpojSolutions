/* Accepted */

/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

int find_ans(char*);

int main()
{
	int test;
	char str[100010];
	scanf("%d",&test);
	gets(str);
	while(test--)
	{
		gets(str);
		int ans=find_ans(str);
		printf("%d\n",ans);
	}
	system("pause");
	return 0;
}
int find_ans(char* str)
{
	int max_count=0;
	int l_prev=0,l_cur=0,count=0,index=0;
	int len=strlen(str);
	while(index<len)
	{
		l_cur=0;
		while(index<len && ( str[index]==' ' || str[index]=='\t' || str[index]=='\r' )){ ++index; }
		if(index>=len){ break; }
		while(index<len && str[index]!=' ' && str[index]!='\t' && str[index]!='\r')
		{
			l_cur++;
			index++;
		}
		if(l_cur==l_prev)
		{
			++count;
			max_count=max(count,max_count);
		}
		else
		{
			l_prev=l_cur;
			count=1;
			max_count=max(count,max_count);
		}
	}
	return max_count;
}
*/