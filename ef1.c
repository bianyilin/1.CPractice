/*************************************************************************
	> File Name: ef1.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月21日 星期日 15时16分09秒
 ************************************************************************/

#include <stdio.h>

int binary_search(int *num, int n, int val) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num[mid] == val) return mid;
        if (num[mid] < val) head = mid + 1;
        else tail = mid - 1;
        
    }
    return -1;
}

int arr[1000];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) 
    printf("%d",arr[i]);
    for (int i = 0; i < m; i++) {
       int a;
       sacnf("%d", &a);
       printf("%d", binary_search(arr, n, a));

    }
    return 0;
}

