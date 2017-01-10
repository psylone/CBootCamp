#include <stdio.h>

int
main() {
  typedef struct {
    int x;
    int y;
  } Point;

  Point points[10];
  int   i;

  for (i = 0; i < 10; i++) {
    points[i].x = i;
    points[i].y = i;
  }

  for (i = 0; i < 10; i++)
    printf("Point %d: (%d,%d)\n", i, points[i].x, points[i].y);

  return 0;
}
