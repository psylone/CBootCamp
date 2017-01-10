#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int
main(int argc, char *argv[])
{
  char str1[256];
  char str2[256];

  int    integer_value = 10000;
  double double_value  = 3.1415;

  sprintf(str1, "%d", integer_value);
  sprintf(str2, "%.3f", double_value);

  printf("%s\n", str1);
  printf("size of str1: %ld\n", sizeof(str1));
  printf("length of str1: %ld\n", strlen(str1));
  printf("\n");
  printf("%s\n", str2);
  printf("size of str2: %ld\n", sizeof(str2));
  printf("length of str2: %ld\n", strlen(str2));
  printf("\n");

  if (str1[5] == '\0')
    printf("Null termination character");

  return 0;
}
