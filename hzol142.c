/*************************************************************************
	> File Name: hzol142.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 21时10分40秒
 ************************************************************************/

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int w,q,s,g,i,j,n,m;
    if(i=a,i<=b,i++){
    w = i/10000;
    q = i%10000/1000;
    s = i%100/10;
    g = i%10;
        if(w==g && q==s){
            n == 1;
        }else{
            n == 0;
        }
    for(int j=2;j<i;j++){
        if(i%j==0){
            m == 0;
        }else{
            m==1;
        }
    }
    if(n==1 && m==1){
        printf("%d\n",i);
    }

    }
    return 0;
}

