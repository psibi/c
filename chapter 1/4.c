#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
  float fahr;
  return (celsius * 9.0 / 5.0) + 32.0;
}

void main() {
  float celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  while (celsius <= upper) {
    printf("%3.0f %6.1f\n", celsius, celsius_to_fahrenheit(celsius));
    celsius = celsius + step;
  }
}

