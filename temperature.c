#include <stdio.h>

/* Function prototyping */
int measure_tempe( int start_temperature);
void show_temp( int temperature );

/* the measure function */
int measure_temp(int start_temperature) {
  printf("\nInside 'measure_temp()\n");
  start_temperature += 5;
  return start_temperature;
}
/* The display function */
void show_temp( int temperature) {
  printf("\n(show_temp())The temperature is %i\n\n", temperature);
}

static int start_temperature = 0;
static int end_temperature = 0;


/* The main */
void main() {
  int norman; 
  float vr = 23.1256;
  show_temp(start_temperature);
  start_temperature = measure_temp( start_temperature);
  show_temp(start_temperature);

  norman= 1066;
  printf("\nNorman is %i years old!\n", norman);
  printf("\nThe float (%f) is converted to in %i", vr, (int) vr);
}


