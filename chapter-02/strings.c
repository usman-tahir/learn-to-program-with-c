
#include <stdio.h>
#include <string.h>

int main() {
  printf("Line one\n"
    "Line two\n"
    "Line three\n");

  char name[10] = "John Doe";
  printf("Hello, %s\n", name);
  
  char copiedName[10];
  strcpy(copiedName, "Jane Doe");
  printf("Hello, %s\n", copiedName);
  
  char concatenatedName[25] = "John Doe";
  strcat(concatenatedName, " and Jane Doe");
  printf("Hello %s\n", concatenatedName);

  return 0;
}
