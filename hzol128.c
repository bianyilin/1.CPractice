/*************************************************************************
	> File Name: hzol128.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月12日 星期三 20时58分32秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, a;
    double m = 0;
    scanf("%d", &n);
    int b = n;
    while(n != 0) {
        scanf("%d", &a);
        n--;
        m  = m + a;
    }
    printf("%.2lf\n", m / b);
    return 0;
}
