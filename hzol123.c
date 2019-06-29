/*************************************************************************
	> File Name: hzol123.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 18时48分00秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int a,b ,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<=c && b>=d || c<=a && d>=b){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}

