/* Accepted */

/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<queue>

using namespace std;

char board[110][110];
bool vis[110][110];
int cnt[110][110];
int res=2147483647

struct node
{
	char dir;
	int x,y,count;
};

void find_ans(int,int,int,int);

int main()
{
	int row,col;
	scanf("%d %d",&col,&row);
	for(int i=0;i<row;++i)
	{
		scanf("%s",board[i]);
	}
	int s_x,s_y;
	bool done=false;
	for(int i=0;i<row;++i)
	{
		for(int j=0;j<col;++j)
		{
			cnt[i][j]=INT_MAX;
			if(!done && board[i][j]=='C')
			{
				s_x=i,s_y=j;
				done=true;
				vis[i][j]=true;
			}
		}
	}
	find_ans(s_x,s_y,row,col);
	printf("%d\n",res);
	system("pause");
	return 0;
}

void find_ans(int s_x,int s_y,int row,int col)
{
	bool done=false;
	cnt[s_x][s_y]=0;
	queue<node> q;
	node t,cur;
	t.count=0;
	if(s_x-1>=0 && board[s_x-1][s_y]!='*')
	{
		t.x=s_x-1,t.y=s_y;
		t.dir='N';
		cnt[s_x-1][s_y]=0;
		q.push(t);
	}
	if(s_x+1<row && board[s_x+1][s_y]!='*')
	{
		t.x=s_x+1,t.y=s_y;
		t.dir='S';
		cnt[s_x+1][s_y]=0;
		q.push(t);
	}
	if(s_y-1>=0 && board[s_x][s_y-1]!='*')
	{
		t.x=s_x,t.y=s_y-1;
		t.dir='W';
		cnt[s_x][s_y-1]=0;
		q.push(t);
	}
	if(s_y+1<col && board[s_x][s_y+1]!='*')
	{
		t.x=s_x,t.y=s_y+1;
		t.dir='E';
		cnt[s_x][s_y+1]=0;
		q.push(t);
	}
	while(!q.empty() && !done)
	{
		cur=q.front();
		q.pop();
		t.count=cur.count;
		int x=cur.x,y=cur.y;
		char d=cur.dir;
		//printf("x=%d y=%d dir=%c count=%d\n",x,y,d,cur.count);
		if(board[x][y]=='C')
		{
			if(cur.count<res){ res=cur.count; }
			continue;
		}
		if(x-1>=0 && board[x-1][y]!='*' && d!='S')
		{
			node t1;
			t1.x=x-1,t1.y=y,t1.count=cur.count;
			if(d=='E' || d=='W')
			{
				t1.count += 1;
			}
			t1.dir='N';
			if(cnt[x-1][y]>=t1.count && !(x-1==s_x && y==s_y))
			{
				cnt[x-1][y]=t1.count;
				q.push(t1);
			}
		}
		if(x+1<row && board[x+1][y]!='*' && d!='N')
		{
			node t1;
			t1.x=x+1,t1.y=y,t1.count=cur.count;
			if(d=='E' || d=='W')
			{
				t1.count += 1;
			}
			t1.dir='S';
			if(cnt[x+1][y]>=t1.count && !(x+1==s_x && y==s_y))
			{
				cnt[x+1][y]=t1.count;
				q.push(t1);
			}
		}
		if(y-1>=0 && board[x][y-1]!='*' && d!='E')
		{
			node t1;
			t1.x=x,t1.y=y-1,t1.count=cur.count;
			if(d=='N' || d=='S')
			{
				t1.count += 1;
			}
			t1.dir='W';
			if(cnt[x][y-1]>=t1.count && !(x==s_x && y-1==s_y))
			{
				//if(x==0 && y==1){ printf("Inside if\n"); }
				cnt[x][y-1]=t1.count;
				q.push(t1);
			}
			
		}
		if(y+1<col && board[x][y+1]!='*' && d!='W')
		{
			node t1;
			t1.x=x,t1.y=y+1,t1.count=cur.count;
			if(d=='N' || d=='S')
			{
				t1.count += 1;
			}
			t1.dir='E';
			if(cnt[x][y+1]>=t1.count && !(x==s_x && y+1==s_y))
			{
				cnt[x][y+1]=t1.count;
				q.push(t1);
			}
		}
	}
	return;
}

*/		
		



