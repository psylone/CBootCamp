#include <stdio.h>

int
main() {
  // struct Point {
  //   int x;
  //   int y;
  // };

  // struct Point a,
  //              b = { .x = 5, .y = 5 };

  typedef struct {
    int x;
    int y;
  } Point;

  Point a,
        b = { .x = 5, .y = 5 };

  a.x = 0;
  a.y = 0;

  printf("a(x,y)=(%d,%d)\n", a.x, a.y);
  printf("b(x,y)=(%d,%d)\n", b.x, b.y);

  return 0;
}
