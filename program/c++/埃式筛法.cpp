#include<iostream>
using namespace std;

int vis[1005];

void ai(int n){
    fill(vis, vis + n + 1, 0);  // 初始化vis数组，所有元素都设置为0

    for (int i = 2; i * i <= n; i++) {
        if (vis[i] == 0) {  // 如果i是质数
            for (int j = i * i; j <= n; j += i) {  // 从i*i开始，因为i*i之前的倍数已经被标记过
                vis[j] = 1;  // 将这些数标记为合数
            }
        }
    }

}

int main(){
    int n;
    cin>>n;  // 从标准输入读取n的值

    ai(n);  // 调用ai函数，传入从标准输入读取的n值

    // 打印出所有小于等于n的质数
    for (int i = 2; i <= n; i++) {
        if (vis[i] == 0) {  // 如果i没有被标记为合数，那么它是质数
            cout << i << " ";
        }
    }

    return 0;
}
