/*************************************************************************
	> File Name: hzol129.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 17时55分04秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d", &n);
    int max = 1000000;
    while(n != 0) {
        scanf("%d", &a);
        if(a < max) {
           max = a; 
        }
        n--;
    }
    printf("%d\n", max);
    return 0;
}
