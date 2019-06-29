/*************************************************************************
	> File Name: hzol90.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月11日 星期二 20时59分24秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n,b,s,g;
    scanf("%d",&n);
    b = n / 100;
    s = n % 100 / 10;
    g = n % 10;
    printf("%d\n",b);
    printf("%d\n",s);
    printf("%d\n",g);
    return 0;
}

