/*************************************************************************
	> File Name: hzol108.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月19日 星期三 20时05分10秒
 ************************************************************************/

#include <stdio.h>
int main(){
    char r;
    double m,n,s;
    scanf("%c",&r);
    scanf("%lf %lf",&m,&n);
    if (r == 'r') {
        s = m * n;
    } else if (r == 't') {
        s = (m * n) / 2;
    }
    printf("%.2f\n",s);
    return 0;
}

