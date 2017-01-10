#include <stdio.h>

int
main(int argc, char *argv[])
{
  int i;

  printf("CLI arguments count is %d\n\n", argc);

  for (i = 0; i < argc; i++)
    printf("argv[%d]=%s\n", i, argv[i]);

  return 0;
}
