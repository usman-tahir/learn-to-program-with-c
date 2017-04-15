
#include <stdio.h>

int main() {
  printf("Enter a string: ");
  char c = getchar();

  printf("\nThe first character is %c\n", c);
  printf("Its code is %d\n", c);
  printf("The value of the EOF is %d\n", EOF);

  return 0;
}
