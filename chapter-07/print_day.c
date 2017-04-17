
#include <stdio.h>

void print_day(int);

void print_day(int d) {
  switch (d) {
    case 1:
      printf("Sunday\n");
      break;
    case 2:
      printf("Monday\n");
      break;
    case 3:
      printf("Tuesday\n");
      break;
    case 4:
      printf("Wednesday\n");
      break;
    case 5:
      printf("Thursday\n");
      break;
    case 6:
      printf("Friday\n");
      break;
    case 7:
      printf("Saturday\n");
      break;
    default:
      printf("Invalid day\n");
      break;
  }
}

int main() {
  int n;
  printf("Enter a day from 1 - 7: ");
  scanf("%d", &n);
  print_day(n);

  return 0;
}
