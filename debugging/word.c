#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*
get_word(int max_size)
{
  char* string;

  string = calloc(max_size, sizeof(char));

  printf("Enter a string (%d chars max): ", max_size - 1);
  fgets(string, max_size, stdin);
  string[strlen(string) - 1] = '\0';

  return string;
}

void
repeat_word(char* word, int n)
{
  int i;

  for (i = 0; i < n; i++)
    printf("%s\n", word);
}
