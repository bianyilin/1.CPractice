/*************************************************************************
	> File Name: ol7-1.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月15日 星期六 14时28分26秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>

using namespace std;
#define MAX_N 200000
int is_prime[MAX_N + 5];

int main() {
    for (int i = 2; i * i <= MAX_N;i += 1+(i%2)) {
        if (is_prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            is_prime[j] = 1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
    }
    cout << is_prime[10001] << endl;
    return 0;
}//素数筛
