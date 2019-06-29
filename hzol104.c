/*************************************************************************
	> File Name: hzol104.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月19日 星期三 18时42分09秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a,b,s,g;
    scanf("%d",&a);
    b = a / 100; 
    s = a % 100 / 10; 
    g = a % 10;
    if(b / 9 == 1 || s / 9 == 1 || g / 9 == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
