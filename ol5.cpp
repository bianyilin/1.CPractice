/*************************************************************************
	> File Name: ol5.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年05月19日 星期日 19时33分51秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;

typedef long long lint;

lint gcd(lint a,lint b){
    return (b ? gcd(b, a % b) : a);
}
lint ex_gcd(lint a,lint b,int &x,int &y) {
    if (b==0) {
        x = 1, y = 0;
        return a;
    }
    //int ret = ex_gcd(b , a % b , y , x);
    // y -= a/b * x;
    int xx,yy,ret;
    ret = ex_gcd(b,a % b,xx,yy);
    x = yy;
    y = xx - a / b * yy;
    return ret;
}

int main() {
    //int x,y;
    //ex_gcd(5,7,x,y);
    // cout << x << " " << y << endl;
    lint ans = 1;
    for (int i =2; i <= 20; i++) {
        ans = ans * i / gcd(ans,i);
    }
    cout << ans << endl;
    return 0;
}

