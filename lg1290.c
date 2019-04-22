/*************************************************************************
	 File Name: lu1290.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月22日 星期一 20时03分19秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main() {
    int i, c, m, n;
    scanf("%d", &c);
    for (i = 1; i <= c; i++) {
        scanf("%d %d", &m, &n);
        if (m == n) printf("Stan wins\n");
        else {
            if (m < n) {
                if ((n * 1.0) / m > (sqrt(5) + 1) / 2)
                    printf("Stan wins\n");
                else
                    printf("Ollie wins\n");
            }
            else {
                if ((m * 1.0) / n > (sqrt(5) + 1) / 2)
                    printf("Stan wins\n");
                else
                    printf("Ollie wins\n");
            }
        }
    }
    return 0;
}
