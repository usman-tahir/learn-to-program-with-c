
#include <stdio.h>

int main() {
  int a, s;

  printf("Enter the length of the side: ");
  scanf("%d", &s);
  a = (s * s);

  printf("The area of the square with side length %d is %d\n", s, a);

  return 0;
}
