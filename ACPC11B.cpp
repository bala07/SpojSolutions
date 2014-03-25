/* Accepted */

/*
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<climits>

using namespace std;

int mnt1[1001],mnt2[1001];

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


int cmp(const void *x,const void *y)
{
	int *a=(int*)x;
	int *b=(int*)y;
	if(*a<*b){ return -1; }
	else if(*a==*b){ return 0; }
	else{ return 1; }
}
int main()
{
	int test;
	test=next_int();
	//scanf("%d",&test);
	while(test--)
	{
		int count1,count2;
		int res=INT_MAX;
		count1=next_int();
		//scanf("%d",&count1);
		for(int i=0;i<count1;++i)
		{
			mnt1[i]=next_int();
			//scanf("%d",&mnt1[i]);
		}
		count2=next_int();
		//scanf("%d",&count2);
		for(int i=0;i<count2;++i)
		{
			mnt2[i]=next_int();
			//scanf("%d",&mnt2[i]);
		}
		qsort(mnt1,count1,sizeof(int),cmp);
		qsort(mnt2,count2,sizeof(int),cmp);
		int left=0,right=0;
		while(left<count1 && right<count2)
		{
			res=min(res,abs(mnt1[left]-mnt2[right]));
			if(mnt1[left]==mnt2[right])
			{
				++left;
				++right;
			}
			else if(mnt1[left]>mnt2[right]){ ++right; }
			else{ ++left; }
		}
		printf("%d\n",res);
	}
	return 0;
}

*/