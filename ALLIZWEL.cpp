/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

/*int next_int()
{
	char ch;
	int n=0;
	ch=getchar_unlocked();
	while(!('0'<=ch && ch<='9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}

char *str="ALLIZZWELL";

char input[101][101];
bool visited[101][101];

void find(int,int,int,int);

struct loc
{
	int x,y;
};

loc p[10002];

bool found=false;
int R,C;

int main()
{
	int test;
	int index=0;
	test=next_int();
	//scanf("%d",&test);
	while(test--)
	{
		found=false;
		R=next_int();
		C=next_int();
		//scanf("%d %d",&R,&C);
		for(int i=0;i<R;++i)
		{
			scanf("%s",input[i]);
		}
		for(int i=0;i<R;++i)
		{
			for(int j=0;j<C;++j)
			{
				if(input[i][j]=='A')
				{
					visited[i][j]=true;
					find(i,j,0,10);
					visited[i][j]=false;
					if(found){ printf("YES\n"); break; }
				}
				if(found){ break; }
			}
			if(found){ break; }
		}
		if(!found){ printf("NO\n"); }
		printf("\n");
	}
	system("pause");
	return 0;
}

void find(int row,int col,int index,int length)
{
	//printf("Inside find function\n");
	if(input[row][col]==str[index] && index==length-1)
	{
		found=true;
		return;
	}
	else if(input[row][col]!=str[index]){ return; }
	//printf("%c\n",input[row][col]);
	int r,c;
	for(int i=-1;i<=1;++i)
	{
		for(int j=-1;j<=1;++j)
		{
			if(i==0 && j==0){ continue; }
			r=row+i,c=col+j;
			if(0<=r && r<R && 0<=c && c<C && !visited[r][c])
			{
				visited[r][c]=true;
				find(r,c,index+1,length);
				visited[r][c]=false;
				if(found){ return; }
			}
		}
	}
	return;
}
*/