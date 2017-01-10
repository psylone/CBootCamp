#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  char file_name[] = "bin/code";
  char argument[]  = "293";

  char *storage[2];

  storage[0] = file_name;
  storage[1] = argument;

  printf("%p\n", &file_name);

  return 0;
}
