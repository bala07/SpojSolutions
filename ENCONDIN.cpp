/* Accepted */

/*

#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

void encode(char* str);

char str[10001];

int main()
{
	while(gets(str))
	{
		if(strlen(str)==0){ printf("\n"); continue; }
		encode(str);
	}
	system("pause");
	return 0;
}

void encode(char* str)
{
	int length=strlen(str);
	int count=1;
	char cur_char=str[0];
	bool single_seq=false;
	for(int i=1;i<length;++i)
	{
		if(str[i]==cur_char)
		{
			if(count==9)
			{
				if(single_seq)
				{
					printf("1");
					single_seq=false;
				}
				printf("9%c",cur_char);
				//if(cur_char=='1'){ printf("1"); }
				count=1;
			}
			else{ ++count; }
		}
		else
		{
			if(count>1)
			{
				if(single_seq)
				{
					printf("1");
					single_seq=false;
				}
				printf("%d%c",count,cur_char);
				//if(cur_char=='1'){ printf("1"); }
				count=1;
				cur_char=str[i];
			}
			else
			{
				if(single_seq)
				{
					printf("%c",cur_char);
					if(cur_char=='1'){ printf("1"); }
				}
				else
				{
					printf("1");
					single_seq=true;
					printf("%c",cur_char);
					if(cur_char=='1'){ printf("1"); }
				}
				count=1;
				cur_char=str[i];
			}
		}
	}
	if(count>1)
	{
		if(single_seq)
		{
			printf("1");
			single_seq=false;
		}
		printf("%d%c",count,cur_char);
		//if(cur_char=='1'){ printf("1"); }
	}
	else
	{
		if(single_seq)
		{	
			printf("%c1",cur_char);
			if(cur_char=='1'){ printf("1"); }
			single_seq=false;
		}
		else
		{
			printf("1%c1",cur_char);
			if(cur_char=='1'){ printf("1"); }
		}
	}
	printf("\n");
	return;
}

*/