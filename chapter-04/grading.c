
#include <stdio.h>

int main() {
  double grade_1, grade_2, grade_3, average;
  int passingGrade = 50;

  printf("Enter three space-separated grade: ");
  scanf("%lf %lf %lf", &grade_1, &grade_2, &grade_3);

  average = (grade_1 + grade_2 + grade_3) / 3;
  if (average >= passingGrade) {
    printf("Average is %3.1lf (PASS)\n", average);
  } else {
    printf("Average is %3.1lf (FAIL)\n", average);
  }

  return 0;
}
