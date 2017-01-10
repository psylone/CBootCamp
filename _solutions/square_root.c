#include <stdio.h>

int main() {
  int i,
      iter_count = 5,
      x = 612;

  double z = 25;

  printf("---------------------------------------------\n");
  printf("Newton's square root from %d in %d iterations\n", x, iter_count);
  printf("---------------------------------------------\n");

  printf("z(initial) = %.f\n\n", z);

  if (!x) {
    printf("Result: %d\n", x);

    return 0;
  }

  for (i = 0; i < iter_count; i++) {
    z = ((z + (x / z)) / 2);

    printf("z(iteration %d) = %f\n", i + 1, z);
  }

  printf("\n");
  printf("Result: %f\n", z);

  return 0;
}
