/*************************************************************************
	> File Name: hzol124.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 18时54分20秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a>=1 || b<=50) && (c <= 25 || d>=5)){
        printf("ok\n");
    } else {
        printf("pass\n");
    }
    return 0;
}

