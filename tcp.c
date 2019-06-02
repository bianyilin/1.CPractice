/*************************************************************************
	> File Name: tcp.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 14时12分59秒
 ************************************************************************/
//check客户端
#include<stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pwd.h>
int socket_connect(int port, char *host) {
	int sockfd;
	struct sockaddr_in dest_addr;
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {//ipv4
		perror("socket() error");
		return -1;
	}

	memset(&dest_addr, 0, sizeof(dest_addr));
	dest_addr.sin_family = AF_INET;//地址域
	dest_addr.sin_port = htons(port);//端口   htons转换成网络字节序
	dest_addr.sin_addr.s_addr = inet_addr(host);

	//DBG("Connetion TO %s:%d\n",host,port);
	//fflush(stdout);//标准输出
	if (connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(dest_addr)) < 0) {
    //建立连接
        //perror("connect() error");
		//DBG("connect() error : %s!\n", stderror(errno));//返回错误信息
		return -1;
	}//三次握手
	return sockfd;//返回套接字（连接的）

}

int main() {
	int  socket_fd;//返回套接字还有accept
	struct passwd *pwd;
    pwd = getpwuid(getuid());
	char ip_addr[20] = "192.168.2.89";//最少15位
	int port = 9999;
    char username[20] = {0};//用户初始为0
    //strcpy(uesrname ,"")赋值
    //memset(username,0,sizeof(username))初始化
    strcpy(username, pwd->pw_name);
	socket_fd = socket_connect(port, ip_addr);
    send(socket_fd, username, strlen(username), 0);//发送
	close(socket_fd);//关闭连接tcp四次挥手
	return 0;

}
