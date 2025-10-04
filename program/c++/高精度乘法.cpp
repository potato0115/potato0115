/*=========================================
 
高精乘
 
核心算法：（列式计算中找出的规律）
 
c[i+j-1] += a[i] * b[j];
 
c[i+j] += c[i+j-1]/10;
 
c[i+j-1] %= 10 ;
 
==========================================*/
 
#include <iostream>
#include <string>
 
using namespace std;
 
string s1,s2;
int a[2008],b[2008],c[2008];
 
int main()
{
    int la,lb,lc;
    cin >>s1 >>s2;
    la=s1.length();
    lb=s2.length();
 
    for (int i=0;i<la;i++)
    {
        a[la-i]=s1[i]-'0';
    }
    for (int i=0;i<lb;i++)
    {
        b[lb-i]=s2[i]-'0';
    }
    lc=la+lb;                          //c 数组的位数不会超过其和
    for (int i=1;i<=la;i++)
    {
        for (int j=1;j<=lb;j++)
        {
            c[i+j-1] += a[i]*b[j];     //核心算法
            c[i+j] += c[i+j-1]/10;     //进位
            c[i+j-1] %= 10;            //留位
        }
    }
    if (c[lc]==0&&lc>0) lc--;          //消除前置零
    for (int i=lc;i>0;i--)
    {
        cout <<c[i];
    }
    return 0;
}
