/*************************************************************************
	> File Name: hzol131_1.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月29日 星期六 12时04分15秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int a, max, min, i;
scanf("%d", &a);
max = min = a;
for (i = 1; i<10; i++)
{
scanf("%d", &a);
if (max<a) max = a;
if (min>a) min = a;
}
printf("最大值为：%d,最小值为：%d\n", max, min);
return 0;
} 

