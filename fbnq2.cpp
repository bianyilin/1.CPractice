/*************************************************************************
	> File Name: fbnq.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年05月19日 星期日 18时14分36秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

#define MAX_M 4000000

int main() {
    long long sum = 0;
    int f[3] = {0, 1};
    int n = 1;
    while (f[n % 3] + f[(n - 1) % 3] < MAX_M) {
        n += 1;
        f[n % 3] = f[(n - 1) % 3] + f[(n - 2) % 3];
        if (!(f[n % 3] & 1)) sum += f[n % 3];
    }
    printf("%lld\n", sum);
    return 0;
}
