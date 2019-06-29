/*************************************************************************
	> File Name: hzol125.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 20时44分26秒
 ************************************************************************/

#include <stdio.h>
int main(){
    int h,m,s,t;
    double a;
    scanf("%d %d %d",&h,&m,&s);
    s = (s+t)%60;
    m = m+(s+t)/3600%60;
    h = h+(((s+t)+m*60)/3600);
    if(h>12){
        h = h-12;
        printf("%d:%d:%d""pm",h,m,s);
    }else
    printf("%d:%d:%d""am",h,m,s);
    a = t/86400;
    printf("%.2lf\n",a);
}
