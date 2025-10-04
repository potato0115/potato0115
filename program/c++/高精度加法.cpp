/*======================================
 
高精度加法
 
不考虑负数（高精减来处理负数）
 
字符接收再转为整数数组
 
注意颠倒，注意消除前置0
 
核心在于 a 数组 + b数组 = c数组
 
核心代码为:
 
c[i]+=a[i]+b[i];
c[i+1]=c[i]/10;
c[i]=c[i]%10;
=======================================*/
 
#include <iostream>
 
using namespace std;
 
string s1,s2;
int a[1000];
int b[1000];
int c[1001];
 
int main()
{
    cin >>s1 >>s2;
    int la=s1.length();
    int lb=s2.length();
 
    for (int i=0;i<la;i++)
    {
        a[la-i] = s1[i] - '0';    //转化接收
    }
    for (int i=0;i<lb;i++)
    {
        b[lb-i] = s2[i] - '0';
    }
 
    int lc = max(la,lb)+1;       //c数组的长度
    for (int i=1;i<=lc;i++)
    {
        c[i] += a[i] + b[i];     //核心代码
        c[i+1] = c[i]/10;
        c[i] = c[i]%10;
    }
 
    if (c[lc]==0 && lc>0) lc--;  //消除前置0
    for (int i=lc;i>0;i--)
    {
        cout <<c[i];
    }
    return 0;
}
