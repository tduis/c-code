#include <stdio.h>

int main()
{
  char *greeting = "Boy howdy!";
  printf("%s\n\n", greeting);

  int my_integer;
  scanf("%d", &my_integer);

  float total_cost;
  total_cost=120.99;
  float *total_cost_ptr;
  total_cost_ptr = &total_cost;
  printf("\nTotal cost: %f\n", total_cost);
  printf("\nptr total_code: %s\n\n", &total_cost_ptr);

}
