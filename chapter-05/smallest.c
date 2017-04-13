
#include <stdio.h>

int main() {
  int number, minimum = 0;

  printf("Enter a number, or 0 to end: ");
  scanf("%d", &number);

  while (number != 0) {
    if (number < minimum) {
      minimum = number;
    }

    printf("Enter a number, or 0 to end: ");
    scanf("%d", &number);
  }
  printf("The minimum number is: %d\n", minimum);

  return 0;
}
