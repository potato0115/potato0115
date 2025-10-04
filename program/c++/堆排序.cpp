#include<iostream>
using namespace std;
void swap(int arr[], int a, int b)		//����Ԫ�أ�
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void adjustHeap(int arr[], int i, int length)		//�����󶥶ѣ����ǵ������̣������ڴ󶥶��ѹ����Ļ����ϣ�
{
	int temp = arr[i];//��ȡ����ǰԪ��i
	for (int k = i * 2 + 1; k<length; k = k * 2 + 1)//��i�������ӽ�㿪ʼ��Ҳ����2i+1����ʼ
	{
		if (k + 1<length&&arr[k]<arr[k + 1])//������ӽ��С�����ӽ�㣬kָ�����ӽ��
		{
			k++;
		}
		if (arr[k] >temp)//����ӽڵ���ڸ��ڵ㣬���ӽڵ�ֵ�������ڵ㣨���ý��н�����
		{
			arr[i] = arr[k];
			i = k;
		}
		else
		{
			break;
		}
	}
	arr[i] = temp;//��tempֵ�ŵ����յ�λ��
}
void Heapsort(int arr[], int length)
{
	//1.�����󶥶�
	for (int i = length / 2 - 1; i >= 0; i--)
	{
		//�ӵ�һ����Ҷ�ӽ��������ϣ�������������ṹ
		adjustHeap(arr, i, length);
	}
	for (int j = length - 1; j>0; j--)
	{
		swap(arr, 0, j);//���Ѷ�Ԫ����ĩβԪ�ؽ��н���
		adjustHeap(arr, 0, j);//���¶Զѽ��е���
	}
 
}
int main()
{
	int arr[1005] = { 0 },in;
	cin>>in;
	for(int i=0;i<in;i++){
		cin>>arr[i];
	} 
	Heapsort(arr, in);
	for (int i = 0; i<in; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
 
