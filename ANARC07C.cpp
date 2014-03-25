/*Accepted */


/*
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<algorithm>

bool findSolution(int,int,int,int,int);
bool fillElements(int,int,int,int,int,int,int);

int input[1000][1000];
int res[1000][1000];
int elements[1000];


int main()
{
	int n;
	int k=1;
	do
	{
		scanf("%d",&n);
		//n=next_int();
		int prev=-1;
		if(n==0){ break; }
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				scanf("%d",&input[i][j]);
			
			}
		}
		if(n==1)
		{
			if(input[0][0]==1){ printf("%d. YES\n",k); }
			else{ printf("%d. NO\n",k); }
			++k;
			continue;
		}
		bool done=findSolution(0,n,n,n,n);
		if(done){ printf("%d. YES\n",k); }
		else{ printf("%d. NO\n",k); }
		++k;
	}while(n!=0);
	return 0;
}
bool findSolution(int k,int m,int n,int _m,int _n)
{
	if(m<=0 || n<=0){ return true; }
	if(m==1)
	{
		if(input[k][k]!=(k*_n+k+1)){ printf("\nInside the not equal to part");return false; }
		return true;
	}
	int min=1000001;
	int min_index=-1;
	int index=0;
	bool done;
	for(int j=0;j<n-1;++j)
	{
		elements[index++]=input[k][k+j];
		if(input[k][k+j]<min)
		{
			min=input[k][k+j];
			min_index=index-1;
		}
	}
	for(int i=0;i<m-1;++i)
	{
		elements[index++]=input[k+i][k+n-1];
		if(input[k+i][k+n-1]<min)
		{
			min=input[k+i][k+n-1];
			min_index=index-1;
		}
	}
	for(int j=0;j<n-1;++j)
	{
		elements[index++]=input[k+m-1][k+n-1-j];
		if(input[k+m-1][k+n-1-j]<min)
		{
			min=elements[index-1];
			min_index=index-1;
		}
	}
	for(int i=0;i<m-1;++i)
	{
		elements[index++]=input[k+m-1-i][k];
		if(elements[index-1]<min)
		{
			min=elements[index-1];
			min_index=index-1;
		}
	}
	done=fillElements(min_index,index,k,m,n,_m,_n);
	if(!done){ return false; }
	return findSolution(k+1,m-2,n-2,_m,_n);

}
bool fillElements(int min_index,int length,int k,int m,int n,int _m,int _n)
{
		int cur=min_index;
		if(elements[min_index]!=(_n*k+(k+1))){ return false; }
		int cur_elem=_n*k+k+1;
		for(int j=0;j<n;++j)
		{
			res[k][k+j]=elements[cur];
			if(elements[cur]!=cur_elem){ return false; }
			cur_elem++;
			cur=(cur+1)%length;
		}
		cur_elem=cur_elem-1+_n;
		for(int i=1;i<m;++i)
		{
			if(elements[cur]!=cur_elem){ return false; }
			res[k+i][k+n-1]=elements[cur];
			cur_elem += _n;
			cur=(cur+1)%length;
		}
		cur_elem=cur_elem-_n-1;
		for(int j=1;j<n;++j)
		{
			if(elements[cur]!=cur_elem){ return false; }
			res[k+m-1][k+n-1-j]=elements[cur];
			--cur_elem;
			cur=(cur+1)%length;
		}
		cur_elem=cur_elem+1-_n;
		for(int i=1;i<m-1;++i)
		{
			if(elements[cur]!=cur_elem){ return false; }
			res[k+m-1-i][k]=elements[cur];
			cur_elem -= _n;
			cur=(cur+1)%length;
		}
	return true;
}
*/
