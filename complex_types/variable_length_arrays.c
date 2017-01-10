#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
  if (argc < 2) {
    printf("please provide an integer argument\n");
    return 1;
  }
  else {
    int i, j;
    int n = atoi(argv[1]);
    int board[n][n];

    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        board[i][j] = i + j;

    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        printf("board[%d][%d]=%d\n", i, j, board[i][j]);

    return 0;
  }
}
