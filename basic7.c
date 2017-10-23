#include <stdio.h>

# Function prototyping
void add_two_numbers (int a, int b);
int  calculate_bill (int a, int b, int c);

int main()
{
   int var1, var2;
   int a,b,c,totaal;
   var1=10;
   var2=20;
   a=1,b=10,c=100,totaal=0;

   printf("\ninside main");
   
   add_two_numbers ( var1, var2);
   add_two_numbers ( 2, 3);

   printf("\nend of main");

   totaal = calculate_bill ( a,b,c );
   printf("\n\nTotaal=%d",totaal);
}


/* function to add two numbers */
void add_two_numbers (int a, int b)
{
    int c;
    c = a + b;
    printf("\nUitkomst %d + %d = %d\n", a,b,c);
}

/* function that returns the sum */
int calculate_bill ( int a, int b, int c)
{
    int totaal;
    totaal = a + b + c;
    return totaal;
}
