
#include <stdio.h>

int main() {
  int a = 123;
  int b = 1234;
  int c = 12345;
  
  // Normal integers
  printf("%5d\n", a); // Adds two additional spaces
  printf("%5d\n", b); // Adds one additional space
  printf("%5d\n", c); // Adds no additional spaces

  // Floats
  double d = -1.23;
  double e = -0.004;
  double f = 0.1234;

  printf("%6.2f\n%6.2f\n%6.2f\n", d, e, f);
  
  return 0;
}
