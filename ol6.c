/*************************************************************************
	> File Name: ol6.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 10时43分52秒
 ************************************************************************/

#include <stdio.h>
int main() {
int sum1 = 0, sum2 = 0; 
sum1 = 5050; 
for (int i = 1; i <= 100; i++) {
 sum2 += i * i;
 }
 printf("%d\n", sum1 * sum1 - sum2);
 return 0;
}

