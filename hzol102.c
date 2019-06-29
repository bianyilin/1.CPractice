/*************************************************************************
	> File Name: hzol102.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月05日 星期三 20时00分00秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int a,b,c,t;
    double time;
    scanf("%d %d %d %d",&a, &b, &c, &t);
    time = t + ((1.0-(((1.0/a) + (1.0/b)) * t)) /  (((1.0/a)+(1.0/b)) - (1.0/c) ));
    printf("%.2lf\n",time);
    return 0;
}
