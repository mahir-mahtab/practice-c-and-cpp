#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    int rollNumber;
    float marks;
} Student;
void inputStudent(Student *students, int n);
void sortStudents(Student *students, int n);
void printStudent(const Student *students, int n);
int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    inputStudent(students, n);
    sortStudents(students, n);
    printStudent(students, n);

    free(students);

    return 0;
}
void inputStudent(Student *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

       
        printf("  Name: ");
        scanf(" %[^\n]", (*(students + i)).name); 

  
        printf("  Roll Number: ");
        scanf("%d", &(*(students + i)).rollNumber);

       
        printf("  Marks: ");
        scanf("%f", &(*(students + i)).marks); 
    }
}
void sortStudents(Student *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((*(students + j)).marks <(*(students + j + 1)).marks) {
                Student temp = *(students + j);
                *(students + j) = *(students + j + 1);
                *(students + j + 1) = temp;
            }
        }
    }
}
void printStudent(const Student *students, int n) {
    printf("Students sorted by marks in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Name: %s, Roll Number: %d, Marks: %.1f\n",
               i + 1, students[i].name, students[i].rollNumber, students[i].marks);
    }
}