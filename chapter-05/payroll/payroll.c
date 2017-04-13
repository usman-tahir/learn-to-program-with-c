
#include <stdio.h>
#include <string.h>

#define MAX_REGULAR_HOURS 40
#define OVERTIME_FACTOR 1.5

int main() {
  FILE * input = fopen("input.txt", "r");
  FILE * output = fopen("payroll.txt", "w");

  char firstName[20], lastName[20], name[50];
  double hours, rate, regularPay, overtimePay, netPay;

  fprintf(output, "Name            Hours  Rate  Regular  Overtime  Net\n\n");
  fscanf(input, "%s", firstName);

  while (strcmp(firstName, "END") != 0) {
    fscanf(input, "%s %lf %lf", lastName, &hours, &rate);
    if (hours <= MAX_REGULAR_HOURS) {
      regularPay = hours * rate;
      overtimePay = 0;
    } else {
      regularPay = MAX_REGULAR_HOURS * rate;
      overtimePay = (hours - MAX_REGULAR_HOURS) * rate * OVERTIME_FACTOR;
    }
    netPay = regularPay + overtimePay;

    // Combine the first and last name
    strcpy(name, firstName);
    strcat(name, " ");
    strcat(name, lastName);

    // Add the pay data
    fprintf(output, "%-15s %5.1f %6.2f", name, hours, rate);
    fprintf(output, "%9.2f %9.2f %7.2f\n", regularPay, overtimePay, netPay);
    fscanf(input, "%s", firstName);
  }

  fclose(input);
  fclose(output);
}
