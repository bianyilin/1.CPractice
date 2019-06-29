/*************************************************************************
	> File Name: ol14-1.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月15日 星期六 19时04分03秒
 ************************************************************************/

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<iostream>
using namespace std;

int get_chain_length(long long x) {
    if (x == 1) return 1;
    if (x & 1) return get_chain_length(3 * x + 1) + 1;
    return get_chain_length(x / 2) + 1;
}


int main() {
    int max_len = 0, num = 0;
    for (int i = 1; i < 1000000;i++) {
        int l = get_chain_length(i);
        if (l > max_len) max_len = l, num = i;
    }
    cout << num << " " << max_len << endl;
    return 0;
}
//暴力
