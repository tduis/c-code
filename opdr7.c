#include <stdio.h>
#include <stdlib.h>


int main()
{
   int my_int;

   printf("Arithmrtic Operations:\n\n");
   my_int= 6;
   printf("\nmy_int = %d, -my_int = %d\n", my_int, -my_int);

   printf("int 1 + 2 = %d\n", 1 + 2);
   printf("int 5 - 1 = %d\n", 5 - 1);
   printf("int 5 * 2 = %d\n", 5 * 2);

   printf("\n 9 div 4 = 2 remainder 1:\n");
   printf("int 9 / 4 = %d\n", 9 / 4);
   printf("int 9 % 4 = %d\n", 9 % 4);

   printf("double 9 / 4 = %f\n", 9.0 / 4.0);

   return 0;
}
