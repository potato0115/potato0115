/*======================================
 
�߾��ȼӷ�
 
�����Ǹ������߾�������������
 
�ַ�������תΪ��������
 
ע��ߵ���ע������ǰ��0
 
�������� a ���� + b���� = c����
 
���Ĵ���Ϊ:
 
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
        a[la-i] = s1[i] - '0';    //ת������
    }
    for (int i=0;i<lb;i++)
    {
        b[lb-i] = s2[i] - '0';
    }
 
    int lc = max(la,lb)+1;       //c����ĳ���
    for (int i=1;i<=lc;i++)
    {
        c[i] += a[i] + b[i];     //���Ĵ���
        c[i+1] = c[i]/10;
        c[i] = c[i]%10;
    }
 
    if (c[lc]==0 && lc>0) lc--;  //����ǰ��0
    for (int i=lc;i>0;i--)
    {
        cout <<c[i];
    }
    return 0;
}
