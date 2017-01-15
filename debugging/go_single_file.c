#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_SIZE     256
#define REPEAT_STRING_COUNT 3
#define VECTOR_SIZE         5

char* get_word(int max_size);
void repeat_word(char* word, int n);
int* get_vec(int vector_size);
void print_vec(int* vector, int size);

int
main(int argc, char* argv[])
{
  char* my_word = get_word(MAX_STRING_SIZE);

  repeat_word(my_word, REPEAT_STRING_COUNT);

  int* my_vec = get_vec(VECTOR_SIZE);

  print_vec(my_vec, VECTOR_SIZE);

  free(my_word);
  free(my_vec);

  return 0;
}

char*
get_word(int max_size)
{
  char* string;

  string = calloc(max_size, sizeof(char));

  printf("Enter a string (%s chars max): ", max_size - 1);
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

int*
get_vec(int vector_size)
{
  int* vector = malloc(vector_size * sizeof(int));
  int i;

  for (i = 0; i < vector_size; i++) {
    printf("Enter value of vector[%d]: ", i);
    scanf("%d", &vector[i]);
  }

  return vector;
}

void
print_vec(int* vector, int size)
{
  int i;

  printf("vector = {");

  for (i = 0; i < size - 1; i++)
    printf("%d, ", vector[i]);

  printf("%d}\n", vector[size - 1]);
}
