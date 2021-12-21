
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h> // IPPROTO_TCP
#include <iostream>
#include<arpa/inet.h>
 
 
int main(int argc, char **argv){
 
	if ( argc < 3) {
		std::cout<<"Parameter(s)", "<IP><PORT>[<MESSAGE>]";
		exit(0);
	}
 
	// Create local socket
	int sock;
	if ( ( sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP ) ) < 0 ) {
		std::cout<<"socket() failed.";
		exit(0);
	} 
 
	int servPort = atoi(argv[2]);
 
	// Create server address
	struct sockaddr_in servAddr;
	memset( &servAddr, 0, sizeof(servAddr) );
	servAddr.sin_family = AF_INET;
	servAddr.sin_port = htons(servPort);
	inet_pton(AF_INET, argv[1], &servAddr.sin_addr.s_addr);
 
	// Connect to server
	if ( (connect( sock, (struct sockaddr *) &servAddr, sizeof(servAddr))) < 0  ) {
		std::cout<<"connect() failed.";
		exit(0);
	}
 
	// Send Message to server
	ssize_t sentByteLen = send( sock, argv[3], sizeof(argv[3]), 0);
	if ( sentByteLen > 0 ) {
		printf("send: %s\tbytes:%d\n", argv[3], sentByteLen);
	} else {
		std::cout<<"send() failed";
		exit(0);
	}
	
	// Receive Message from server
	char recvBuf[sentByteLen];
	ssize_t recvByteLen = recv( sock, recvBuf, sentByteLen, 0);
	if ( recvByteLen > 0 ) {
		printf("recv: %s\tbytes:%d\n", recvBuf, recvByteLen);
	} else {
		std::cout<<"recv() failed";
	}
 
	//close(sock);
	
	printf("end!\n");
}