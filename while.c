#include <stdio.h>

/* To shorten example, not using argp */
int main()
{
  double my_dbl = 0;
  int my_int = 3;
  while ((my_dbl += 0.2) < 20.0)
    printf("%lf ", my_dbl);

  printf("\n");

  printf("\n %d:\n", ++my_int);
  printf("\n %d:\n", my_int);


  return 0;
}
