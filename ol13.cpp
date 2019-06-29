/*************************************************************************
	> File Name: ol13.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 11时15分24秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;

int main() {
    char w[55];
    int len = 0, ans[100] = {0};
    for (int i = 1 ; i <= 100 ; ++i) {
        cin >> w;
        len = strlen(w);
        if (len > ans[0]) ans[0] = len;
        for (int i = len - 1 ; i >= 0 ; --i) {
            ans[len - i] += (w[i] - '0'); 
        }
    }
    for (int i = 1 ; i <= ans[0] ; ++i) {
        if (ans[i] < 10) continue;
        ans[i + 1] += (ans[i] / 10);
        ans[i] %= 10;
        if (i + 1 > ans[0]) ans[0]++;
    }
    for (int i = ans[0] ; i > ans[0] - 10 ; --i) {
        cout << ans[i];
    }
    cout << "\n" << endl;
    return 0;
}
