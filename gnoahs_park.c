/* gnoahs_park.c */
#include <stdio.h>
#include <stdlib.h>

/* declare global variables */
int num_gnus=10;
int num_gnats=100;

/* function declaration */
void calculate_park_biosmass(float avg_gnu_mass,float avg_gnat_mass);

int main()
{
  float avg_gnu_mass, avg_gnat_mass;
  avg_gnu_mass = 1.34;
  avg_gnat_mass = 2.56;

  calculate_park_biomass(avg_gnu_mass, avg_gnat_mass);

  exit(0);
}

void calculate_park_biomass(float avg_gnu_mass,float avg_gnat_mass)
{
  printf("\nValue of avg_gnu_mass is: %d\n",avg_gnu_mass);
  printf("\nValue of avg_gnat_mass is: %d\n",avg_gnat_mass);

  printf("\nThe park_biomass gnu is: %f\n",avg_gnu_mass*num_gnus);
  printf("\nThe park_biomass gnat is: %f\n",avg_gnat_mass*num_gnats);

}
