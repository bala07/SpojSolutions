/*#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>

using namespace std;

#define MAX_N 16
#define MAX_DIM 102

struct entry{
	vector< vector<int> > v;
};

int a[MAX_N];
entry dp[MAX_DIM][MAX_DIM];
int req[MAX_DIM];

bool canSplit(int,int,int);
bool splitFound(vector<int>*,int);

int main(){
	int m,n,splitCnt,test=1;
	scanf("%d",&splitCnt);
	while(splitCnt){
		scanf("%d %d",&m,&n);
		for(int i=0;i<splitCnt;++i)
			scanf("%d",&a[i]);
		if(canSplit(m,n,splitCnt))
			printf("Case %d: Yes\n",test++);
		else
			printf("Case %d: No\n",test++);
		scanf("%d",&splitCnt);
	}
	return 0;
}

bool canSplit(int m,int n,int splitCnt){
	sort(a,a+splitCnt);
	vector<int> init;
	init.push_back(1);
	dp[0][0].v.push_back(init);
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			if(i==0 && j==0)
				continue;
			for(int k=j-1;k>=j/2 && k>=0;--k){
				int l=j-k-1;
				int size1=dp[i][k].v.size();
				int size2=dp[i][l].v.size();
				for(int x=0;x<size1;++x){
					int len1=dp[i][k].v[x].size();
					for(int y=0;y<size2;++y){
						int len2=dp[i][l].v[y].size();
						if(len1+len2>splitCnt)
							continue;
						//printf("Creating new vector for vertical cut - i=%d j=%d k=%d x=%d y=%d\n",i,j,k,x,y);
						vector<int> temp(dp[i][k].v[x].begin(),dp[i][k].v[x].end());
						//printf("Appending new vector for vertical cut - i=%d j=%d k=%d x=%d y=%d\n",i,j,k,x,y);
						temp.insert(temp.end(),dp[i][l].v[y].begin(),dp[i][l].v[y].end());
						dp[i][j].v.push_back(temp);
					}
				}
			}
			if(i!=j){
				for(int k=i-1;k>=i/2;--k){
					int l=i-k-1;
					int size1=dp[k][j].v.size();
					int size2=dp[l][j].v.size();
					for(int x=0;x<size1;++x){
						int len1=dp[k][j].v[x].size();
						for(int y=0;y<size2;++y){
							int len2=dp[l][j].v[y].size();
							if(len1+len2>splitCnt)
								continue;
							//printf("Creating new vector for horizontal cut - i=%d j=%d k=%d x=%d y=%d\n",i,j,k,x,y);
							vector<int> temp(dp[k][j].v[x].begin(),dp[k][j].v[x].end());
							//printf("Appending new vector for horizontal cut - i=%d j=%d k=%d x=%d y=%d\n",i,j,k,x,y);
							temp.insert(temp.end(),dp[l][j].v[y].begin(),dp[l][j].v[y].end());
							dp[i][j].v.push_back(temp);
						}
					}
				}
			}
			vector<int> temp2;
			temp2.push_back((i+1)*(j+1));
			dp[i][j].v.push_back(temp2);
		}
	}				

	for(int i=0;i<splitCnt;++i)
		req[a[i]]++;
		
	int size=dp[m-1][n-1].v.size();
	for(int i=0;i<size;++i){
		int len=dp[m-1][n-1].v[i].size();
		if(len==splitCnt){
			if(splitFound(&dp[m-1][n-1].v[i],len))
				return true;
		}
	}
	return false;
}

bool splitFound(vector<int>* split,int size){
	int found[MAX_DIM]={0};
	vector<int>& v=*split;
	for(int i=0;i<size;++i){
		if(req[v[i]]==0)
			return false;
		found[v[i]]++;
		if(found[v[i]]>req[v[i]])
			return false;
	}
	return true;
}*/