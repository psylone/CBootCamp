#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_string(char string[]);
int  read_strings(char* strings[], int argc, char* argv[]);

int
main(int argc, char* argv[])
{
  char string_1[256],
       string_2[256],
       string_3[256];

  char* strings[] = {
    string_1,
    string_2,
    string_3
  };

  int i,
      result;

  result = read_strings(strings, argc, argv);

  printf("\n");

  for (i = 0; i < 3; i++)
    printf("%s\n", strings[i]);

  return result;
}

int
read_strings(char* strings[], int argc, char* argv[])
{
  FILE* fp;
  char* file_name;
  int   i;

  if (argc > 1) {
    file_name = argv[1];
  }
  else {
    file_name = "reversed_strings.txt";
  }

  fp = fopen(file_name, "r");

  if (fp == NULL) {
    printf("There was an error with opening %s\n", file_name);
    return 1;
  }

  printf("Reading the strings from %s\n", file_name);

  for (i = 0; i < 3; i++) {
    fgets(strings[i], 256, fp);

    // Get rid of the last new line character
    strings[i][strlen(strings[i]) - 1] = '\0';

    reverse_string(strings[i]);
  }

  fclose(fp);
  return 0;
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
