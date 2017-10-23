#include <stdio.h>

#define ARRAY_SIZE 20

int main()
{
   int idx, array[ARRAY_SIZE];

   for (idx=0; idx < ARRAY_SIZE; array[idx++] = 0)
     ;

   return 0;
}
