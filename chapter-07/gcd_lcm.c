
#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int gcd(int m, int n) {
  while (n != 0) {
    int r = m  % n;
    m = n;
    n = r;
  }
  return m;
}

int lcm(int m, int n) {
  return (m * n) / gcd(m, n);
}

int main() {
  int a, b;
  printf("Enter two positive integers: ");
  scanf("%d %d", &a, &b);
  while (a > 0 && b > 0) {
    printf("The GCD is %d\n", gcd(a, b));
    printf("The LCM is %d\n", lcm(a, b));
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
  }

  return 0;
}
