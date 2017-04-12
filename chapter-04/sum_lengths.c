
#include <stdio.h>

int main() {
  int meters_1, centimeters_1, meters_2, centimeters_2;
  int meters_sum, centimeters_sum;
  int modulus, remainingCentimeters;

  printf("Enter values for (m)eters and (c)enti(m)eters (1 of 2): ");
  scanf("%d %d", &meters_1, &centimeters_1);

  printf("Enter values for (m)eters and (c)enti(m)eters (2 of 2): ");
  scanf("%d %d", &meters_2, &centimeters_2);

  meters_sum = meters_1 + meters_2;
  centimeters_sum = centimeters_1 + centimeters_2;
  modulus = centimeters_sum % 100;
  remainingCentimeters = centimeters_sum - (modulus * 100);

  printf("%dm, %dcm + %dm, %dcm = %dm, %dcm\n", meters_1, centimeters_1,
    meters_2, centimeters_2, meters_sum, remainingCentimeters);

}
