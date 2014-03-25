/* Accepted...! */


/*
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<map>

using namespace std;

int a[100010];
int pos[100010],cnt[100010],nxt[100010],rnk[100010],lcp[100010];
bool bh[100010],b2h[100010];
long long max_wt;
int strt,ln;

/*int next_int()
{
	char ch;
	int n=0;
	ch=getchar_unlocked();
	while(!('0'<=ch && ch<= '9')){ ch=getchar_unlocked(); }
	while('0'<=ch && ch<='9')
	{
		n=n*10+ch-'0';
		ch=getchar_unlocked();
	}
	return n;
}

bool smaller_number(int i,int j)
{
	return a[i]<a[j];
}

void compute_sarray(int);
void find_answer(int);
void find_max(int,int);
int my_cmp(int,int,int,int);


int main()
{
	int n;
	scanf("%d",&n);
	//n=next_int();
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		//a[i]=next_int();
	}
	max_wt=0;
	compute_sarray(n);
	find_answer(n);
	if(max_wt==0){ printf("-1\n"); }
	else
	{
		//printf("%lld %d %d\n",max_wt,strt,ln);
		printf("%d",a[strt]);
		for(int i=strt+1;i<strt+ln;++i)
		{
			printf(" %d",a[i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

void compute_sarray(int n)
{
	for(int i=0;i<n;++i){ pos[i]=i; }
	sort(pos,pos+n,smaller_number);
	//for(int i=0;i<n;++i){ printf("%d ",pos[i]); }
	//printf("\n");
	for(int i=0;i<n;++i)
	{
		bh[i]= (i==0 || a[pos[i-1]]!=a[pos[i]]);
		b2h[i]=false;
	}
	for(int h=1;h<n;h<<=1)
	{
		int buckets=0;
		for(int i=0,j;i<n;i=j)
		{
			j=i+1;
			while(j<n && !bh[j]){ ++j; }
			nxt[i]=j;
			++buckets;
		}
		if(buckets==n){ break; }
		for(int i=0;i<n;i=nxt[i])
		{
			cnt[i]=0;
			for(int j=i;j<nxt[i];++j)
			{
				rnk[pos[j]]=i;
			}
		}
		cnt[rnk[n-h]]++;
		b2h[rnk[n-h]]=true;
		for(int i=0;i<n;i=nxt[i])
		{
			for(int j=i;j<nxt[i];++j)
			{
				int s=pos[j]-h;
				if(s>=0)
				{
					int head=rnk[s];
					rnk[s]=head+cnt[head]++;
					b2h[rnk[s]]=true;
				}
			}
			for(int j=i;j<nxt[i];++j)
			{
				int s=pos[j]-h;
				if(s>=0 && b2h[rnk[s]])
				{
					for(int k=rnk[s]+1;!bh[k]&&b2h[k];++k){ b2h[k]=false; }
				}
			}
		}
		for(int i=0;i<n;++i)
		{
			pos[rnk[i]]=i;
			bh[i]|=b2h[i];
		}
	}
	for(int i=0;i<n;++i){ rnk[pos[i]]=i; }
	for(int i=0,h=0;i<n;++i)
	{
		if(rnk[i]>0)
		{
			int j=pos[rnk[i]-1];
			while(i+h<n && j+h<n && a[i+h]==a[j+h]){ ++h; }
			lcp[rnk[i]]=h;
			if(h>0){ --h; }
		}
		
	}
	return;
}

void find_answer(int n)
{
	int start=0,end=0;
	while(end<n)
	{
		while(start<n && lcp[start]==0){ ++start; }
		if(start==n){ break; }
		end=start;
		while(end<n && lcp[end]!=0){ ++end; }
		if(end==n){ break; }
		//printf("start=%d end=%d\n",start,end);
		find_max(start,end-1);
		start=end+1;
	}
	if(start<n){ find_max(start,end-1); }
	return;
}

void find_max(int start,int end)
{
	map<int,int> m;
	map<int,int>::iterator it;
	for(int i=start;i<=end;++i)
	{
		it=m.find(lcp[i]);
		if(it==m.end())
		{
			m[lcp[i]]=i;
			//printf("lcp[i]=%d i=%d\n",lcp[i],i);
		}
	}
	it=m.begin();
	while(it!=m.end())
	{
		int len=it->first;
		int l=start,r=start;
		while(r<=end)
		{
			while(l<=end && lcp[l]<len){ ++l; }
			if(l==end+1){ break; }
			r=l+1;
			while(r<=end && lcp[r]>=len){ ++r; }
			if(r==end+1){ break; }
			long long wt=((r-l+1)*len);
			if(wt>max_wt)
			{
				max_wt=wt;
				strt=pos[l];
				ln=len;
				//printf("%d %d %d\n",max_wt,strt,ln);
			}
			else if(wt==max_wt)
			{
				//printf("Inside equal\n");
				int res=my_cmp(pos[l],len,strt,ln);
				if(res==-1)
				{
					strt=pos[l];
					ln=len;
				}
			}
			l=r+1;
		}
		if(l<=end)
		{
			long long wt=(r-l+1)*len;
			//printf("wt=%ld\n",wt);
			if(wt>max_wt)
			{
				max_wt=wt;
				strt=pos[l];
				ln=len;
				//printf("max_wt=%lld strt=%d l=%d\n",max_wt,strt,ln);
			}
			else if(wt==max_wt)
			{
				//printf("Inside equal\n");
				int res=my_cmp(pos[l],len,strt,ln);
				if(res==-1)
				{
					strt=pos[l];
					ln=len;
				}
			}
		}
		it++;
	}
	return;
}

int my_cmp(int idx1,int l1,int idx2,int l2)
{
	int i,j;
	for(i=idx1,j=idx2;i<idx1+l1&&j<idx2+l2;++i,++j)
	{
		if(a[i]<a[j]){ return -1; }
		else if(a[i]>a[j]){ return 1; }
	}
	if(i==idx1+l1 && j-idx2==l1){ return 0; }
	else if(i==idx1+l1){ return -1; }
	else{ return 1; }
}
*/

