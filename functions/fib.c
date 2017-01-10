#include <stdio.h>

int fib(int n);

int main() {
  int i,
      n = 25;

  for (i = 0; i <= n; i++) {
    printf("fib(%d) = %d\n", i, fib(i));
  }

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
