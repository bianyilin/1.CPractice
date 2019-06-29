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
    int a = 0, b = 1;
    while (a + b < MAX_M) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    printf("%lld\n", sum);
    return 0;
}
