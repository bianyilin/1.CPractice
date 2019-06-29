/*************************************************************************
	> File Name: hzol100.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月12日 星期三 18时49分22秒
 ************************************************************************/

#include <stdio.h>
int main(){
    int n,i;
    double m=0;
    scanf("%d",&n);
    for(i=0;i<6;i++){
        m = (n+m)*1.00417;
    }
    printf("$%.2lf\n",m);
    return 0;
}
