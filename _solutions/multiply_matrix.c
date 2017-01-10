#include <stdio.h>

#define MAXDATA 1024

typedef struct {
  double data[MAXDATA];
  int    nrows;
  int    ncols;
} Matrix;

void
printmat(Matrix M, char name);

Matrix
matrixmult(Matrix A, Matrix B);

int
main(int argc, char *argv[])
{
  Matrix A = { {1.2, 2.3, 7.8,
                3.4, 4.5, 5.1,
                -4, -7.1, 5.6,
                5.6, 6.7, 3.7},
               4,
               3};

  Matrix B = { {5.5, 6.6,
                1.2, 2.1,
                -3,  2.7},
               3,
               2};

  Matrix C = {
    {},
    0,
    0
  };

  printmat(A, 'A');
  printmat(B, 'B');

  C = matrixmult(A, B);

  printmat(C, 'C');

  return 0;
}

void
printmat(Matrix M, char name)
{
  int i, j;

  printf("%c = [\n", name);

  for (i = 0; i < M.nrows * M.ncols; i += M.ncols) {
    printf("  ");

    for (j = 0; j < M.ncols; j++) {
      printf("%.2f", M.data[i + j]);
      printf(" ");
    }

    printf("\n");
  }

  printf("]\n\n");
}

Matrix
matrixmult(Matrix A, Matrix B)
{
  Matrix C = {
    .data  = {},
    .nrows = 0,
    .ncols = 0
  };

  int    i, j, k;
  int    index = 0;
  double next_element;

  if (A.ncols != B.nrows) {
    printf("matrix multiplication is undefined\n");
    return C;
  }

  for (i = 0; i < A.nrows * A.ncols; i += A.ncols)
    for (j = 0; j < B.ncols; j++) {
      next_element = 0;

      for (k = 0; k < A.ncols; k++)
        next_element += A.data[i + k] * B.data[j + k * B.ncols];

      C.data[index] = next_element;
      index++;
    }

  C.nrows = A.nrows;
  C.ncols = B.ncols;

  return C;
}
