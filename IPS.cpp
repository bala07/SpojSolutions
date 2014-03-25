/* Accepted */

/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int test;
	bool zero=false,one=false;
	char str[20];
	scanf("%d",&test);
	while(test--)
	{
		zero=one=false;
		scanf("%s",str);
		int len=strlen(str);
		for(int i=0;i<len;++i)
		{
			if(str[i]=='0'){ zero=true; }
			else if(str[i]=='1'){ one=true; }
		}
		if(zero && one){ printf("2\n"); }
		else{ printf("1\n"); }
	}
}

*/