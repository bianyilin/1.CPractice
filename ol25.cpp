/*************************************************************************
	> File Name: ol25.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月15日 星期六 19时52分56秒
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

int f[3][1005];

int main() {
    int n = 2;
    f[1][0] = f[2][0] = f[1][1] = f[2][1] = 1;
  //  f[0][0] = f[1][0] = f[0][1] = f[1][1] = 1;
    while (f[n % 3][0] < 1000 ){
  //  while (f[n % 2][0] < 1000 ){
        n++;
        int n0 = n % 3, n1 = (n - 1) % 3, n2 = (n - 2) % 3;
    //  int n0 = n & 1, n1 = n0 ^ 1;
        for (int i = 1; i <= f[n1][0]; i++) {
    //  for (int i = 1; i <= f[n0][0]; i++) {
            f[n0][i] = f[n1][i] + f[n2][i];
        }
        f[n0][0] = f[n1][0];
        for (int i = 1; i <= f[n0][0]; i++) {
            if (f[n0][i] < 10) continue;
            f[n0][i + 1] += f[n0][i] / 10;
            f[n0][i] %= 10;
            f[n0][0] += (f[n0][0] == i);
        }
    }
    cout << n << endl;
    return 0;
}
