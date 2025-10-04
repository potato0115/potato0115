#include<iostream>
using namespace std;
int main(){
    // int q=k;
    // int x=qq(n),y=qq(m);
    // int d=floor(q*1.0/x);
    // int c=q-d*x;
    // int b=x-c;
    // int bb;
    // while (c)
    // {
    //     if (b)
    //     {
    //         bb+=d;
    //         b--;
    //     }
    //     else
    //     {
    //         bb+=d+1;
    //         c--;
    //     }
    //
    // }
    // if (m==n)
    // {
    //     cout<<n;
    //     return 0;
    // }
    int qq(int x)
    {
        int c=0;
        while (x)
        {
            c++;
            x=x/10;
        }
        return c;
    }
}