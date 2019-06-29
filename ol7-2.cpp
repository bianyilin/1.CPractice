/*************************************************************************
	> File Name: ol7-2.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月15日 星期六 14时47分41秒
 ************************************************************************/

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<iostream>
using namespace std;
#define MAX_N 200000

int is_prime[MAX_N + 5] = {0};

void init(){
for (int i = 2; i <= MAX_N; i++) {
    if (!is_prime[i]) is_prime[++is_prime[0]] = i;
    for (int j = 1; j <= is_prime[0]; j++) {
        if (is_prime[j] * i > MAX_N) break;
        is_prime[is_prime[j] * i] = 1;
        if (i % is_prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 1; i <= is_prime[0]; i++) {
        printf("%d\n", is_prime[10001]);break;
    }
    return 0;
}//线性筛

 

