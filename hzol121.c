/*************************************************************************
	> File Name: hzol121.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月05日 星期三 20时51分48秒
 ************************************************************************/

#include <stdio.h>
int main() {
    char a,b;
    scanf("%s %s",&a,&b);
    if ((a == 'H' && b == 'O') || (a == 'O' && b == 'Y') || (a == 'Y' && b == 'H')){
        printf("MING\n");
    } 
    if ((a == 'H' && b == 'H') || (a == 'O' && b == 'O') || (a == 'Y' && b == 'Y')){
        printf("TLE\n");    
    } 

    if ((a == 'H' && b == 'Y') || (a == 'O' && b == 'H') || (a == 'Y' && b == 'O')){
        printf("LI\n");
    }
    return 0;
}

