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
int keep[MAX_N + 5][MAX_N + 5];

int dfs(int i,int j,int n) {
    if (i+1==n) {
        return val[i][j];
    }
    if(keep[i][j] != 0) return keep[i][j];//记忆化
    int val1 = dfs(i+1,j,n);
    int val2 = dfs(i + 1,j + 1,n);
    return(val1 > val2 ? val1 : val2) + val[i][j];
}

int main(){
    for(int i = 0;i < MAX_N; i++) {
        for (int j = 0;j <= i; j++) {
            cin >> val[i][j];
        }
    }    
    cout << dfs(0,0,MAX_N) << endl;
    return 0;
}
