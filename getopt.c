#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
           int flags, opt;
           int nsecs, tfnd, cfg;
           char configfile[200]="empty";

           nsecs = 0;
           tfnd = 0;
           flags = 0;
           while ((opt = getopt(argc, argv, "nt:c:")) != -1) {
               switch (opt) {
               case 'n':
                   flags = 1;
                   break;
               case 't':
                   nsecs = atoi(optarg);
                   tfnd = 1;
                   break;
               case 'c':
                   strcpy(configfile,optarg);
                   cfg = 1;
                   break;
               default: /* '?' */
                   fprintf(stderr, "Usage: %s [-t nsecs] [-n] name\n",
                           argv[0]);
                   exit(EXIT_FAILURE);
               }
           }

           printf("flags=%d; tfnd=%d; nsecs=%d; optind=%d\n",
                   flags, tfnd, nsecs, optind);

           if (optind >= argc) {
               fprintf(stderr, "Expected argument after options\n");
               exit(EXIT_FAILURE);
           }

           printf("name argument = %s\n", argv[optind]);

           /* Other code omitted */

           if (cfg) {
              printf("Config file option value is %s\n", configfile);
           }

           exit(EXIT_SUCCESS);
       }

