
#include <stdio.h>

int factorial(int n) {
  int n_factorial = 1, h;
  for (h = 2; h <= n; h += 1) {
    n_factorial = n_factorial * h;
  }
  return n_factorial;
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("%d! = %d\n", n, factorial(n));

  return 0;
}
