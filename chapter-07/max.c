
#include <stdio.h>

int max(int a, int b) {
  if (a > b) return a;
  return b;
}

int main() {
  int a, b;
  printf("Enter two space separated integers: ");
  scanf("%d %d", &a, &b);

  printf("The larger of %d and %d is %d\n", a, b, max(a, b));
  return 0;
}
