/*=========================================
 
高精度减法
 
输入的也是两个正数
 
flag是对正负号的跟踪判断
 
comp函数还是需要深入理解下（判断是否换位）
 
==========================================*/
 
#include <iostream>
#include <string>
 
using namespace std;
 
string s1,s2;
string s3;
bool flag=0;
 
int a[10100],b[10100],c[10100];
 
bool comp(string a,string b)
{
    int la=a.length();
    int lb=b.length();
    if (la!=lb) return la>lb;
    else
    {
        for (int i=0;i<la;i++)
        {
            if (a[i]!=b[i])
            {
                return a[i]>b[i];
                break;
            }
        }
    }
}
 
int main()
{
    cin >>s1 >>s2;
    if (!comp(s1,s2))
    {
        s3=s1;
        s1=s2;
        s2=s3;
        flag=1;                 //若换位则改变 flag
    }
 
 
    int la=s1.length();
    int lb=s2.length();
    for (int i=0;i<la;i++)
    {
        a[la-i]=s1[i]-'0';
    }
    for (int i=0;i<lb;i++)
    {
        b[lb-i]=s2[i]-'0';
    }
    int lc=max(la,lb);          //与加法不同 c 数组的长度最多是 a，b中较长那个
    for (int i=1;i<=lc;i++)
    {
        if (a[i]<b[i])          //借位判断
        {
            a[i+1]--;           //不够则向上位借1
            a[i]+=10;           //本位+10
        }
        c[i]=a[i]-b[i];
    }
 
    while (c[lc]==0&&lc>1) lc--;  //消除前置0，方法与高精加略有不同
    if(lc==1&&c[0]==0) flag=0;    //相减为0的情况下不输出 - 号
    if(flag) cout <<"-";
 
    for (int i=lc;i>0;i--)
    {
        cout <<c[i];
    }
 
    return 0;
}
