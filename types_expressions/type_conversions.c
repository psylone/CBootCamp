#include <stdio.h>

int main() {
  int a = 2;
  int b = 3;

  printf("a / b = %.3f\n", a/b);
  printf("a / b = %.3f\n", (double) a / b);

  return 0;
}
