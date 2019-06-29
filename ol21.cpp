/*************************************************************************
	> File Name: ol21.cpp
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月16日 星期日 11时40分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
int d[10001];

int main(){
    int n=10000;
    for (int i=1;i<=n;i++){
        for (int j=i*2;j<=n;j+=i){
            d[j]+=i;
        }
    }
    int ans=0;
    for (int i=1;i<=n;i++){
        if (d[i]!=i&&d[i]<=n&&d[d[i]]==i){
            ans+=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}


