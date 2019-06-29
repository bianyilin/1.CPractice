/*************************************************************************
	> File Name: hzol113.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月05日 星期三 20时01分03秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int y,m;
    scanf("%d %d",&y,&m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        printf("31\n");
    }
    else{
        if(m == 2){
        if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
        printf("29\n");
    }else printf("28\n");
    } 
    else {
        printf("30\n");
    }
    }
    return 0;
}
