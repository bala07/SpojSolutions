/* Accepted */

/*

#include<iostream>
#include<stdio.h>
#include<map>
#include<utility>
#include<limits>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>

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

using namespace std;

struct str_cmp
{
	bool operator()(char const* a,char const* b)
	{
		return (strcmp(a,b)<0);
	}
};

void findShortestPath();
int findAnswer(map<char*,int,str_cmp>,int);

char loc[1001][22];
char temp[20003][22];
int loc_count,car_count,road_count;
char road[60];
int pos1,pos2;
int dis;
int dist[101][101];
int max_value=std::numeric_limits<int>::max();

int main()
{
	scanf("%d %d %d",&loc_count,&car_count,&road_count);
	//loc_count=next_int();
	//car_count=next_int();
	//road_count=next_int();
	int test=1;
	while(loc_count!=0 || car_count!=0 || road_count!=0)
	{
		for(int i=0;i<=100;++i)
		{
			for(int j=0;j<=100;++j){ dist[i][j]=max_value; }
		}
		int value=0;
		map<char*,int,str_cmp> mymap;
		map<char*,int,str_cmp>::iterator it;
		int index=0;
		for(int i=0;i<=car_count;++i)
		{
			scanf("%s",loc[i]);
			it=mymap.find(loc[i]);
			if(it==mymap.end())
			{
				mymap[loc[i]]=value++;
			}
		}
		index=0;
		for(int i=0;i<road_count;++i)
		{
			scanf("%s",temp[index]);
			it=mymap.find(temp[index]);
			if(it==mymap.end())
			{
				mymap[temp[index]]=value;
				pos1=value++;
			}
			else{ pos1=it->second; }
			++index;
			scanf("%s",road);
			int l=strlen(road);
			road[l-2]='\0';
			dis=atoi(road+2);
			scanf("%s",temp[index]);
			it=mymap.find(temp[index]);
			if(it==mymap.end())
			{
				mymap[temp[index]]=value;
				pos2=value++;
			}
			else{ pos2=it->second; }
			++index;
			if(road[0]=='<' && road[l-1]=='>')
			{
				dist[pos1][pos2]=min(dis,dist[pos1][pos2]);
				dist[pos2][pos1]=min(dis,dist[pos2][pos1]);
			}
			else if(road[0]=='<'){ dist[pos2][pos1]=min(dis,dist[pos2][pos1]); }
			else{ dist[pos1][pos2]=min(dis,dist[pos1][pos2]);}
		}
		findShortestPath();
		int ans=findAnswer(mymap,car_count);
		printf("%d. %d\n",test,ans);
		++test;
		scanf("%d %d %d",&loc_count,&car_count,&road_count);
	}
	return 0;
}
void findShortestPath()
{
	for(int k=0;k<loc_count;++k)
	{
		for(int i=0;i<loc_count;++i)
		{
			for(int j=0;j<loc_count;++j)
			{
				if(i==j){ dist[i][j]=0; }
				if(dist[i][k]!=max_value && dist[k][j]!=max_value)
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
			}
		}
	}
	return;
}
int findAnswer(map<char*,int,str_cmp> mymap,int car_count)
{
	if(car_count==0){ return 0; }
	int res=0;
	int pos2;
	for(int i=1;i<=car_count;++i)
	{
		pos2=mymap.find(loc[i])->second;
		res += dist[0][pos2];
		res += dist[pos2][0];
	}
	//res += dist[pos2][0];
	return res;
}
*/
