/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

int next_int()
{
	char ch;
	int n=0;
	ch=getchar_unlocked();
	while(!('0'<=ch && ch<= '9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}
char next_char()
{
	char ch;
	ch=getchar_unlocked();
	while(ch!='U' || ch!='Q'){ ch=getchar_unlocked(); }
	return ch;
}


struct node
{
	int size;
	int a[2];
}tree[1000100];

void initialize(int,int,int);
void update(int,int,int,int,int,int);
node query(int,int,int,int,int);
int find_max(int,int,int,int);

int num[100010];

int main()
{
	int length,q_count,from,to;
	char choice=' ';
	//scanf("%d",&length);
	length=next_int();
	for(int i=1;i<=length;++i)
	{
		//scanf("%d",&num[i]);
		num[i]=next_int();
	}
	initialize(1,length,1);
	//scanf("%d",&q_count);
	q_count=next_int();
	for(int i=0;i<q_count;++i)
	{
		//scanf("%c",&choice);
		//printf("The choice is %c\n",choice);
		//scanf("%d %d",&from,&to);
		//cin>>choice>>from>>to;
		choice=next_char();
		from=next_int();
		to=next_int();
		if(choice=='U')
		{
			update(1,length,from,from,1,to);
		}
		else
		{
			node ans=query(1,length,from,to,1);
			printf("%d\n",(ans.a[0]+ans.a[1]));
		}
	}
	system("pause");
	return 0;
}

void initialize(int start,int end,int pos)
{
	if(start==end)
	{
		tree[pos].size=1;
		tree[pos].a[0]=num[start];
		return;
	}
	int mid=(start+end)/2;
	initialize(start,mid,pos<<1);
	initialize(mid+1,end,(pos<<1)|1);
	tree[pos].size=2;
	int index=0;
	int val1,val2,val3,val4;
	val1=val2=val3=val4=-1;
	if(tree[pos<<1].size>index){ val1=tree[pos<<1].a[index++]; }
	if(tree[pos<<1].size>index){ val2=tree[pos<<1].a[index++]; }
	index=0;
	if(tree[(pos<<1)|1].size>index){ val3=tree[(pos<<1)|1].a[index++]; }
	if(tree[(pos<<1)|1].size>index){ val4=tree[(pos<<1)|1].a[index++]; }
	tree[pos].a[1]=find_max(val1,val2,val3,val4);
	if(tree[pos].a[1]==val1){val1=-1; }
	else if(tree[pos].a[1]==val2){ val2=-1; }
	else if(tree[pos].a[1]==val3){ val3=-1; }
	else{ val4=-1; }
	tree[pos].a[0]=find_max(val1,val2,val3,val4);
	return;
}

void update(int start,int end,int from,int to,int pos,int val)
{
	if(from>end || to<start){ return; }
	if(start==end && from==start)
	{
		tree[pos].a[0]=val;
		num[start]=val;
		return;
	}
	int mid=(start+end)/2;
	update(start,mid,from,to,pos<<1,val);
	update(mid+1,end,from,to,(pos<<1)|1,val);
	int index=0;
	int val1,val2,val3,val4;
	val1=val2=val3=val4=-1;
	if(tree[pos<<1].size>index){ val1=tree[pos<<1].a[index++]; }
	if(tree[pos<<1].size>index){ val2=tree[pos<<1].a[index++]; }
	index=0;
	if(tree[(pos<<1)|1].size>index){ val3=tree[(pos<<1)|1].a[index++]; }
	if(tree[(pos<<1)|1].size>index){ val4=tree[(pos<<1)|1].a[index++]; }
	tree[pos].a[1]=find_max(val1,val2,val3,val4);
	if(tree[pos].a[1]==val1){val1=-1; }
	else if(tree[pos].a[1]==val2){ val2=-1; }
	else if(tree[pos].a[1]==val3){ val3=-1; }
	else{ val4=-1; }
	tree[pos].a[0]=find_max(val1,val2,val3,val4);
	return;
}

node query(int start,int end,int from,int to,int pos)
{
	if(from>end || to<start)
	{
		node ret;
		ret.size=0;
		return ret;
	}
	if(from<=start && end<=to)
	{
		node ret;
		ret.size=tree[pos].size;
		ret.a[0]=tree[pos].a[0];
		ret.a[1]=tree[pos].a[1];
		return ret;
	}
	int mid=(start+end)/2;
	node l=query(start,mid,from,to,pos<<1);
	node r=query(mid+1,end,from,to,(pos<<1)|1);
	if(l.size==0){ return r; }
	if(r.size==0){ return l; }
	node ret;
	ret.size=2;
	int val1,val2,val3,val4;
	val1=val2=val3=val4=-1;
	int index=0;
	if(l.size>index){ val1=l.a[index++]; }
	if(l.size>index){ val2=l.a[index++]; }
	index=0;
	if(r.size>index){ val3=r.a[index++]; }
	if(r.size>index){ val4=r.a[index++]; }
	ret.a[1]=find_max(val1,val2,val3,val4);
	if(ret.a[1]==val1){val1=-1; }
	else if(ret.a[1]==val2){ val2=-1; }
	else if(ret.a[1]==val3){ val3=-1; }
	else{ val4=-1; }
	ret.a[0]=find_max(val1,val2,val3,val4);
	return ret;
}

int find_max(int v1,int v2,int v3,int v4)
{
	if(v1>=v2 && v1>=v3 && v1>=v4){ return v1; }
	else if(v2>=v1 && v2>=v3 && v2>=v4){ return v2; }
	else if(v3>=v1 && v3>=v2 && v3>=v4){ return v3; }
	return v4;
}

*/