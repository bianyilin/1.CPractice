/*************************************************************************
	> File Name: ol18.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月25日 星期二 18时40分30秒
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
#define MAX_N 15
int val[MAX_N + 5][MAX_N + 5];

int main(){
    for(int i = 0;i < MAX_N; i++) {
        for (int j = 0;j <= i; j++) {
            cin >> val[i][j];
        }
    }    
    for(int i = MAX_N - 2;i >= 0;--i) {
        for(int j = 0;j <= i;j++){
            val[i][j] += max(val[i + 1][j],val[i + 1][j + 1]);
        }
    }
    cout << val[0][0] << endl;
    return 0;
}
