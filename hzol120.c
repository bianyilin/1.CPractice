/*************************************************************************
	> File Name: hzol120.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 19时27分09秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int y, m, d;
    scanf("%d %d %d",&y,&m,&d);
    if(m == 2){
        if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0) {
            if (d ==29)
            printf("YES\n");
            return 0;
        }else{
            if(d==28){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
            return 0;
        }
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
            if(d <= 31 && d > 0)
            printf("YES\n");
        return 0;
    }else{
    if (m > 0 && m <= 12 && d <= 30 && d > 0) {
        printf("YES\n");
    }
	else{
    printf("NO\n");
	}
    }
    return 0;
}


