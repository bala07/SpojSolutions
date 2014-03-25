
/* Accepted */

/*

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

#define MAX_SCORE 100002
#define MAX_WAYS 5

long long countWays(int,int);
void initialize();

long long dp[MAX_WAYS][MAX_SCORE];
int scores[]={2,3,6,7,8};

int main(){
	int test,score;
	int scores[]={2,3,6,7,8};
	initialize();
	scanf("%d",&test);
	while(test--){
		scanf("%d",&score);
		printf("%lld\n",countWays(score,0));
	}
	return 0;
}

long long countWays(int score,int start){
	if(score==0)
		return 1;
	if(score<0 || score==1)
		return 0;
		
	if(dp[start][score]!=-1)
		return dp[start][score];
		
	long long ans=0;
	
	for(int i=start;i<5;++i)
		ans += countWays(score-scores[i],i);
		
	dp[start][score]=ans;
	return ans;
}

void initialize(){
	for(int i=0;i<MAX_WAYS;++i)
		for(int j=0;j<MAX_SCORE;++j)
			dp[i][j]=-1;
			
	return;
}*/