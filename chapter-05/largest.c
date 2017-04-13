
#include <stdio.h>

int main() {
  int number, maximum = 0;

  printf("Enter a number, or 0 to end: ");
  scanf("%d", &number);

  while (number != 0) {
    if (number > maximum) {
      maximum = number;
    }

    printf("Enter a number, or 0 to end: ");
    scanf("%d", &number);
  }
  printf("The maximum number is: %d\n", maximum);

  return 0;
}
