#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void  input_string(char title[], char* buffer);
void  reverse_string(char string[]);
char* toupper_string(char string[]);

int
main(int argc, char* argv[])
{
  int i;

  char string_1[256],
       string_2[256],
       string_3[256];

  char* strings[] = {
    string_1,
    string_2,
    string_3
  };

  printf("Type 3 strings each 255 chars max\n");
  printf("\n");

  input_string("1st string", strings[0]);
  input_string("2nd string", strings[1]);
  input_string("3rd string", strings[2]);

  printf("\n");

  for (i = 0; i < 3; i++) {
    char* upcase = toupper_string(strings[i]);

    reverse_string(upcase);
    printf("%s\n", upcase);
    free(upcase);
  }

  return 0;
}

void
input_string(char title[], char* buffer)
{
  printf("Enter the %s: ", title);

  // Use `fgets` to safely read a string from stdin and protect us from buffer overflow
  fgets(buffer, 256, stdin);

  // Get rid of the last new line character
  buffer[strlen(buffer) - 1] = '\0';
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

void
reverse_string(char string[])
{
  int  last_index = strlen(string) - 1;
  int  i;
  char c;

  for (i = 0; i < strlen(string) / 2; i++) {
    c                      = string[i];
    string[i]              = string[last_index - i];
    string[last_index - i] = c;
  }
}

// Alternative `toupper` implementation
//
// char
// toupper(char c)
// {
//   if ((c >= 'a') && (c <= 'z'))
//     c -= 32;
//
//   return c;
// }
