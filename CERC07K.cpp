/* Accepted..! */

/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstdlib>

using namespace std;

char board[110][110];

struct node
{
	int x,y,step;
	int k[4];
};

struct q_node
{
	node t;
	q_node *next;
};

class queue
{
	q_node *front,*rear;
public:
	queue(){ front=rear=NULL; }
	void push(node t)
	{
		q_node *n=new q_node;
		n->t=t;
		n->next=NULL;
		if(!front)
		{
			front=rear=n;
		}
		else
		{
			rear->next=n;
			rear=n;
		}
		return;
	}
	node pop()
	{
		node ret=front->t;
		if(front==rear)
		{
			front=rear=NULL;
		}
		else
		{
			front=front->next;
		}
		return ret;
	}
	bool empty()
	{
		if(!front){ return true; }
		return false;
	}
};

struct keys
{
	int k[4];
}vis[100][100];

int row,col;

void find_answer();
node get_next_node(node,char);
		

int main()
{
	scanf("%d %d",&row,&col);
	while(row!=0 && col!=0)
	{
		for(int i=0;i<row;++i)
		{
			scanf("%s",board[i]);
		}
		for(int i=0;i<100;++i)
		{
			for(int j=0;j<100;++j)
			{
				vis[i][j].k[0]=vis[i][j].k[1]=vis[i][j].k[2]=vis[i][j].k[3]=-1;
			}
		}
		find_answer();
		scanf("%d %d",&row,&col);
		
	}
	system("pause");
	return 0;
}

void find_answer()
{
	node t;
	bool found=false;
	for(int i=0;i<row;++i)
	{
		for(int j=0;j<col;++j)
		{
			if(board[i][j]=='*')
			{
				t.x=i;
				t.y=j;
				found=true;
				break;
			}
		}
		if(found){ break; }
	}
	found=false;
	queue q;
	t.step=0;
	t.k[0]=t.k[1]=t.k[2]=t.k[3]=0;
	vis[t.x][t.y].k[0]=vis[t.x][t.y].k[1]=vis[t.x][t.y].k[2]=vis[t.x][t.y].k[3]=0;
	node s;
	q.push(t);
	while(!q.empty() && !found)
	{
		node cur=q.pop();
		if(cur.x>=0 && cur.x<row && cur.y-1>=0 && board[cur.x][cur.y-1]!='#')
		{
			s=get_next_node(cur,'L');
			if(s.x==-1){ found=true; break; }
			if(s.x!=-2) q.push(s);
		}
		if(cur.x>=0 && cur.x<row && cur.y+1<col && board[cur.x][cur.y+1]!='#')
		{
			s=get_next_node(cur,'R');
			if(s.x==-1){ found=true; break; }
			if(s.x!=-2) q.push(s);
		}
		if(cur.x-1>=0 &&  board[cur.x-1][cur.y]!='#')
		{
			s=get_next_node(cur,'U');
			if(s.x==-1){ found=true; break; }
			if(s.x!=-2) q.push(s);
		}
		if(cur.x+1<row && board[cur.x+1][cur.y]!='#')
		{
			s=get_next_node(cur,'D');
			if(s.x==-1){ found=true; break; }
			if(s.x!=-2) q.push(s);
		}
		
	}
	if(found)
	{
		printf("Escape possible in %d steps.\n",s.step);
	}
	else
	{
		printf("The poor student is trapped!\n");
	}
	return;
}

node get_next_node(node cur,char dir)
{
	int x,y;
	bool insert=false;
	if(dir=='U')
	{
		x=cur.x-1;
		y=cur.y;
	}
	else if(dir=='D')
	{
		x=cur.x+1;
		y=cur.y;
	}
	else if(dir=='L')
	{
		x=cur.x;
		y=cur.y-1;
	}
	else
	{
		x=cur.x;
		y=cur.y+1;
	}
	node ret;
	ret.x=ret.y=-2;
	if(board[x][y]=='.')
	{
		if(!(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='R')
	{
		if(cur.k[0]==1 && !(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
		
	}
	else if(board[x][y]=='G')
	{
		if(cur.k[1]==1 && !(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='B')
	{
		if(cur.k[2]==1 && !(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='Y')
	{
		if(cur.k[3]==1 && !(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='r')
	{
		if(!(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				vis[x][y].k[0]=1;
				ret.k[0]=1; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='g')
	{
		if(!(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				vis[x][y].k[1]=1;
				ret.k[0]=cur.k[0]; ret.k[1]=1; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='b')
	{
		if(!(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				vis[x][y].k[2]=1;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=1; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='y')
	{
		if(!(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				vis[x][y].k[3]=1;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=1;
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='*')
	{
		if(!(vis[x][y].k[0]==cur.k[0]&&vis[x][y].k[1]==cur.k[1]&&vis[x][y].k[2]==cur.k[2]&&vis[x][y].k[3]==cur.k[3]))
		{
			if(vis[x][y].k[0]==-1)
			{
				insert=true;
			}
			else
			{
				for(int i=0;i<4;++i)
				{
					if(cur.k[i]==1 && vis[x][y].k[i]!=1)
					{
						insert=true; break;
					}
				}
			}
			if(insert)
			{
				for(int i=0;i<4;++i)
				{
					vis[x][y].k[i] = (vis[x][y].k[i]<cur.k[i] ? cur.k[i] : vis[x][y].k[i]);
				}
				ret.x=x;
				ret.y=y;
				ret.k[0]=cur.k[0]; ret.k[1]=cur.k[1]; ret.k[2]=cur.k[2]; ret.k[3]=cur.k[3];
				ret.step=cur.step+1;
			}	
		}
	}
	else if(board[x][y]=='X')
	{
		ret.x=-1;
		ret.y=-1;
		ret.step=cur.step+1;
	}
	return ret;
}
*/




				



