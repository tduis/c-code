/* Command line argument processing using getopt() */
/* Usage example: argdemo -a -b -n 400 -t purple  */

#include <stdio.h>
#include <stdlib.h>
/* #include <errno.h>  */
#include <string.h>
#include <unistd.h>

void main(int argc, char *argv[])
{
  int c;
  int aflag = 0;
  int bflag = 0;
  int numoption = 0;
  char txtoption[200]="default";

  opterr=0;

  while (( c = getopt(argc,argv,"abn:t:")) != EOF) {
    switch (c) {
      case 'a':
        aflag=1;
        break;
      case 'b':
        bflag=1;
        break;
      case 'n':
        numoption = atoi(optarg);
        break;
      case 't':
        strcpy(txtoption, optarg);
        break;
      case '?':
        fprintf(stderr, "invalid option: -%c\n", optopt);
    }/* end switch */

    if (aflag) printf("Option a is set\n");
    if (bflag) printf("Option b us set\n");
    printf("Numeric option value is %d\n", numoption);
    printf("Text option value is %s\n", txtoption);

    argv += optind; /* Adjust to move past the options */
    argc -= optind; 

    while (argc--) {
      /* Print the non-option arguments */
      printf("arg: %s\n", *argv++);
    }
    
  }/* End while */
}
