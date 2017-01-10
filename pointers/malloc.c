#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int year;
  int month;
  int day;
} date;

int
main() {
  date *list = malloc(10 * sizeof(date));
  int i;

  list[0].year  = 2016;
  list[0].month = 12;
  list[0].day   = 19;

  for (i = 1; i < 10; i++) {
    list[i].year  = 2016 - i;
    list[i].month = 1 + i;
    list[i].day   = 15 + i;
  }

  for (i = 0; i < 10; i++)
    printf("list[%d] = %d-%d-%d\n", i, list[i].year, list[i].month, list[i].day);

  free(list);

  return 0;
}
