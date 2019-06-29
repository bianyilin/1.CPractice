/*************************************************************************
	> File Name: hzol56.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 11时55分47秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
#define MAX_N 10

int fact[MAX_N + 5] = {0};
int num[MAX_N + 5] = {0};
void init() {
    fact[0] = 1;
    for(int i = 1; i < MAX_N; i++) {
        fact[i] = fact[i - 1] * i;
        num[i] = 1;
    }
    return ;
}

int get_num(int k,int n) {
    int step = k / fact[n] + 1;//下取整
    int i = -1;
    while(step > 0){
        i++;
        step -= num[i];
    }
    num[i] = 0;
    return i;
}

int main() {
    init();
    int n,k;
    cin >> n >> k;
    k -= 1;
    for (int i = n-1; i >= 0; i--) {
        cout << i;
    }
    cout << endl;
    return 0;
}

