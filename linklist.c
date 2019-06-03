/*************************************************************************
	> File Name: linklist.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年06月02日 星期日 14时37分01秒
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Node{
	int fd;
    char name[20];
    struct Node *next;
}Node, *Linkedlist;

Linkedlist linkedlist;//全局变量

bool insert(Linkedlist linkedlist,Node *node) {//插入
    Node *p;//尾插
    p = linkedlist;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = node;//新指针
    return true ;

}

bool check(Linkedlist linkedlist,char *name) {
    Node *p;
    p = linkedlist;
    while (p->next != NULL) {
        if (!strcmp(p->next->name ,name)){
            return true;
        }
        p = p->next;
    }
    return false;
}

void delete(Linkedlist linkedlist, char *name) {//删除
    Node *p,*q;
    p = linkedlist;
    while (p->next != NULL && strcmp(p->name,name)) {
        p = p->next;
     }
    if (p->next == NULL) return;
    q = p->next;
    p->next = p->next->next;
    free(q);
    return ;
}

void output(Linkedlist linkedlist) {//遍历
    Node *p;
    p = linkedlist;
    while(p->next != NULL) {
        p = p->next;
        printf("%s",p->name);
    }
    printf("\n");
    return ;
}


Linkedlist CreateNode(int fd,char *name) {
    Node *p = (Node *)malloc(sizeof(Node));
    //int a = 12;
    p->next = NULL;
    p->fd = fd;   
    strcpy(p->name,name);
    return p;
    //return &a;
}


int main() {
    Node *p = (Node *)malloc(sizeof(Node));//分配地址
    p->next = NULL;
    p->fd = 0;
    strcpy(p->name,"init");
    linkedlist = p;
  

   insert(linkedlist, CreateNode(4,"pi3"));
   insert(linkedlist, CreateNode(4,"pi"));
   insert(linkedlist, CreateNode(5,"pi1"));
   insert(linkedlist, CreateNode(6,"pi2"));
   insert(linkedlist, CreateNode(7,"pi4"));

    check(linkedlist,"pi7")?printf("error\n"):insert(linkedlist, CreateNode(8,"pi"));
    
    output(linkedlist);
    delete(linkedlist,"pi3");
    output(linkedlist);
    delete(linkedlist,"pi");
    output(linkedlist);
    return 0;
}



    
