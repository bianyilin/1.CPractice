/*************************************************************************
	> File Name: hzol98.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月12日 星期三 18时21分49秒
 ************************************************************************/

#include <stdio.h>
#define pi 3.14
int main() {
    double r,h,s,v;
    scanf("%lf %lf",&r,&h);
    s = r*r*pi;
    v = r*r*pi*h;
    printf("%.2lf\n",s);
    printf("%.2lf\n",v);
    return 0;
}
