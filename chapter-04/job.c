
#include <stdio.h>

int main() {
  double hours, costForParts, jobCharge;

  printf("How many hours were worked? ");
  scanf("%lf", &hours);

  printf("What was the cost of parts? ");
  scanf("%lf", &costForParts);

  jobCharge = (hours * 100) + costForParts;
  if (jobCharge < 150) {
    jobCharge = 150;
  }
  printf("Total charge for the job (min. 150): $%3.2f\n", jobCharge);

  return 0;
}
