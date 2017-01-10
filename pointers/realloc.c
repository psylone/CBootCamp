#include <stdio.h>
#include <stdlib.h>

void show_vector(double vector[], int n);

int
main()
{
  double *vector = calloc(3, sizeof(double));

  vector[1] = 3.14;

  show_vector(vector, 3);

  vector = realloc(vector, 5 * sizeof(double));

  show_vector(vector, 5);

  vector[3] = 7.77;

  show_vector(vector, 5);

  free(vector);
  return 0;
}

void
show_vector(double vector[], int n)
{
  int i;

  for (i = 0; i < n; i++)
    printf("vecotr[%d] = %.3f\n", i, vector[i]);

  printf("\n");
}
