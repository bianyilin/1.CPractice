/*************************************************************************
	> File Name: ol15.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 11时19分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long ll;

int main() {
    ll ans = 1, m = 20;
    for(int i = 40 ; i > 20 ; --i) {
        ans *= i;
        while (ans % m == 0 && m != 1) {
            ans /= m;
            --m;
        }
    }
    cout << ans << endl;
    return 0;
}
