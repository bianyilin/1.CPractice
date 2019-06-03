/*************************************************************************
	> File Name: pthread.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月02日 星期日 19时48分46秒
 ************************************************************************/

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

struct MyPara{
    int age;
    char name[10];
};

void *output(void *arg){
    struct MyPara *para;
    para = (struct MyPara *)arg;
    printf("hello %s,you are %d years old!\n",para->name,para->age);

}

int main() {
    pthread_t output_p;
    struct MyPara para;
    strcpy(para.name,"haizei");
    para.age=10;
    pthread_create(&output_p,NULL,output,(void *)&para);
    pthread_join(output_p,NULL);
    return 0;
}

