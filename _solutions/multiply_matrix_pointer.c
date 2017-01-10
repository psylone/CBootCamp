#include <stdio.h>
#include <stdlib.h>

typedef struct {
  double *data;
  int    nrows;
  int    ncols;
} Matrix;

void print_matrix(Matrix *M, char name);
void destroy_matrix(Matrix *M);
void multiply_matrix(Matrix *A, Matrix *B, Matrix *C);
Matrix *create_matrix(int rows, int cols);

int
main(int argc, char *argv[])
{
  Matrix *A = create_matrix(4, 3),
         *B = create_matrix(3, 2),
         *C = create_matrix(A->nrows, B->ncols);

  A->data[0]  = 1.2;
  A->data[1]  = 2.3;
  A->data[2]  = 7.8;
  A->data[3]  = 3.4;
  A->data[4]  = 4.5;
  A->data[5]  = 5.1;
  A->data[6]  = -4;
  A->data[7]  = -7.1;
  A->data[8]  = 5.6;
  A->data[9]  = 5.6;
  A->data[10] = 6.7;
  A->data[11] = 3.7;

  B->data[0] = 5.5;
  B->data[1] = 6.6;
  B->data[2] = 1.2;
  B->data[3] = 2.1;
  B->data[4] = -3;
  B->data[5] = 2.7;

  print_matrix(A, 'A');
  print_matrix(B, 'B');

  multiply_matrix(A, B, C);

  print_matrix(C, 'C');

  destroy_matrix(A);
  destroy_matrix(B);
  destroy_matrix(C);

  return 0;
}

Matrix
*create_matrix(int rows, int cols)
{
  Matrix *M;

  M        = malloc(sizeof(Matrix));
  M->nrows = rows;
  M->ncols = cols;
  M->data  = calloc(rows * cols, sizeof(double));

  return M;
}

void
destroy_matrix(Matrix *M)
{
  free(M->data);
  free(M);
}

void
print_matrix(Matrix *M, char name)
{
  int i, j;

  printf("%c = [\n", name);

  for (i = 0; i < M->nrows * M->ncols; i += M->ncols) {
    printf("  ");

    for (j = 0; j < M->ncols; j++) {
      printf("%.2f", M->data[i + j]);
      printf(" ");
    }

    printf("\n");
  }

  printf("]\n\n");
}

void
multiply_matrix(Matrix *A, Matrix *B, Matrix *C)
{
  int    i, j, k;
  int    index = 0;
  double next_element;

  if (A->ncols != B->nrows)
    printf("matrix multiplication is undefined\n");

  for (i = 0; i < A->nrows * A->ncols; i += A->ncols)
    for (j = 0; j < B->ncols; j++) {
      next_element = 0;

      for (k = 0; k < A->ncols; k++)
        next_element += A->data[i + k] * B->data[j + k * B->ncols];

      C->data[index] = next_element;
      index++;
    }

  // C->nrows = A->nrows;
  // C->ncols = B->ncols;
}
