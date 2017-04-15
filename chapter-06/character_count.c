
#include <stdio.h>

int main() {
  char c;
  int numChars = 0, numSpaces = 0;

  printf("Enter a string: ");
  while ((c = getchar()) != '\n') {
    numChars += 1;
    if (c == ' ') numSpaces += 1;
  }
  printf("The number of characters is %d (%d %s)\n", numChars, numSpaces, (numSpaces > 1 ? "spaces" : "space"));

  return 0;
}
