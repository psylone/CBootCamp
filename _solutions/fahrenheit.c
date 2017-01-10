#include <stdio.h>

int main() {
  float degC,
        degF = 85;

  degC = (degF - 32) / 1.8;

  printf("%.2f degrees in Fahrenheit is %.2f in Celsius\n", degF, degC);

  return 0;
}
