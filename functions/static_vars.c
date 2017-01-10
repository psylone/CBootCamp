#include <stdio.h>

int a = 0;

void perform(int n) {
  static int sum = 0;

  a++;

  sum++;

  printf("%d\n", sum);
}

int main() {
  perform(5);
  perform(5);
  perform(5);

  printf("%d\n", a);

  return 0;
}
