/*
#include<iostream>
#include<cstdlib>
#include<stdio.h>

using namespace std;

void initialize(int,int,int);
void modify(int,int,int,int,int);

char input[30010];

struct s_node
{
	char start,end;
	int l_count,r_count;
	bool flag;
}node[300010];

int main()
{
	for(int test=1;test<=10;++test)
	{
		int length,choice;
		long count;
		scanf("%d",&length);
		scanf("%s",input+1);
		initialize(1,length,1);
		//printf("%s",input+1);
		scanf("%ld",&count);
		printf("Test %d:\n",test);
		while(count--)
		{
			scanf("%d",&choice);
			if(!choice)
			{
				if(node[1].start != node[1].end && node[1].l_count==node[1].r_count)
				{
					printf("YES\n");
				}
				else{ printf("NO\n"); }
				//printf("%d %d\n",node[0].l_count,node[0].r_count);
			}
			else
			{
				modify(1,length,choice,choice,1);
				//printf("%d %d\n",node[0].l_count,node[0].r_count);
				//printf("%c\n",node[6].start);
			}
		}
	}
	system("pause");
	return 0;
}

void initialize(int start,int end,int pos)
{
	if(start==end)
	{
		node[pos].start=node[pos].end=input[start];
		node[pos].l_count=node[pos].r_count=0;
		node[pos].flag=true;
		return;
	}
	initialize(start,(start+end)/2,pos*2);
	initialize((start+end)/2+1,end,pos*2+1);
	node[pos].start=node[pos*2].start;
	node[pos].end=node[pos*2+1].end;
	node[pos].l_count=node[pos*2].l_count+node[pos*2+1].l_count;
	node[pos].r_count=node[pos*2].r_count+node[pos*2+1].r_count;
	if(!node[pos*2].flag)
	{
		if(node[pos*2].end=='('){ node[pos].l_count++; }
		else{ node[pos].r_count++; }
	}
	if(!node[pos*2+1].flag)
	{
		if(node[pos*2+1].start=='('){ node[pos].l_count++; }
		else{ node[pos].r_count++; }
	}
	node[pos].flag=false;
	return;
}

void modify(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start){ return; }
	if(start==end && from==start)
	{
		char ch=(node[pos].start=='(' ? ')' : '(');
		node[pos].start=ch;
		node[pos].end=ch;
		return;
	}
	modify(start,(start+end)/2,from,to,pos*2);
	modify((start+end)/2+1,end,from,to,pos*2+1);
	node[pos].start=node[pos*2].start;
	node[pos].end=node[pos*2+1].end;
	node[pos].l_count=node[pos*2].l_count+node[pos*2+1].l_count;
	node[pos].r_count=node[pos*2].r_count+node[pos*2+1].r_count;
	if(!node[pos*2].flag)
	{
		if(node[pos*2].end=='('){ node[pos].l_count++; }
		else{ node[pos].r_count++; }
	}
	if(!node[pos*2+1].flag)
	{
		if(node[pos*2+1].start=='('){ node[pos].l_count++; }
		else{ node[pos].r_count++; }
	}
	node[pos].flag=false;
	return;
}
*/