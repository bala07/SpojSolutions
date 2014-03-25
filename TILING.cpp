/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

char str[1001][1001];
int len[1001];

int find_period(int,int,int,int,char);
int find_answer(int,int);

int main()
{
	int test,row,col,ans;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d %d",&row,&col);
		for(int i=0;i<row;++i)
		{
			scanf("%s",str[i]);
		}
		ans=find_answer(row,col);
		printf("%d\n",ans);
	}
	system("pause");
	return 0;
}

int find_answer(int row,int col)
{
	int r_max=INT_MIN;
	int c_max=INT_MIN;
	for(int i=0;i<row;++i)
	{
		int period=find_period(i,0,row,col,'r');
		//printf("The period of row is %d\n",period);
		r_max=max(r_max,period);
	}
	for(int j=0;j<col;++j)
	{
		int period=find_period(0,j,row,col,'c');
		//printf("The period of col is %d\n",period);
		c_max=max(c_max,period);
	}
	return r_max*c_max;
}
int find_period(int r,int c,int row,int col,char ch)
{
	int j=0,i=1;
	if(ch=='r')
	{
		while(i<col)
		{
			if(str[r][j]==str[r][i])
			{
				len[i]=j+1;
				++i;
				++j;
			}
			else if(j>0)
			{
				j=len[j-1];
			}
			else
			{
				len[i]=0;
				++i;
			}
		}
		int p=col-len[col-1];
		if(col%p==0){ return p; }
		return col;
	}
	else
	{
		while(i<row)
		{
			if(str[i][c]==str[j][c])
			{
				len[i]=j+1;
				++i;
				++j;
			}
			else if(j>0)
			{
				j=len[j-1];
			}
			else
			{
				len[i]=0;
				++i;
			}
		}
		int p=row-len[row-1];
		if(row%p==0){ return p; }
		return row;
	}
}
*/

