#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int
main(int argc, char *argv[])
{
  int    size;
  int    x = 8765309;
  double y = 876.5309;

  size = snprintf(NULL, 0, "%d", x);

  char *x_string = malloc(size + 1);

  sprintf(x_string, "%d", x);

  size = snprintf(NULL, 0, "%.4f", y);

  char *y_string = malloc(size + 1);

  sprintf(y_string, "%.4f", y);

  printf("%s\n", x_string);
  printf("%s\n", y_string);

  free(y_string);
  free(x_string);

  return 0;
}
