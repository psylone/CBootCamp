#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(int argc, char *argv[]) {
  int n;

  if (argc < 2) {
    printf("error (1): please provide a non-negative integer argument\n");
    return 1;
  }

  n = atoi(argv[1]);

  if (n < 0) {
    printf("error (2): non-negative integer is expected\n");
    return 2;
  }

  printf("fib(%d) = %d\n", n, fib(n));

  return 0;
}

int fib(int n) {
  int i,
      a = 0,
      b = 1;

  if (n < 2)
    return n;

  for (i = 2; i <= n; i++) {
    b = a + b;
    a = b - a;
  }

  return b;
}
