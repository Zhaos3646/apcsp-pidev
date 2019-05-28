#include <stdio.h>
#include <math.h>

float areaofCircle(float radius) {
  float area = radius*radius*M_PI;
  return area;
}

int main() {
  for (float i = 3.5; i <= 12.5; i++) {
     float solution = areaofCircle(i);
     printf("%f\n", solution);
  }
}
