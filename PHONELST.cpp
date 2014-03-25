/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

struct node
{
	node *a[10];
	int word_count,pre_count;
public:
	node()
	{
		for(int i=0;i<10;++i)
		{
			a[i]=NULL;
		}
		word_count=pre_count=0;
	}
};

class trie
{
	node* root;
public:
	trie(){ root=new node(); }
	bool insert(char* str,int len)
	{
		node *cur=root;
		for(int i=0;i<len;++i)
		{
			if(cur->a[str[i]%48]!=NULL)
			{
				cur=cur->a[str[i]%48];
			}
			else
			{
				node *t=new node;
				cur->a[str[i]%48]=t;
				cur=t;
			}
			cur->pre_count += 1;
			if(cur->word_count>0){ return false; }
		}
		cur->word_count += 1;
		if(cur->pre_count>1){ return false; }
		return true;
	}
};

int main()
{
	int test,count;
	bool cons=true;
	bool ans=true;
	char num[12];
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&count);
		trie t;
		cons=ans=true;
		for(int i=0;i<count;++i)
		{
			scanf("%s",num);
			cons=t.insert(num,strlen(num));
			if(!cons){ ans=false; }
		}
		if(ans)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	system("pause");
	return 0;
}
*/