#include <stdio.h>
int main()
{
   enum MONTH { Jan = 0, Feb, Mar };
   enum MONTH month = Mar;
   if(month == 0)
   printf("Value of Jan");
   else if(month == 1)
   printf("Month is Feb");
   if(month == 2)
   printf("Month is Mar");
}
