#include<bits/stdc++.h>
using namespace std;
void node(){
    int a[10005]={0};
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=1,y=2;
    int maxx=-1;
    while (y<=n)
    {
        int ma=0;
        bool f=0;
        for (int i=x;i<=y;i++)
        {

            if (f&&a[i]%2==0)
            {
                f=0;
                ma+=a[i];
                continue;
            }
            if (!f&&a[i]%2!=0)
            {
                f=1;
                ma+=a[i];
                continue;
            }
            if (!f&&a[i]%2==0)
            {
                x=i;
                break;
            }
            if (f&&a[i]%2!=0)
            {
                x=i;
                break;
            }
        }
        maxx=max(ma,maxx);
        y++;
    }
    cout<<maxx<<endl;
}
int main(){
    int nn;
    cin>>nn;
    while(nn--){node();}
    return 0;
}

