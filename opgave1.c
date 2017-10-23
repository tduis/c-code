/*
 Programma dat naam en adres opvraagd
 en deze vervolgende afdrukt op scherm
*/

#include <stdio.h>

int main()
{
   char naam[100], adres[100];
   printf("\nGeef uw naam: ");
   scanf("%s", &naam);
   printf("\nGeef uw adres: ");
   scanf("%s", &adres);


   printf("\nUw naam is: %s", naam);
   printf("\nUw adres is: %s", adres);

   return(0);
}
