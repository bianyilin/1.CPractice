/*************************************************************************
	> File Name: hzol250.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月11日 星期二 19时31分16秒
 ************************************************************************/

#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX_N 1000000
long long arr[MAX_N + 5];
long long sum[MAX_N + 5];

int main() {
    int n;
    long long total = 0;
    scanf("%d",&n);
    for (int i = 0;i < n; i++) {
        scanf("%lld",arr + i);
        total += arr[i];
    }
    long long c = total / n,ans = 0;
    sum[0] = arr[0] -c;
    for (int i = 1;i < n; i++) {
        sum[i] = sum[i - 1] + arr[i] - c;
    }
    nth_element(sum,sum + n / 2,sum + n);
    c = sum[n / 2];
    for (int i = 0;i < n; i++) {
        ans += abs(c - sum[i]);
    }
    printf("%lld\n",ans);
    return 0;
}

