#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
  int socket_desc;
  struct sockaddr_in server;
  char *message, server_reply[2000];

  // Create socket
  socket_desc = socket(AF_INET , SOCK_STREAM , 0);

  if (socket_desc == -1)
  {
    printf("Could not create socket");
  }

  server.sin_addr.s_addr = inet_addr("80.101.59.7");
  server.sin_family = AF_INET;
  server.sin_port = htons( 25 );

  if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0)
  {
     puts("connect error");
     return 1;
  }

  // Huston we have a connection!
  puts("Connected\n");

  // Send some data
  message = "helo mail.e-genius.nl\r\n";
//MAIL FROM: t.duis@the-soos.nl\rRCPT TO: t.duis@e-genius.nl\rDATA\rsubject: test456\rEen test\n.\n\r";
  if ( send(socket_desc , message , strlen(message) , 0) < 0)
  {
    puts("\nSend failed!");
    return 1;
  }
  puts("Data Send\n");

  // Receive a reply from the server
  if (recv(socket_desc, server_reply , 2000 , 0) < 0)
  {
     puts("recv failed");
     return 1;
  }
  puts("Reply received\n");
  puts(server_reply);

  // Now lets close the socket
  close(socket_desc);

  return 0;
}
