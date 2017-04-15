
#include <stdio.h>

int main() {
  printf("Type some data and press 'Enter'\n");

  int s = 0;
  char c = getchar();
  while (c == ' ') {
    s += 1;
    c = getchar();
  }
  printf("The first non-blank character is %c, preceded by %d spaces\n", c, s);

  return 0;
}
