/*************************************************************************
	> File Name: ol3.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月19日 星期五 19时05分05秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<inttypes.h>
int64_t num = 600851475143,ans;
int main(){
    for(int64_t i=2; i * i <= num; i++){
    if(num % i) 
        ans = i;
    while(num % i ==0)
     {
        num /= i;
     }   
  }
    if(num > ans) ans=num;
    printf("%" PRId64 "\n" , ans);
    return 0;
}
