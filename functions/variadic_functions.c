#include <stdio.h>
#include <stdarg.h>

int
sum(int count, ...)
{
  va_list args;
  int i,
      sum = 0;

  va_start(args, count);

  for (i = 0; i < count; i++)
    sum += va_arg(args, int);

  va_end(args);
  return sum;
}

int
main()
{
  printf("%d\n", sum(3, 5, 5, 6));
  printf("%d\n", sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
}
