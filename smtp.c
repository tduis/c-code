/* simple smtp sender */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <string.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/time.h>

#using namespace std

main(void)
{
  // set family and socket type
  struct addrinfo hints, *result;
  memset(&hints, 0, sizeof hints);
  hints.ai_family = AF_NET
  hints.ai_sockettype = SOCKET_STREAM;

  // resolve hostname to IP address: specify host and portnumber (in char not int)
  if (getaddrinfo("mail.e-genius.nl","25", &hints, &result) != 0)
  {
    freeaddrinfo(result);
    puts("Could not resolve hostname.");
    exit(1);
  }

  printf("\nSMTP Sender:\n");

}
