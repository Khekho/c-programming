#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char stud_name[50];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
};

int main() {
    int n;
    struct student students[100], temp;
    

    printf("Enter the number of students: ");
    scanf("%d", &n);
    

    printf("\nEnter the student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll no.: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].stud_name);
        printf("Mark 1: ");
        scanf("%d", &students[i].mark1);
        printf("Mark 2: ");
        scanf("%d", &students[i].mark2);
        printf("Mark 3: ");
        scanf("%d", &students[i].mark3);
  
        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = (float) students[i].total_marks / 3;
    }
    

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (students[j].total_marks < students[j+1].total_marks) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    
   
    printf("\nStudent details in descending order of total marks:\n");
    printf("Roll No.\tName\t\tMark 1\tMark 2\tMark 3\tTotal Marks\tAverage Marks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t%d\t%d\t%d\t\t%.2f\n", students[i].roll_no, students[i].stud_name, students[i].mark1, students[i].mark2, students[i].mark3, students[i].total_marks, students[i].avg_marks);
    }
    
    return 0;
}
