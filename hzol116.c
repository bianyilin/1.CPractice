/*************************************************************************
	> File Name: hzol116.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月23日 星期日 16时52分48秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b <= c || a+c <= b || b+c <= a){
        printf("illegal triangle\n");
    }
    else if ((a*a + b*b > c*c && a < c && b < c )||( a*a + c*c > b*b && a < b && c < b)|| (b*b + c*c > a*a && b < a && c < a) || (a==b && b==c)){
        printf("acute triangle\n");
    } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        printf("right triangle\n");
    } else {
        printf("obtuse triangle\n");
    }
    return 0;
}
