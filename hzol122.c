/*************************************************************************
	> File Name: hzol122.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月06日 星期四 18时34分30秒
 ************************************************************************/

#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int hh,mm,ss;
    hh = t/3600;
    mm = t%3600/60;
    ss=t%60;
    if(hh>12){
        hh -= 12;
    } 
    if(t<12*3600){
        printf("%02d:%02d:%02d am\n",hh,mm,ss);
    }else if(t>13*3600){
        printf("%02d:%02d:%02d pm\n",hh,mm,ss);

    } else {
        printf("%02d:%02d:%02d midnoon\n",hh,mm,ss);
        
    }
    return 0;
}

