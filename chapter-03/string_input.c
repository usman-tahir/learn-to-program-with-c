
#include <stdio.h>
#include <string.h>

int main() {
  char name[50];

  printf("Hi, what's your name? ");
  gets(name);
  printf("Hello, %s!\n", name);
  
  return 0;
}
