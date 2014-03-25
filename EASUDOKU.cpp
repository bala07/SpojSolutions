/* Accepted */
/*
#include<iostream>
#include<stdio.h>

using namespace std;

bool solve(int,int);
bool check(int,int,int);

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

int board[9][9];

int main()
{
	int test;
	scanf("%d",&test);
	//test=next_int();
	while(test--)
	{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<9;++j)
			{
				scanf("%d",&board[i][j]);
				//board[i][j]=next_int();
			}
		}
		bool done=solve(0,0);
		if(done)
		{
			for(int i=0;i<9;++i)
			{
				printf("%d",board[i][0]);
				for(int j=1;j<9;++j){ printf(" %d",board[i][j]); }
				printf("\n");
			}
		}
		else
		{
			printf("No solution\n");
		}
	}
	system("pause");
	return 0;
}
bool solve(int row,int col)
{
	bool done=false;
	if(col==9)
	{
		if(row>=8){ return true; }
		done=solve(row+1,0);
		return done;
	}
	if(board[row][col]!=0)
	{
		done=solve(row,col+1);
		return done;
	}
	else
	{
		for(int i=1;i<=9;++i)
		{
			if(check(row,col,i))
			{
				board[row][col]=i;
				done=solve(row,col+1);
				if(done){ return true; }
				board[row][col]=0;
			}
		}
	}
	return done;
}
bool check(int row,int col,int n)
{
	for(int j=0;j<9;++j)
	{
		if(j==col){ continue; }
		if(board[row][j]==n){ return false; }
	}
	for(int i=0;i<9;++i)
	{
		if(i==row){ continue; }
		if(board[i][col]==n){ return false; }
	}
	int r=(row/3)*3;
	for(int i=0;i<3;++i,++r)
	{
		int c=(col/3)*3;
		for(int j=0;j<3;++j,++c)
		{
			if(r==row && c==col){ continue; }
			if(board[r][c]==n){ return false; }
		}
	}
	return true;
}
*/