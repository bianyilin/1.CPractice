/*************************************************************************
	> File Name: lx2.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月16日 星期二 20时45分30秒
 ************************************************************************/

#include<stdio.h>
int main(){  
    int n;
    char str[100]; 
    scanf("%[^\n]s",str);
    n = printf("%s",str);
    printf("has %d digits\n",n);
    return 0;
 
}
