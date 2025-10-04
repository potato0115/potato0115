#include<iostream>
using namespace std;
int main(){
	int n,a[1005]={0},m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}
	int l=1,r=n;
	while(l<r){
		int mid=(l+r+1)/2;
		if(a[mid]<=m){
			l=mid;	
		}
		else{
			r=mid-1;	
		}
	}
	cout<<a[r]<<" ";
	return 0;
}
