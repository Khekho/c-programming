#include <stdio.h>
#include <time.h>

struct Student {
    char name[50];
    int rollno;
    struct tm birthday;
    struct tm admission_date;
};

int calculateAge(struct tm birthday, struct tm admission_date) {
    int age = admission_date.tm_year - birthday.tm_year;

    if (admission_date.tm_mon < birthday.tm_mon || (admission_date.tm_mon == birthday.tm_mon && admission_date.tm_mday < birthday.tm_mday)) {
        age--;
    }

    return age;
}

int main() {
    struct Student student;

    printf("Enter Student Name: ");
    scanf("%s", student.name);

    printf("Enter Student Roll Number: ");
    scanf("%d", &student.rollno);

    printf("Enter Student Birthday (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &student.birthday.tm_year, &student.birthday.tm_mon, &student.birthday.tm_mday);
    student.birthday.tm_year -= 1900;
    student.birthday.tm_mon -= 1;
    mktime(&student.birthday);

    printf("Enter Student Admission Date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &student.admission_date.tm_year, &student.admission_date.tm_mon, &student.admission_date.tm_mday);
    student.admission_date.tm_year -= 1900;
    student.admission_date.tm_mon -= 1;
    mktime(&student.admission_date);

    int age = calculateAge(student.birthday, student.admission_date);

    printf("\nStudent Name: %s", student.name);
    printf("\n
