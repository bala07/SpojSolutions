/*Accepted */
/*
#include<iostream>
#include<stdio.h>

using namespace std;

char input[500];

char* convert_to_c(int);
char* convert_to_java(int);

int main()
{
	bool under_score=false,caps=false;
	bool flag=false;
	while(scanf("%s",input)!=EOF)
	{
		under_score=caps=flag=false;
		int length=strlen(input);
		if(isupper(input[0]) || input[0]=='_' || input[length-1]=='_' )
		{
			printf("Error!\n");
			continue;
		}
		for(int i=1;i<length;++i)
		{
			if(input[i]=='_')
			{
				if(input[i-1]=='_'){ flag=true; break; }
				under_score=true;
			}
			else if(isupper(input[i]))
			{
				caps=true;
			}
		}
		if(flag || (caps && under_score))
		{
			printf("Error!\n");
			continue;
		}
		char *res;
		if(caps)
		{
			//printf("inside conversion to c\n");
			res=convert_to_c(length);
		}
		else
		{
			res=convert_to_java(length);
		}
	}
	system("pause");
	return 0;
}

char* convert_to_c(int length)
{
	char res[500];
	int index=0;
	//printf("%s\n",input);
	for(int i=0;i<length;++i)
	{
		if(isupper(input[i]))
		{
			res[index++]='_';
			res[index++]=tolower(input[i]);
		}
		else
		{
			res[index++]=input[i];
		}
	}
	res[index++]='\0';
	printf("%s\n",res);
	return res;
}

char* convert_to_java(int length)
{
	char res[500];
	int index=0;
	for(int i=0;i<length;++i)
	{
		if(input[i]=='_'){ continue; }
		if(i-1 >=0 && input[i-1]=='_')
		{
			res[index++]=toupper(input[i]);
			//printf("%c ",res[index-1]);
		}
		else
		{
			res[index++]=input[i];
		}
	}
	res[index++]='\0';
	printf("%s\n",res);
	return res;
}
*/