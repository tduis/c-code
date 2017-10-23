/* 
 Voorbeeld 1.
*/

#include <stdio.h>

int main()
{
  int a, b, som, verschil, u ,v;
  printf("Geef twee gehele getallen: ");
  scanf("%d %d", &a, &b);
  /* a en b worden gelezen */
  som = a + b;
  verschil = a - b;
  u = som * som;
  v = verschil * verschil;
  printf("\nDe som van %d + %d = %d", a, b, som);
  printf("\nHet verschil van %d - %d = %d", a, b, verschil);
  printf("\nDe uitkomsten zijn %d en %d,\n", u, v);
}
