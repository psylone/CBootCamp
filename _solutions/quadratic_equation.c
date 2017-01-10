#include <stdio.h>
#include <math.h>

int main() {
  double x1, x2, d,
         a = 1.2,
         b = 2.3,
         c = -3.4;

  d = b * b - 4 * a * c;

  printf("--------------------------------\n");
  printf("%.1f * x^2 + %.1f * x + (%.1f) = 0\n", a, b, c);
  printf("--------------------------------\n");

  if (d < 0) {
    printf("There is no roots");
  }

  if (d == 0) {
    x1 = (-b + sqrt(d)) / 2 * a;

    printf("x = %f\n", x1);
  } else {
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    printf("x1 = %f\nx2 = %f\n", x1, x2);
  }
}
