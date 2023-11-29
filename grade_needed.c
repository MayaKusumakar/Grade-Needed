#include <stdio.h>

int main(void) {
  char letterGradeWant;
  double numGradeWant;
  double currentGrade;
  double finalWeight;
  double gradeNeeded;

  printf("Enter the grade you want in the class: ");
  scanf("%c", &letterGradeWant);
  printf("Enter the percent you need to get that grade: ");
  scanf("%lf", &numGradeWant);
  printf("Enter your current percent in the class: ");
  scanf("%lf", &currentGrade);
  printf("Enter the weight of the final: ");
  scanf(" %lf", &finalWeight);

  gradeNeeded = (numGradeWant * 100.0) - (currentGrade * (100.0 - finalWeight));

  gradeNeeded /= finalWeight;

  printf("You need to get at least %.2f%% on the final to get a %c in the "
         "class.\n",
         gradeNeeded, letterGradeWant);
  return 0;
}