#include <stdio.h>

void perform(char item[], int n) {
  int i;

  for (i = 0; i < n; i++)
    printf("Perform %s\n", item);
}

int main() {
  perform("Box", 2);
  perform("Crate", 3);

  return 0;
}
