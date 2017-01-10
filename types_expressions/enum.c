#include <stdio.h>

int main() {
  enum numbers { ONE=1, TWO, THREE, FOUR };

  enum numbers number = 44;

  printf("%d\n", number);

  if (number == FOUR) printf("My number is 4");

  return 0;
}
