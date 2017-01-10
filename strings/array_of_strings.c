#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  char *langs[] = {
    "Julia",
    "Ruby",
    "Elixir",
    "Java",
    "C",
    "JavaScript",
    "Go"
  };

  int i;

  for (i = 0; i < 6; i++) {
    printf("I love %s\n", langs[i]);
  }

  return 0;
}
