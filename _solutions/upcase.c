#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* toupper_string(char string[]);

int
main(int argc, char *argv[])
{
  int i;
  char* langs[] = {
    "Julia",
    "Ruby",
    "Elixir ^_^",
    "Java",
    "C",
    "JavaScript",
    "Go"
  };

  for (i = 0; i < 6; i++) {
    char* upcase = toupper_string(langs[i]);

    printf("I love %s\n", upcase);
    free(upcase);
  }

  return 0;
}

char*
toupper_string(char string[])
{
  int i;
  char* upcase = malloc((strlen(string) + 1) * sizeof(char));

  for (i = 0; i <= strlen(string); i++)
    upcase[i] = toupper(string[i]);

  return upcase;
}

// char
// toupper(char c)
// {
//   if ((c >= 'a') && (c <= 'z'))
//     c -= 32;
//
//   return c;
// }
