/*=========================================
 
�߾��ȼ���
 
�����Ҳ����������
 
flag�Ƕ������ŵĸ����ж�
 
comp����������Ҫ��������£��ж��Ƿ�λ��
 
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
        flag=1;                 //����λ��ı� flag
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
    int lc=max(la,lb);          //��ӷ���ͬ c ����ĳ�������� a��b�нϳ��Ǹ�
    for (int i=1;i<=lc;i++)
    {
        if (a[i]<b[i])          //��λ�ж�
        {
            a[i+1]--;           //����������λ��1
            a[i]+=10;           //��λ+10
        }
        c[i]=a[i]-b[i];
    }
 
    while (c[lc]==0&&lc>1) lc--;  //����ǰ��0��������߾������в�ͬ
    if(lc==1&&c[0]==0) flag=0;    //���Ϊ0������²���� - ��
    if(flag) cout <<"-";
 
    for (int i=lc;i>0;i--)
    {
        cout <<c[i];
    }
 
    return 0;
}
