#include <stdio.h>

int main()
{
  int my_int;
  printf("Assignment Operations:\n\n");

  my_int = 10; /* assignment */
  printf("\nmy_int = 10 : %d\n", my_int);

  my_int++; /* my_int = my_int + 1 */
  printf("\nmy_int++  : %d\n", my_int);

  my_int += 5;
  printf("\nmy_int += 5 : %d\n", my_int);

  my_int--; /* my_int = my_int - 1 */
  printf("\nmy_int--  : %d\n", my_int);

  my_int-= 2; /* my_int = my_int - 2 */
  printf("\nmy_int -=  : %d\n", my_int);

  my_int *= 5; /* my_int = my_int * 5 */
  printf("\nmy_int *= 5 : %d\n", my_int);

  my_int /= 2; /* my_int = my_int / 2 */
  printf("\nmy_int /= 2 : %d\n", my_int);

  my_int %= 3;
  printf("\nmy_int %= 3 : %d\n", my_int);

  return 0;


}
