#include <stdio.h>

int main() {
  int number = 0;

  while (number != 999) {
    printf("Enter an integer or 999 to stop\n");
    scanf("%i", &number);
    printf("%d x 10 = %d\n", number, number * 10);
  }

  return 0;
}
