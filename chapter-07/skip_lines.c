
#include <stdio.h>

void skip_lines(int n) {
  int i;
  for (i = 1; i <= n; i += 1) {
    printf("\n");
  }
}

int main() {
  printf("Line one");
  skip_lines(3);
  printf("Line Two");
  skip_lines(1);

  return 0;
}
