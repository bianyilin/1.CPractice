/*************************************************************************
	> File Name: ol17.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 10时56分39秒
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;

int LN20[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3,
                6, 6, 8, 8, 7, 7, 9, 8, 8};
int LN_shi[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};


int solve(int x) {
    int temp;
    if (x < 20) {
        return LN20[x];
    } else if (x < 100) {
        return LN_shi[x / 10] + LN20[x % 10];
    } else if (x < 1000) {
        temp = solve(x % 100);
        if (temp != 0) temp += 3;
        return temp + LN20[x / 100] + 7;
    } else if (x == 1000) {
        return 11;
    } else {
        return 0;
    }
}
int main() {
    int sum = 0;
    for (int i = 1 ; i <= 1000 ; ++i) {
        sum += solve(i);
    }
    printf("%d\n", sum);
    return 0;
}
