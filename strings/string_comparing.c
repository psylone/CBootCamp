#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  char s1[] = "paul";
  char s2[] = "paul";
  char s3[] = "peter";
  char s4[] = "dave";

  printf("s1 equals s2: %d\n", strcmp(s1, s2));
  printf("s1 equals s3: %d\n", strcmp(s1, s3));
  printf("s1 equals s4: %d\n", strcmp(s1, s4));
  printf("%c", 'p' - 12);

  return 0;
}
