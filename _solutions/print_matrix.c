#include <stdio.h>

#define MAXDATA 1024

typedef struct {
  double data[MAXDATA];
  int    nrows;
  int    ncols;
} Matrix;

void
printmat(Matrix M, char name);

int
main(int argc, char *argv[])
{
  Matrix A = { {1.2, 2.3,
                3.4, 4.5,
                5.6, 6.7},
               3,
               2};

  Matrix B = { {5.5, 6.6, 7.7,
                1.2, 2.1, 3.3},
               2,
               3};

  Matrix C = {
    { 1, 2, 3,
      4, 5, 6,
      7, 8, 9 },
    3,
    3
  };

  printmat(A, 'A');
  printmat(B, 'B');
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
      printf("%.1f", M.data[i + j]);
      printf(" ");
    }

    printf("\n");
  }

  printf("]\n\n");
}
