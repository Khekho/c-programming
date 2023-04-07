#include <stdio.h>

union Student {
  char name[50];
  float gpa;
};

int main() {
  union Student student;

  printf("Enter student's name: ");
  scanf("%s", student.name);

  printf("Enter student's GPA: ");
  scanf("%f", &student.gpa);

  printf("Student's name: %s\n", student.name);
  printf("Student's GPA: %f", student.gpa);

  return 0;
}
