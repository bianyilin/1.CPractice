/*************************************************************************
	> File Name: hzol126.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 20时33分39秒
 ************************************************************************/

#include <stdio.h>
#define pi 3.14
int main(){
    double r1,r2,s;
    scanf("%lf %lf",&r1,&r2);
    s = pi*r1*r1 - pi*r2*r2;
    printf("%.2lf\n",s);
}

