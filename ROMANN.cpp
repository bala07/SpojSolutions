/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

char input[1000];

char roman[13][4]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int len[]={1,2,1,2,1,2,1,2,1,2,1,2,1};
int arabic[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};

int convert();
bool equals(char*,int,char*,int);

int main()
{
	int test,ans,count=1;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s",input);
		ans=convert();
		printf("Case #%d: %d\n",count++,ans);
	}
	system("pause");
	return 0;
}

int convert()
{
	int length=strlen(input);
	int index=0,ret=0;
	while(index<length)
	{
		for(int i=0;i<13;++i)
		{
			if(equals(input,index,roman[i],len[i]))
			{
				ret += arabic[i];
				index += len[i];
			}
		}
	}
	return ret;
}

bool equals(char* str1,int start,char* str2,int length)
{
	for(int i=start,j=0;j<length;++i,++j)
	{
		if(str1[i]!=str2[j]){ return false; }
	}
	return true;
}
*/