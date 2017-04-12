
#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter the three side lengths of a triangle, separated by spaces: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a <= 0 || b <= 0 || c <= 0) {
    printf("\nNot a triangle.\n");
  } else if ((a >= b + c) || (b >= c + a) || (c >= a + b)) {
    printf("\nNot a triangle.\n");
  } else if (a == b && b == c) {
    printf("\nEquilateral.\n");
  } else if ((a == b) || (b == c) || (c == a)) {
    printf("\nIsosceles.\n");
  } else {
    printf("\nScalene.\n");
  }

  return 0;
}
