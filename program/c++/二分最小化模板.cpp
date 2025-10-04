#include<iostream>
using namespace std;
int main(){
	int n,x,a[1005]={0};
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=0,r=n-1;
	while(l<r){
		int mid=(l+r)/2;
		if(a[mid]>=x){
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	cout<<a[r]<<" ";
	return 0;
}
