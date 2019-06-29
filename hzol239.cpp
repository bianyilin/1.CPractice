/*************************************************************************
	> File Name: hzol239.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月13日 星期四 20时27分28秒
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
typedef long long lint;

double S(double a){
    return a * a;
}

void getXY(lint n, lint s, lint &x, lint &y) {
    if (n == 0) {
        x = 0, y = 0;
        return ;
    }
    lint xx,yy;
    lint len_n_1 = (int)pow(2, n - 1);
    lint total_n = len_n_1 * len_n_1;
    lint ind1 = s / total_n,ind2 = s % total_n;
    getXY(n - 1,ind2,xx,yy);
    switch (ind1) {
        case 0: {
            x = yy, y = xx;
        } break;
        case 1: {
            x = xx,y = yy + len_n_1;
        } break;
        case 2: {
            x = xx + len_n_1,y = yy + len_n_1;
        } break;
        case 3: {
            x = 2 * len_n_1 - yy - 1, y = len_n_1 - xx -1;
        } break;
    }
    return ;
}

void solve(){
    lint n,s,d;
    cin >> n >> s >> d;
    lint x1,y1,x2,y2;
    getXY(n, s - 1, x1, y1);
    getXY(n, d - 1, x2, y2);
    printf("%.0lf\n",sqrt(S((x1 - x2) * 10) + S((y1 - y2) * 10)));
    return ;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
