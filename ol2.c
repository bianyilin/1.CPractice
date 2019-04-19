/*************************************************************************
	> File Name: ol2.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月19日 星期五 18时39分16秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<inttypes.h>
#define MAX_N 4000000
int main(){
    int a=0,b=1,c;
    int64_t sum = 0;
    while(a + b <= MAX_N){
        c = a + b;
        if(c % 2 == 0){
        sum += c;
        }
        a = b; b = c;
    }
    printf("%" PRId64 "\n", sum);
    return 0;
}
