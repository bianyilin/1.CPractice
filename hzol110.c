/*************************************************************************
	> File Name: hzol110.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 10时54分56秒
 ************************************************************************/

#include<stdio.h>
int main(){
    double X,m;
    scanf("%lf",&X);
    if(X <= 15){
        m = X * 6;
    } else {
        m = 90 + (X-15)*9;
    }
    printf("%.2lf\n",m);
    return 0;
}
