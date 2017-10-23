/* goal: write a function that takes 2 values a and b, then returns the value of a * b  */

#include <stdio.h>


/* function prototyping */
int a_times_s (int a, int b);


int a_times_b ( int a, int b)
{
  return a * b;
}


void main()
{
  int a = 10;
  int b = 13;
  int result;

  result = a_times_b(a, b);
  printf("Results of %d times %d = %d\n", a, b, result);

}
