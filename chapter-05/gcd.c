
#include <stdio.h>

int main() {
  int m, n, r;

  printf("Enter two space-separated numbers: ");
  scanf("%d %d", &m, &n);

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  printf("The GCD is: %d\n", m);

  return 0;
}
