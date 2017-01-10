#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  int day, year;
  char month[10];

  // printf("%ld\n", sizeof(month));
  // printf("%ld\n", strlen(month));

  scanf("%d %s %d", &day, month, &year);
  printf("The date is: %s %d, %d\n", month, day, year);

  return 0;
}
