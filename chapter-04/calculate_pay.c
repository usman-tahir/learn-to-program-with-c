
#include <stdio.h>

int main() {
  double hours, rate, regularPay, overtimePay, grossPay;

  printf("Enter the amount of hours worked: ");
  scanf("%lf", &hours);

  printf("Enter the pay rate per hour: ");
  scanf("%lf", &rate);

  if (hours <= 40) {
    regularPay = hours * rate;
    overtimePay = 0;
  } else {
    regularPay = 40 * rate;
    overtimePay = (hours - 40) * rate * 1.5;
  }

  grossPay = regularPay + overtimePay;

  printf("\nRegular Pay: $%3.2f\n", regularPay);
  printf("Overtime pay: $%3.2f\n", overtimePay);
  printf("Gross pay: $%3.2f\n", grossPay);

  return 0;
}
