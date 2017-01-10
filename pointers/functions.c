#include <stdio.h>
#include <stdlib.h>

int
add(int a, int b)
{
  return a + b;
}

int
subtract(int a, int b)
{
  return a - b;
}

int
multiply(int a, int b)
{
  return a * b;
}

void
do_math(int (*fn)(int a, int b), int a, int b)
{
  printf("%d\n", fn(a, b));
}

int
main() {
  int a = 2,
      b = 3;

  do_math(add, a, b);
  do_math(subtract, a, b);
  do_math(multiply, a, b);

  return 0;
}
