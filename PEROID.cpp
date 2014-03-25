/* Accepted */

/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<algorithm>

using namespace std;





void run_kmp(int);
void find_answer(int);

char input[1000010];
int fail[1000010];


int main()
{
	int test,length,count=1;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&length);
		scanf("%s",input);
		run_kmp(length);
		printf("Test case #%d\n",count++);
		find_answer(length);
		printf("\n");
	}
	system("pause");
	return 0;
}

void run_kmp(int length)
{
	fail[0]=0;
	int i=1,j=0;
	while(i<length)
	{
		if(input[i]==input[j])
		{
			fail[i]=j+1;
			i++;
			j++;
		}
		else if(j>0){ j=fail[j-1]; }
		else
		{
			fail[i]=0;
			i++;
		}
	}
	return;
}

void find_answer(int length)
{
	int period;
	for(int i=1;i<length;++i)
	{
		if(!fail[i]){ continue; }
		period=(i+1)-fail[i];
		if((i+1)%period==0)
		{
			printf("%d %d\n",i+1,(i+1)/period);
		}
	}
	return;
}
*/
