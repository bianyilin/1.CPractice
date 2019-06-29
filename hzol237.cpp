/*************************************************************************
	> File Name: hzol237.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月13日 星期四 19时27分56秒
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

int arr[25];
int vis[15];

void output(int k,int n) {
    if (k == n) {
        for (int i = 0; i < n; i++){
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
        return ;
    }
    for (int i = 1;i<=n; i++){
        if(vis[i]) continue;
       // bool flag = 1;
       // for (int j = 0; j < k;j++){
       //    if (arr[j] ! = i) continue;
       //       flag = 0;
       //       break;
        
       // if(flag == 0) continue;
        arr[k] = i;
        vis[i] = 1;
        output(k+1,n);
        vis[i] = 0;
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    output(0,n);
    return 0;
}

