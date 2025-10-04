#include<iostream>
using namespace std;

int vis[1005];

void ai(int n){
    fill(vis, vis + n + 1, 0);  // ��ʼ��vis���飬����Ԫ�ض�����Ϊ0

    for (int i = 2; i * i <= n; i++) {
        if (vis[i] == 0) {  // ���i������
            for (int j = i * i; j <= n; j += i) {  // ��i*i��ʼ����Ϊi*i֮ǰ�ı����Ѿ�����ǹ�
                vis[j] = 1;  // ����Щ�����Ϊ����
            }
        }
    }

}

int main(){
    int n;
    cin>>n;  // �ӱ�׼�����ȡn��ֵ

    ai(n);  // ����ai����������ӱ�׼�����ȡ��nֵ

    // ��ӡ������С�ڵ���n������
    for (int i = 2; i <= n; i++) {
        if (vis[i] == 0) {  // ���iû�б����Ϊ��������ô��������
            cout << i << " ";
        }
    }

    return 0;
}
