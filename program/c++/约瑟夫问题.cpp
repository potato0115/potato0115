#include<iostream>
using namespace std;
int main(){
    int n,m,a;
    bool x[1005];
    cin>>n>>m;
    if(m>n){
        m=m%n;
    }
    a=m;
    for(int i=1;i<=n-1;i++){
        if(!x[m]){
             m=m+a;
            if(m>n){
                m=m%n;
            }
        }
        x[a]=1;
    }
    for(int i=1;i<=n;i++){
    	if(x[i]){
    		continue;
		}
		else{
			cout<<i;
			return 0;
		}
	}
    return 0;
}
