#include <stdio.h>
#include <stdlib.h>
#include "reciprocal.hpp"

/* testing */

int main (int argc, char **argv)
{
  int i;
  i = atoi(argv[1]);
  printf ("The reciprocal of %d is %g\n", i, reciprocal (i));
  return 0;
}
