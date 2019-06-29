/*************************************************************************
	> File Name: cs.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 20时10分26秒
 ************************************************************************/

#include<stdio.h>
#define YEAR 28
#define RYEAR 29
 
int main(int argc, char const* argv[])
{
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int crr[3] = {0};
    int day = 0;
    scanf("%d",&day);
    scanf("%d %d %d %d", &crr[0], &crr[1], &crr[2], &day);
    month[1]=(crr[0]%4==0&&crr[0]%100!=0)
             ||(crr[0]%400==0) ? RYEAR : YEAR;
    while(day>month[crr[1]-1]-crr[2]){
        day -= month[crr[1]-1]-crr[2];
        crr[2] = 0;
        crr[1]++;
        if(crr[1]==13)
        {
            crr[0]++;
            crr[1] = 1;
            month[1]=(crr[0]%4==0&&crr[0]%100!=0)
                     ||(crr[0]%400==0) ? RYEAR : YEAR;
        }
    }
    crr[2] += day;
    printf("%d %d %d\n", crr[0], crr[1],crr[2]);
    return 0;
}
