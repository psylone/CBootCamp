#include <stdio.h>
#include <stdlib.h>

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
