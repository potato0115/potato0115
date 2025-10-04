//
// Created by SweetPotato on 2025/5/17.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,p;
    cin>>a>>p>>n;
    long long f=a,fac=0;
    while(p!=0){
        int t=p%2;
        p/=2;
        if(t==1){
            fac*=f;
            fac%=n;
        }
        f=f*f;
        f%=n;
    }
    cout<<fac;
    return 0;
}