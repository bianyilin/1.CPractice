/*************************************************************************
	> FileName: ol10.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月15日 星期六 15时53分38秒
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

typedef long long ll;
const int MAX_N = 2000000;
int isPrime[MAX_N + 10] = {0};
int primeList[MAX_N + 10] = {0};

void solve() {
    ll sum = 0;
    for (int i = 2 ; i <= MAX_N ; ++i) {
        if (isPrime[i] == 0) {
            sum += i;
            // BUG
            primeList[++primeList[0]] = i;
        }
        for (int j = 1 ; j <= primeList[0] ; ++j) {
            if (i * primeList[j] > MAX_N) break;
            isPrime[i * primeList[j]] = 1;
            if (i % primeList[j] == 0) break;
        }
    }   
    printf("%lld\n", sum);
}

int main() {
    solve();
    return 0;
}
