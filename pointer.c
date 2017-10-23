#include <stdio.h>

int main()
{
  /* declare an integer pointer called integer_ptr */
  int *integer_ptr;

  /* Declare a floating-point pointer called float_ptr */
  float *float_ptr;

  /* declare an integer variable called my_int and assign the value 17 to int */
  int my_int = 17;

  /* declare and assign variable my_float */
  float my_float = 23.50;

  /* assign the address of the integer variable my_int to the integer pointer var. integer_ptr */
  integer_ptr = &my_int;

  /* assign the address of the floating-point variable my_float to the floating-point pointer variable float_ptr */
  float_ptr = &my_float;

  /* Assign the contents of the location pointed to by
   * the floating-point pointer variable float_ptr
   * to the location pointed to by the integer pointer variable
   * integer_ptr (the value assigned will be truncated) */
  *integer_ptr = *float_ptr;

  printf("\n%d\n\n", *integer_ptr);
  return 0;


}
