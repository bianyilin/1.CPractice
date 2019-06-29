/*************************************************************************
	> File Name: ol24.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 11时55分47秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
#define MAX_N 10
int fact[MAX_N + 5];
int num[MAX_N + 5] = {0};
void init(int n) {
    fact[0] = 1;
    num[0] = 1;
    for(int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int val,int n,int &x) {
    int step = k / val;//下取整
    x = 0;
    for(int t = 0;t <= step;x +=(t <= step)){
        t += num[x];
    }
    k %= val;
    num[x] = 0;
    return k;
}

int main() {
   int k = 1000000 - 1;
    for (int i = MAX_N; i >= 1; i--) {
        int x;
        k -= get_num(k,fact[i - 1],MAX_N,x);
        cout << x;
    }
    cout << endl;
    return 0;
}




/*int main(){
    char num[] = {'0','1','2','3','4','5','6','7','8','9','\0'};
    for(int i=1;i<1000000;i++){
        next_permutation(num,num+10);
    }
    cout<<num<<endl;
    return 0;
}*/


