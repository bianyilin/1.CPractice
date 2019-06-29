/*************************************************************************
	> File Name: hzol107.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月19日 星期三 19时49分42秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n % 7 == 0 && n % 2 != 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
