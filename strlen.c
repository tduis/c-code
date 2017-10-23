#include <stdio.h>

int my_strlen (char *my_string)
{
  char *ptr;
  int count = 0;

  for (ptr = my_string; *(ptr++) != '\0'; count++)
    ;

  return(count);
}

/* To shorten example, not using argp */
int main ( int argc, char *argv[], char *envp[])
{
  char string_ex[] = "Fabuleus!";

  printf("String = '%s'\n", string_ex);
  printf("Length = %d\n", my_strlen(string_ex));

  return 0;
}
