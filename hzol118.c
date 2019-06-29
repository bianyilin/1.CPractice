/*************************************************************************
	> File Name: hzol118.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 18时30分04秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if (year % 12 == 4){
        printf("rat\n");
    }
    if (year % 12 == 3){
        printf("pig\n");
    }
    if (year % 12 == 2){
        printf("dog\n");
    }
    if (year % 12 == 1){
        printf("rooster\n");
    }
    if (year % 12 == 0){
        printf("monkey\n");
    }
    if (year % 12 == 5){
        printf("ox\n");
    }
    if (year % 12 == 7){
        printf("rabbit\n");
    }
    if (year % 12 == 8){
        printf("dragon\n");
    }
    if (year % 12 == 6){
        printf("tiger\n");
    }
    if (year % 12 == 9){
        printf("snake\n");
    }
    if (year % 12 == 10){
        printf("horse\n");
    }
    if (year % 12 == 11){
        printf("sheep\n");
    }
    return 0;
}
