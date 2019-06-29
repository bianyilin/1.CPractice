/*****************************************************************
	> File Name: hzol127.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 17时17分52秒
 ****************************************************************/

#include<stdio.h>
int main() {
    int n;
    double x;
    scanf("%lf %d",&x,&n);
    for(int i=0;i < n; i++){
        x *= 1.06;
    }
    printf("%d\n",(int)x);
    return 0;
}
