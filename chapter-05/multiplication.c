
#include <stdio.h>

int main() {
  int n, i;
  int from, to;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("From? ");
  scanf("%d", &from);

  printf("To? ");
  scanf("%d", &to);

  for (i = from; i <= to; i += 1) {
    printf("%d x %d = %d\n", i, n, (i * n));
  }

  return 0;
}
