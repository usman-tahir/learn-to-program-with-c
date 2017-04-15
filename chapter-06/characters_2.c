
#include <stdio.h>

int main() {
  int i;

  printf("Enter a string: ");
  for (i = 1; i <= 3; i += 1) {
    char c = getchar();
    printf("\nCharacter %d is %c", i, c);
  }
  printf("\n");

  return 0;
}
