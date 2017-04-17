
#include <stdio.h>

int is_digit(char c);
int is_upper_case(char c);
int is_lower_case(char c);
int is_letter(char c);
int position(char c);

int is_digit(char c) {
  return c >= '0' && c <= '9';
}

int is_upper_case(char c) {
  return c >= 'A' && c <= 'Z';
}

int is_lower_case(char c) {
  return c >= 'a' && c <= 'z';
}

int is_letter(char c) {
  return is_upper_case(c) || is_lower_case(c);
}

int position(char c) {
  if (is_lower_case(c)) return c - 'a' + 1;
  if (is_upper_case(c)) return c - 'A' + 1;
  if (is_digit(c)) return c;
  return 0;
}

int main() {
  char c;
  printf("Type some letters, and non-letters, and press 'Enter'\n");
  while ((c = getchar()) != '\n') {
    printf("%c%4d\n", c, position(c));
  }

  return 0;
}
