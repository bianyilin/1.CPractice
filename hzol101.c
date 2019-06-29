/*************************************************************************
	> File Name: hzol101.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月12日 星期三 19时21分53秒
 ************************************************************************/

#include <stdio.h>
int main(){
    int n,q,b,s,g,sum;
    scanf("%d",&n);
    q = n / 1000;
    b = n % 1000 / 100;
    s = n % 100 / 10;
    g = n % 10;
    sum = q+b+s+g;
    printf("%d\n",sum);
    return 0;
}
