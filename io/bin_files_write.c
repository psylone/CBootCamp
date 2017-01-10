#include <stdio.h>

int
main(int argc, char* argv[])
{
  FILE* fp;

  char* file_name;

  int year  = 2017,
      month = 1,
      day   = 9;

  int numbers[5] = { 2, 4, 6, 8, 10 };

  if (argc > 1) {
    file_name = argv[1];
  }
  else {
    file_name = "data.bin";
  }

  fp = fopen(file_name, "w");

  if (fp == NULL) {
    printf("Sorry, can't open %s\n", file_name);
    return 1;
  }

  fwrite(&year, sizeof(year), 1, fp);
  fwrite(&month, sizeof(month), 1, fp);
  fwrite(&day, sizeof(day), 1, fp);
  fwrite(numbers, sizeof(int), 5, fp);

  fclose(fp);

  return 0;
}
