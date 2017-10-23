#include <stdio.h>
#include <stdlib.h>

int main()
{
  int truth, falsehood;
  truth = (2 + 2 == 4);
  falsehood = (2+2 == 5);
  printf("\ntruth is %d\n", truth);
  printf("\nfalsehood is %d\n", falsehood);
  exit(0);
}
