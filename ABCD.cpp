/*#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

#define MAX_LEN 100005
#define COUNT 4

int main(){
	
	int n;
	char board[2][MAX_LEN];

	scanf("%d",&n);
	scanf("%s",board[0]);

	findAns(n,board);

	printf("%s\n",board[1]);

	system("pause");
	return 0;
}

void findAns(int n,char board[2][MAX_LEN]){
	
	int used[]={0,0,0,0};
	fillUsed(board[0],used);

	for(int i=0;i<n*2;++i){
		while(true){

			char ch=getNextChar(used);
			if(i==0 || (board[1][i-1]!=ch && board[0][i]!=ch)){
				board[1][i]=ch
				break;
			}
		}

*/