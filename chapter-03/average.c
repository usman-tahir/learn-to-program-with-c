
#include <stdio.h>

int main() {
  float  a, b, c;
  printf("Enter three space-separated numbers: ");
  scanf("%f %f %f", &a, &b, &c);

  printf("The average of %.2f, %.2f and %.2f is %.2f\n",
    a, b, c, ((a + b + c) / 3));

  return 0;
}
