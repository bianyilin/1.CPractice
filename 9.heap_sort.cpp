/*************************************************************************
	> File Name: 9.heap_sort.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年08月09日 星期五 10时08分10秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define swap(a,b){\
    __typeof(a) __temp = a; \
    a = b,b = __temp;\
}


void update_down(int *arr,int ind,int n) {
    while (ind << 1 <= n) {
        int temp = ind, l = ind << 1,r = ind << 1 | 1;
        if (arr[temp] < arr[l]) temp = l;
        if (r <= n && arr[temp] < arr[r]) temp = r;
        if (temp == ind) break;
        swap(arr[temp],arr[ind]);
        ind = temp;
    }
    return ;
}

void heap_sort(int *arr,int n) {
    arr -= 1;
    for (int i = n >> 1; i >= 1; --i){
        update_down(arr,i,n);
    }//n>>1 n/2
    for (int i = n;i > 1; i--) {
        swap(arr[i],arr[1]);
        update_down(arr,1,i - 1);
    }
    return ;
}

void output(int *arr,int n) {
    printf("arr[%d] = [",n);
    for (int i = 0;i<n;i++){
        printf(" %d",arr[i]);
    }
        printf("]\n");
        return ;
}

int main() {
    srand(time(0));
    #define MAX_OP 20
    int *arr = (int *)malloc(sizeof(int) * MAX_OP);
    for (int i = 0; i < MAX_OP; i++){
        arr[i] = rand() % 100;  
    } 
    output(arr,MAX_OP);
    heap_sort(arr,MAX_OP);
    output(arr,MAX_OP);
    return 0;
}
