/*************************************************************************
	> File Name: hzol97.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月12日 星期三 18时17分56秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
    long long int n,sum;
    scanf("%lld",&n);
    sum = n*(1+n)/2;
    printf("%lld\n",sum);
    return 0;
}
