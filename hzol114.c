/*************************************************************************
	> File Name: hzol114.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月05日 星期三 20时15分39秒
 ************************************************************************/

#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if(x == 'h') {
        printf("He\n");
    }
    else if(x == 'c') {
        printf("Cao\n");
    }
    else if(x == 'd') {
        printf("Duan\n");
    }
    else if(x == 'w') {
        printf("Wang\n");
    }
    else if(x == 'l') {
        printf("Li\n");
    }else printf("Not Here\n");
    return 0;
}
