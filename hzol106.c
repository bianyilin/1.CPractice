/*************************************************************************
	> File Name: hzol106.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月19日 星期三 18时56分26秒
 ************************************************************************/

#include<stdio.h>
int main() {
    double n,a;
    scanf("%lf",&n);
    if(n >= 0){
        printf("%g\n",n);
    } else{
        a = 0-n;
        printf("%g\n",a);
    }
    return 0;
}
