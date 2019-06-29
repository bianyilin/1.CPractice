/*************************************************************************
	> File Name: ol18.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月25日 星期二 18时40分30秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
using namespace std;
#define MAX_N 1001
int a[MAX_N + 5][MAX_N + 5];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) 
	for(int j=1; j<=i; j++) 
	scanf("%d", &a[i][j]); 
	for(int i=n-1; i>=1; i--) 
	for(int j=1; j<=i; j++)
	{ 
		a[i][j] = a[i][j]+ max(a[i+1][j], a[i+1][j+1] ); 
	} 
	printf("%d\n",a[1][1]); 
	return 0;
}
