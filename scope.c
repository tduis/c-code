/* scope */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int my_var = 3;

  {
    int my_var = 5;
    printf("\nmy_var=%d\n", my_var);
  }
  printf("\nmy_var=%d\n", my_var);
  exit(0);
}
