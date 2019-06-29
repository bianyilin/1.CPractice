/*************************************************************************
	> File Name: hzol133.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月29日 星期六 12时20分19秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<i){
            } else if(j<n){
                printf("%d*%d=%d\t",i,j,j*i);
            }
            else printf("%d*%d=%d",i,j,j*i);
        }
        printf("\n");
    }
    return 0;
}

