
#include <stdio.h>

int main() {
  FILE * input = fopen("./input.txt", "r");
  FILE * output = fopen("./output.txt", "w");
  int number, sum = 0, n = 0;

  fscanf(input, "%d", &number);
  while (number != 0) {
    n = n + 1;
    sum = sum + number;
    fscanf(input, "%d", &number);
  }

  if (n == 0) {
    fprintf(output, "No numbers were supplied.\n");
  } else {
    if (n == 1) {
      fprintf(output, "One number was supplied.\n");
    } else {
      fprintf(output, "%d numbers were supplied.\n", n);
      fprintf(output, "The sum is %d, and the average is %3.2lf\n", sum, (double) sum / n);
    }
  }
  fclose(input);
  fclose(output);

  return 0;
}
