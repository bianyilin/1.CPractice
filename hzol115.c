/*************************************************************************
	> File Name: hzol115.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 16时32分30秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int x1,x2,y1,y2;
    x1 = x/10;
    x2 = x%10;
    y1 = y/10;
    y2 = y%10;
    if (x1 == y1 && x2 == y2){
        printf("100\n");
        return 0;
    }
    if (x1 == y2 && x2 == y1){
        printf("20\n");
        return 0;
    }
    if (x1 == y1 || x2 == y2 || x1 == y2 || x2 == y1){
        printf("2\n");
    } else {
        printf("0\n");
    }
    return 0;
}
