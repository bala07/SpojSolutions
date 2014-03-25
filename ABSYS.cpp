/* Accepted */

/*

#include<iostream>
#include<stdio.h>

using namespace std;

char input[100];
int num1,num2,res;
bool n1,n2,r;

bool isNum(char*);
void findAnswer();

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		num1=num2=res=-1;
		n1=n2=r=false;
		scanf("%s",input);
		if(isNum(input)){ num1=atoi(input); }
		else{ n1=true; }
		scanf("%s",input);
		scanf("%s",input);
		if(isNum(input)){ num2=atoi(input); }
		else{ n2=true; }
		scanf("%s",input);
		scanf("%s",input);
		if(isNum(input)){ res=atoi(input); }
		else{ res=true; }
		findAnswer();
	}
	return 0;
}

bool isNum(char *text)
{
	int length=strlen(text);
	for(int i=0;i<length;++i)
	{
		if(!isdigit(text[i])){ return false; }
	}
	return true;
}
void findAnswer()
{
	if(n1)
	{
		printf("%d + %d = %d\n",(res-num2),num2,res);
	}
	else if(n2)
	{
		printf("%d + %d = %d\n",num1,(res-num1),res);
	}
	else
	{
		printf("%d + %d = %d\n",num1,num2,(num1+num2));
	}
	return;
}

*/