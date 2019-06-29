/*************************************************************************
	> File Name: hzol131.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月29日 星期六 11时49分03秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,n,i;
    long long int sum;
    scanf("%d",&n);
    scanf("%d",&a);
    sum = a;
    for(i = 1; i<n; i++)
    {
        scanf("%d",&a);
        sum *= a;
    }
    printf("%lld\n",sum);
    return 0;
}
