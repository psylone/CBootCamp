#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int
main(int argc, char *argv[])
{
  char number[] = "9999";

  printf("%d\n", atoi(number) + 1);

  return 0;
}
