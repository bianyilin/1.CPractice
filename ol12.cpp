/*************************************************************************
	> File Name: ol12.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 11时07分39秒
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define MAX_N 1000000
int prime[MAX_N + 5];
int f[MAX_N + 5],cnt[MAX_N +5];

int main() {
    f[1] = 1;
    for (int i = 2; 2 * i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1;prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0){
                f[prime[j] * i] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[prime[j] * i] = cnt[i] + 1;
                break;
            } else {
                f[prime[j] * i] = f[prime[j]] * f[i];
                cnt[prime[j] * i] = 1;
            }
        }
    }
    long long int n = 1;
    while (true) {
        int f_nums;
        if (n % 2) {
            f_nums = f[n] * f[(n + 1) / 2];
        } else {
            f_nums = f[n / 2] * f[n + 1];
        } 
        if (f_nums > 500) break;
        n++;
    }
    cout << n*(n+1)/2 << endl;
    return 0;
}




/*
typedef int64_t ll;
const int MAX_N = 40000;

ll prime[MAX_N + 10] = {0};
ll primeList[MAX_N + 10] = {0};
ll numFactor[MAX_N + 10] = {0};

ll HowMany(ll &x, ll p) {
    if (x == 1 || p == 1) return 0;
    ll ret = 0;
    while (x % p == 0) x /= p, ++ret;
    return ret;
}

ll HowManyFactor(ll x, ll *p) {
    ll many = 1;
    while (x != 1) {
        many *= (HowMany(x, p[x]) + 1);
    }
    return many * (HowMany(x, x) + 1);
}

// p[i]代表i质因数分解后最小质因数(P1)
void InitPrime(ll *p, ll range, ll *p2) {
    for (int i = 2 ; i <= range ; ++i) {
        if (!p[i]) {
            p2[++p2[0]] = i;
            p[i] = i;
        }
        for (int j = 1 ; j <= p2[0] ; ++j) {
            if (i * p2[j] > range) break;
            p[i * p2[j]] = p2[j];
            if (i % p2[j] == 0) break;
        }
    }
}

int main() {
    InitPrime(prime, MAX_N, primeList);
    for (int i = 1 ; i <= MAX_N ; ++i) {
        numFactor[i] = HowManyFactor(i, prime);
    }
    ll many1, many2, ret;
    for (int i = 2 ; i <= MAX_N ; i += 2) {
        many1 = numFactor[i / 2] * numFactor[i - 1];
        many2 = numFactor[i / 2] * numFactor[i + 1];
        if (many1 >= 500) {
            ret = i / 2 * (i - 1);
            break;
        } else if (many2 >= 500) {
            ret = i / 2 * (i + 1);
            break;
        }
    }
    cout << ret << endl;
    return 0;
}*/
