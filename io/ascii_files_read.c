#include <stdio.h>
#include <string.h>

int
main(int argc, char* argv[])
{
  FILE* fp;

  char* file_name;

  int  buffer_size = 256,
       read_lines  = 0;

  char buffer[buffer_size];

  double celsius_degree,
         fahrenheit_degree,
         celsius_sum    = 0,
         fahrenheit_sum = 0;

  if (argc > 1) {
    file_name = argv[1];
  }
  else {
    file_name = "degrees.txt";
  }

  fp = fopen(file_name, "r");

  if (fp == NULL) {
    printf("There was an error with opening %s\n", file_name);
    return 1;
  }

  printf("Reading from: %s\n", file_name);
  printf("\n");

  fgets(buffer, buffer_size, fp);

  while (!feof(fp)) {
    fscanf(fp, "%lf %lf\n", &celsius_degree, &fahrenheit_degree);
    printf("C = %5.1f  F = %5.1f\n", celsius_degree, fahrenheit_degree);

    celsius_sum    += celsius_degree;
    fahrenheit_sum += fahrenheit_degree;

    read_lines++;
  }

  printf("\n");
  printf("C(sum) = %6.2f\n", celsius_sum);
  printf("F(sum) = %6.2f\n", fahrenheit_sum);
  printf("\n");
  printf("Total read lines: %d\n", read_lines);

  fclose(fp);

  return 0;
}
