/*************************************************************************
	> File Name: hzol109.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 10时43分03秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,g,s,b,q;
    scanf("%d",&n);
    g = n%10;
    s = n%100/10;
    b = n%1000/100;
    q = n/1000;
    if(g % 2 == 0 || s % 2 == 0 || b % 2 == 0 || q % 2 == 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
