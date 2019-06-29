/*************************************************************************
	> File Name: hzol94.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月11日 星期二 21时18分55秒
 ************************************************************************/

#include <stdio.h>
int main(){
    double w,h,BMI;
    scanf("%lf %lf",&w, &h);
    BMI = w/(h*h);
    printf("%.2lf\n",BMI);
    return 0;
}

