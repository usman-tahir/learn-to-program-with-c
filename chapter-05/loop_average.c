
#include <stdio.h>

int main() {
  double number, sum = 0;
  int count = 0;

  printf("Enter a number, or 0 to end: ");
  scanf("%lf", &number);

  while (number != 0) {
    sum = sum + number;
    count += 1;
    printf("Enter a number, or 0 to end: ");
    scanf("%lf", &number);
  }

  printf("\n%d numbers were entered\n", count);

  if (count == 0) {
    printf("The sum is 0, and the average is undefined.\n");
  } else {
    printf("The sum is %.2lf, and the average is %.2lf\n", sum, (sum / count));
  }

  return 0;
}
