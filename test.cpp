/*#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<map>
#include<ctime>

using namespace std;

#define MOD 65536
#define MAX_LEN 250000

struct node{
	int key,priority,cnt;
	node *left,*right;
	node(int k){
		key=k;
		cnt=1;
		priority=rand();
		left=right=NULL;
	}
};

class Treap{
	node *root;
	public:
	Treap(){
		root=NULL;
		srand(time(NULL));
	}
	
	void insert(int k){
		insertRecur(root,k);
	}
	
	void insertRecur(node* &root,int k){
		if(!root){
			root=new node(k);
			return;
		}
		if(root->key>=k){
			insertRecur(root->left,k);
			if(root->left->priority>root->priority){
				rightRotate(root);
				updateCount(root->right);
			}
		}
		else{
			insertRecur(root->right,k);
			if(root->right->priority>root->priority){
				leftRotate(root);
				updateCount(root->left);
			}
		}
		updateCount(root);
	}
	
	void remove(int k){
		removeRecur(root,k);
	}
	
	void removeRecur(node* &root,int k){
		if(!root)
			return;
		printf("Entering removeRecur\n");
		if(root->key==k){
			if(root->left && root->right){
				if(root->left->priority > root->right->priority)
					rightRotate(root);
				else
					leftRotate(root);
				removeRecur(root,k);
			}
			else{
				node *tmp=root;
				if(root->left)
					root=root->left;
				else
					root=root->right;
				free(tmp);
			}
		}
		else if(root->key>k)
			removeRecur(root->left,k);
		else
			removeRecur(root->right,k);
		updateCount(root);
		printf("Exiting removeRecur\n");
	}
	
	void updateCount(node *t){
		if(t)
			t->cnt=getCount(t->left)+getCount(t->right)+1;
	}
	
	int getCount(node *t){
		return (t==NULL?0:t->cnt);
	}
	
	int kthNode(int k){
		node *cur=root;
		int res=-1;
		
		while(cur){
			int lCnt=getCount(cur->left);
			if(lCnt+1==k){
				res=cur->key;
				break;
			}
			else if(k<lCnt+1)
				cur=cur->left;
			else{
				k -= lCnt+1;
				cur=cur->right;
			}
		}
		return res;
	}
	
	void leftRotate(node* &t){
		node *tmp=t->right;
		t->right=tmp->left;
		tmp->left=t;
		t=tmp;
	}
	
	void rightRotate(node* &t){
		node *tmp=t->left;
		t->left=tmp->right;
		tmp->right=t;
		t=tmp;
	}
				
};	
			
class FloatingMedian{

	public:

    long long sumOfMedians(int seed,int mul,int add,int N,int K){
		Treap t;
		int curVal=seed;
		long long sum=0;
		int seq[MAX_LEN+2];
		int idx=0;
	
		for(int i=0;i<K;++i){
			t.insert(curVal);
			seq[idx++]=curVal;
			//printf("curVal=%d\n",curVal);
			curVal= ( ((curVal)%MOD * (mul)%MOD) % MOD + add ) % MOD;
		}
	
		for(int i=K;i<N;++i){
			int med=t.kthNode((K+1)/2);
			//cout<<"median="<<med<<"\n";
			sum += med;
			t.remove(seq[i-K]);
			
			t.insert(curVal);
			seq[idx++]=curVal;
			//printf("curVal=%d\n",curVal);
			curVal= ( ((curVal)%MOD * (mul)%MOD) % MOD + add ) % MOD;
			
		}
	
		sum += t.kthNode((K+1)/2);
		return sum;
	}
};

int main(){
	FloatingMedian soln;
	printf("Entering test\n");
	printf("%lld\n",soln.sumOfMedians(1,2,0,250000,23));

	system("pause");
	return 0;
}*/