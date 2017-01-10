#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char* argv[])
{
  FILE* fp;
  char* file_name;

  if (argc > 1) {
    file_name = argv[1];
  }
  else {
    file_name = "degrees.txt";
  }

  double celsius_degrees[11] = {
    -10, -8, -6,
    -4,  -2,  0,
     2,   4,  6,
     8,   10
  };

  double fahrenheit_degree;
  int i;

  fp = fopen(file_name, "w");

  if (fp == NULL) {
    printf("Sorry, can't open %s\n", file_name);
    return 1;
  }

  fprintf(fp, "%10s  %10s\n", "Celsius", "Fahrenheit");

  for (i = 0; i < 11; i++) {
    fahrenheit_degree = ((double) 9 / 5 * celsius_degrees[i]) + 32;

    fprintf(fp, "%10.0f  %10.1f\n", celsius_degrees[i], fahrenheit_degree);
  }

  fclose(fp);

  return 0;
}
