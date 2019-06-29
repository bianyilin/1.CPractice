/*************************************************************************
	> File Name: hzol92.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月11日 星期二 21时07分09秒
 ************************************************************************/

#include <stdio.h>
#define pi 3.14
int main() {
    double r,c,s;
    scanf("%lf",&r);
    c = 2 * pi * r;
    s = pi * r * r;
    printf("%.2lf\n",c);
    printf("%.2lf\n",s);
    return 0;
}
