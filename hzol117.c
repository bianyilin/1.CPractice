/*************************************************************************
	> File Name: hzol117.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月05日 星期三 20时24分07秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a,s,y=0;
    scanf("%d", &a);
    s = a;
    while(s > 0){
        y = y * 10 + s%10;
        s = s/10;
    }
    
    if(a == y){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
