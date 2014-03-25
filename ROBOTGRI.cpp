/* Accepted */

/*
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<queue>

using namespace std;

char board[1010][1010];
int mod=2147483647;
bool vis[1010][1010];
long long dp[1010][1010];

struct pos
{
	int x,y;
	pos(int a=0,int b=0)
	{
		x=a,y=b;
	}
};

int find_paths(int,int,int,int);
bool find_path(int,int);

int main()
{
	int r,c;
	scanf("%d",&r);
	c=r;
	char temp[10];
	gets(temp);
	for(int i=0;i<r;++i){ gets(board[i]); }
	int paths=find_paths(0,0,r,c);
	if(paths>0)
	{
		printf("%d\n",(paths)%mod);
	}
	else
	{
		if(find_path(r,c))
		{
			printf("THE GAME IS A LIE\n");
		}
		else
		{
			printf("INCONCEIVABLE\n");
		}
	}
	system("pause");
	return 0;
}

int find_paths(int x,int y,int r,int c)
{
	dp[0][0]=1;
	for(int i=1;i<r;++i)
	{
		if(board[i][0]!='#'){ dp[i][0]=dp[i-1][0]; }
		if(board[0][i]!='#'){ dp[0][i]=dp[0][i-1]; }
	}
	for(int i=1;i<r;++i)
	{
		for(int j=1;j<c;++j)
		{
			if(board[i][j]!='#')
			{
				dp[i][j]=(dp[i][j-1]+dp[i-1][j])%mod;
			}
		}
	}
	for(int i=0;i<r;++i)
	{
		for(int j=0;j<c;++j){ printf("%lld ",dp[i][j]); }
		printf("\n");
	}

	return (int)(dp[r-1][c-1]%mod);
}

bool find_path(int r,int c)
{
	pos cur;
	bool done=false;
	queue<pos> q;
	q.push(cur);
	vis[0][0]=true;
	while(!done && !q.empty())
	{
		cur=q.front();
		q.pop();
		if(cur.x==r-1 && cur.y==c-1)
		{
			done=true;
			continue;
		}
		int x=cur.x,y=cur.y;
		if(x-1>=0 && board[x-1][y]!='#' && !vis[x-1][y])
		{
			pos t(x-1,y);
			q.push(t);
			vis[x-1][y]=true;
		}
		if(x+1<r && board[x+1][y]!='#' && !vis[x+1][y])
		{
			pos t(x+1,y);
			q.push(t);
			vis[x+1][y]=true;
		}
		if(y-1>=0 && board[x][y-1]!='#' && !vis[x][y-1])
		{
			pos t(x,y-1);
			q.push(t);
			vis[x][y-1]=true;
		}
		if(y+1<c && board[x][y+1]!='#' && !vis[x][y+1])
		{
			pos t(x,y+1);
			q.push(t);
			vis[x][y+1]=true;
		}
	}
	return done;
}
*/