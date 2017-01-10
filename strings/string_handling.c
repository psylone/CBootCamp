#include <stdio.h>
// #include <stdlib.h>
#include <string.h>

int
main()
{
  char first_name[] = "John";
  char last_name[]  = "Snow";
  char name[10];

  printf("%s\n", first_name);
  printf("%s\n", last_name);

  strcat(name, first_name);
  strcat(name, " ");
  strcat(name, last_name);

  printf("%s\n", name);
  printf("%ld\n", sizeof(name));
  printf("%ld\n", strlen(name));

  return 0;
}
