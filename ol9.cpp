/*************************************************************************
	> File Name: ol9.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 11时00分37秒
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b,a % b) : a);
}

int main(){
	int ans = 0;
    for (int n = 1; n <= 33 && !ans; n++) {
        for (int m = n + 1; m * m + n * n <= 1000 && !ans; m++){
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = a * b * c * (int)pow(k,3);
            }
        }
    }
    cout << ans << endl;
    return 0;
}


/*
int main() {
    bool flag = true;
    int a, b, c, e;
    for (int i = 1 ; i < 32 && flag ; ++i) {
        for (int j = i + 1 ; j <= 32 && flag ; ++j) {
            a = j * j - i * i;
            b = 2 * i * j;
            c = j * j + i * i;
            if (1000 % (a + b + c) == 0) {
                e = 1000 / (a + b + c);
                cout << e * a * e * b * e * c;
                flag = false;
            }
        }
    }
    return 0;
}
*/

