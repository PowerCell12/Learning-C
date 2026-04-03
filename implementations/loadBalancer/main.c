#include <stdio.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>
#include <unistd.h>

int main() {

    int socketfd = socket(AF_INET, SOCK_STREAM, 0);

    if (socketfd == -1) {
      printf("The socket failed to initialize!");
      return 1;
    }


    struct sockaddr_in toaddr;
    memset(&toaddr, 0, sizeof(toaddr));

    toaddr.sin_family = AF_INET;
    toaddr.sin_port = htons(8080);
    toaddr.sin_addr.s_addr = inet_addr("100.92.96.2");

    if (connect(socketfd, (struct sockaddr *)&toaddr, sizeof(toaddr)) == -1) {
	  perror("connect");

	  return 1;
  	}

    char message[28] = "Hello from client to server";

    write(socketfd, message, sizeof(message) - 1);
	
    printf("Connection from the client");

   char buffer[1024];

   int bytesRead = read(socketfd, buffer, sizeof(buffer));

   buffer[bytesRead] = '\0';

   puts(buffer);
    
   close(socketfd);

   return 0;
}
