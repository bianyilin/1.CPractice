/*************************************************************************
	> File Name: hzol135.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 19时18分18秒
 ************************************************************************/

#include <stdio.h>
#define N 28
#define RN 29
int main(){
    int x,y,m,d;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&x);
    scanf("%d %d %d",&y,&m,&d);
    month[1] = ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0) ? RN : N ;
    while(x > (month[m-1] - d)){
        x -= (month[m-1]-d);
        d = 0;
        m++;
        if(m == 13) {
            y++;
            m = 1;
            month[1]=(y%4==0 && y%100 != 0) || (y%400==0) ? RN : N ;
        }
    }  
    d += x;
    printf("%d %d %d\n", y,m,d);
    return 0;
}

