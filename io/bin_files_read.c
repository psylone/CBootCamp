#include <stdio.h>

int
main(int argc, char* argv[])
{
  FILE* fp;

  char* file_name;

  int year, month, day, i;
  int numbers[5];

  if (argc > 1) {
    file_name = argv[1];
  }
  else {
    file_name = "data.bin";
  }

  fp = fopen(file_name, "r");

  if (fp == NULL) {
    printf("There was an error with opening%s\n", file_name);
    return 1;
  }

  fread(&year, sizeof(int), 1, fp);
  fread(&month, sizeof(int), 1, fp);
  fread(&day, sizeof(int), 1, fp);
  fread(numbers, sizeof(int), 5, fp);

  printf("The date in format YYYY.MM.DD: %d.%02d.%02d\n", year, month, day);

  printf("numbers = [");
  for (i = 0; i < 5; i++) {
    if (i < 4)
      printf("%d, ", numbers[i]);
    else
      printf("%d", numbers[i]);
  }
  printf("]\n");

  fclose(fp);

  return 0;
}
