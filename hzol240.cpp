/*************************************************************************
	> File Name: hzol240.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月13日 星期四 20时03分52秒
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
#define MAX_N 729

char g[MAX_N + 5][MAX_N + 5];

void output(int n,int i,int j){
    if (n == 1) {
        g[i][j] = 'X';
        return ;
    }
    int l = (int)pow(3,n-2);
    output(n - 1,i,j);
    output(n - 1,i,j + 2 * l);
    output(n - 1,i +l,j + l);
    output(n - 1,i + 2 * l,j);
    output(n - 1,i + 2 * l,j +2 * l);
    return ;
}



int main(){
    int n;
    while (cin >> n) {
        if (n == -1) break;
        output(n,0,0);
        int l = (int)pow(3, n - 1);
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l;j++){
                if (g[i][j] == 'X') cout << 'X';
                else cout << " ";
            }
            cout << endl;
        }
        cout << '-' << endl;
    }
    return 0;
}
