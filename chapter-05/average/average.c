
#include <stdio.h>

int main() {
  FILE * input = fopen("./input.txt", "r");
  int number, sum = 0, n = 0;

  fscanf(input, "%d", &number);
  while (number != 0) {
    n = n + 1;
    sum = sum + number;
    fscanf(input, "%d", &number);
  }

  if (n == 0) {
    printf("No numbers were supplied.\n");
  } else {
    if (n == 1) {
      printf("One number was supplied.\n");
    } else {
      printf("\n%d numbers were supplied.\n", n);
      printf("The sum is %d, and the average is %3.2lf\n", sum, (double) sum / n);
    }
  }
  fclose(input);

  return 0;
}
