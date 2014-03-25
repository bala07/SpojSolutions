/*Accepted */
/*
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void computeFailFunction(int,int);
int match(int,int,int,int,int);

char location[305][305];
char map[2050][2050];
int found[2050][2050];
int fail[2050][2050];


int main()
{
	int l1,l2,m1,m2;
	scanf("%d %d",&l1,&l2);
	for(int i=0;i<l1;++i)
	{
		scanf("%s",&location[i]);
	}
	//for(int i=0;i<l1;++i){ printf("\n%s",location[i]); }
	scanf("%d %d",&m1,&m2);
	for(int i=0;i<m1;++i){ scanf("%s",&map[i]); }
	//for(int i=0;i<m1;++i){ printf("\n%s",map[i]); }
	computeFailFunction(l1,l2);
	//printf("\nFail function computed");
	bool noMatch=true;
	for(int i=0;(m1-i)>=l1;++i)
	{
		bool flag=true;
		int index=i;
		for(int j=0;j<l1;++j,++index)
		{
			if(!match(i,index,j,m2,l2)){ flag=false; break; }
		}
		if(flag)
		{
			for(int j=0;j<m2;++j)
			{
				if(found[i][j]==l1){ printf("(%d,%d)\n",i+1,j+1); noMatch=false; }
			}
		}
	}
	if(noMatch){printf("NO MATCH FOUND...\n"); }
	return 0;
}
void computeFailFunction(int l1,int l2)
{
	for(int k=0;k<l1;++k)
	{
		fail[k][0]=0;
		int j=0,i=1;
		while(i<l2)
		{
			if(location[k][j]==location[k][i])
			{
				fail[k][i]=j+1;
				++i;
				++j;
			}
			else if(j>0)
			{
				j=fail[k][j-1];
			}
			else
			{
				fail[k][j]=0;
				++i;
			}
		}
	}
}
int match(int start,int text,int pattern,int t_length,int p_length)
{
	//printf("\nEntered KMP");
	int i=0,j=0;
	int ret=0;
	while(i<t_length)
	{
		if(location[pattern][j]==map[text][i])
		{
			if(j==p_length-1)
			{
				found[start][i-p_length+1] += 1;
				//printf("\nPattern found %d %d %d",text,pattern,i-p_length+1);
				ret=1;
				i=i-p_length+2;
				if(t_length-i<j){ return ret; }
				j=0;
			}
			else
			{
				++i;
				++j;
			}
		}
		else if(j>0)
		{
			j=fail[pattern][j-1];
		}
		else
		{
			++i;
		}
	}
	//printf("\nFinished computing KMP");
	return ret;
}

*/

