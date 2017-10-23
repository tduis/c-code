#include <stdio.h>

int global_age=32;
float global_salary=1200.45;

/* function declaration */
void show_age();

void main() {
  // printf("My age is %i\n", global_age);
  show_age();
  global_age=34;
  //printf("My age is in two years will be:  %i\n", global_age);
  show_age();

 
}

void show_age() {
  printf("My age is %i\n", global_age);

}
