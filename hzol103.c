/*************************************************************************
	> File Name: hzol103.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月05日 星期三 20时00分11秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a % b == 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

