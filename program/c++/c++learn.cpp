#include <iostream>
using namespace std;
int decompose_items (int num){
    if ( num < 0 ) return 0;
    if ( num < 1 ) return num;
    return ((num & 1) ? num * decompose_items (num - 1) : num >> 1 );
}
int main(){
    int m= decompose_items(decompose_items(9));
    cout<<m;
    return 0;
}