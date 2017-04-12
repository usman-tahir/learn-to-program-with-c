
#include <stdio.h>

#define CHARGE_PER_HOUR 100
#define MIN_JOB_COST 150

int main() {
  double hours, parts, jobCharge;

  printf("Enter the number of hours worked: ");
  scanf("%lf", &hours);

  printf("Enter the cost for parts: ");
  scanf("%lf", &parts);

  jobCharge = hours * CHARGE_PER_HOUR + parts;
  if (jobCharge < MIN_JOB_COST) {
    jobCharge = MIN_JOB_COST;
  }

  printf("Cost for the job: $%3.2f\n", jobCharge);

  return 0;
}
