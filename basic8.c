#include <stdio.h>

void print_stuff (int foor, int bar);
int calc_value (int bas, int quux);

void print_stuff (int foo, int bar)
{
   int var_to_print;
   var_to_print = calc_value (foo,bar);
   printf("var_to_print = %d\n", var_to_print);
}

int calc_value (int bas, int quux)
{
   return bas * quux;
}

int main()
{
   print_stuff (23, 5);
   exit (0);
}

