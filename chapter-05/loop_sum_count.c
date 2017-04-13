
#include <stdio.h>

int main() {
  int number, sum = 0;
  int count = 0;

  printf("Enter a number, or 0 to end: ");
  scanf("%d", &number);

  while (number != 0) {
    sum = sum + number;
    count += 1;
    printf("Enter a number, or 0 to end: ");
    scanf("%d", &number);
  }

  printf("\nThe sum is: %d (%d numbers entered)\n", sum, count);

  return 0;
}
