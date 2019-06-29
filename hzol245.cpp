/*************************************************************************
	> File Name: hzol245.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月11日 星期二 18时07分42秒
 ************************************************************************/

#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
#define MAX_N 100000
int arr[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n; i++) cin >> arr[i];
    nth_element(arr,arr + n / 2,arr + n);
    int pos = arr[n / 2],ans = 0;
    for (int i = 0;i < n; i++) {
        ans += abs(arr[i] - pos);
    }
    cout << ans << endl;
    return 0;
}

