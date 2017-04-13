
#include <stdio.h>

int main() {
  int number, sum = 0;

  printf("Enter a number, or 0 to end: ");
  scanf("%d", &number);

  while (number != 0) {
    sum = sum + number;
    printf("Enter a number, or 0 to end: ");
    scanf("%d", &number);
  }

  printf("\nThe sum is: %d\n", sum);

  return 0;
}
