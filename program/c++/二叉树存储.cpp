#include<iostream>
using namespace std;
struct btree{
	char data;
	int fa;
	int lc,rc;
}bt[1000];
int n;
int root;
char c;
void pre(int root){
	if(root!=0){
		cout<<bt[root].data<<" ";
		pre(bt[root].lc);
		pre(bt[root].rc);
	}
	return ;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>bt[i].data>>bt[i].fa>>bt[i].lc>>bt[i].rc;
		
	}
	for(int i=1;i<=n;i++){
		if(bt[i].fa==0){
			root=i;
			break;
		}
	}
	pre(root);
	return 0;
}
