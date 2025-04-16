#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef union GradeData {
    struct {
        float math, physics, cse, economics;
    } cgpa;
    struct {
        int math, physics, cse, economics;
    } marks;
   
} GradeData;


typedef struct students {
    int id;
    char name[20]; 
    int isCGPA; 
    GradeData grades; 
    char gender[20];
    char division[20];
} Student;


void addStudent(const char *filename);
void showStudentById(const char *filename, int searchId);

int main() {
    const char *filename = "students.txt"; // File to store student records
    int choice, searchId;

    do {
        
        printf("\n1. Add Student\n2. Show Student by ID\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(filename); 
                break;
            case 2:
                printf("Enter student ID to search: ");
                scanf("%d", &searchId);
                showStudentById(filename, searchId);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
void addStudent(const char *filename) {
    Student student;
    FILE *file = fopen(filename, "a"); 
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

 
    printf("Enter student ID: ");
    scanf("%d", &student.id);
    getchar(); 

    printf("Enter student name: ");
    gets(student.name);

    printf("Enter 1 to input CGPA or 0 to input marks: ");
    scanf("%d", &student.isCGPA);

    if (student.isCGPA) {
        // Input CGPA details if selected
        printf("Enter CGPA (Math Physics CSE Economics): ");
        scanf("%f %f %f %f", &student.grades.cgpa.math, &student.grades.cgpa.physics,
              &student.grades.cgpa.cse, &student.grades.cgpa.economics);
    } else {
        // Input marks details if selected
        printf("Enter Marks (Math Physics CSE Economics): ");
        scanf("%d %d %d %d", &student.grades.marks.math, &student.grades.marks.physics,
              &student.grades.marks.cse, &student.grades.marks.economics);
    }

    
    printf("Enter gender: ");
    scanf("%s", student.gender);

    printf("Enter division: ");
    scanf("%s", student.division);

   
    fprintf(file, "%d %s %d ", student.id, student.name, student.isCGPA);
    if (student.isCGPA) {
        fprintf(file, "%.2f %.2f %.2f %.2f ",
                student.grades.cgpa.math, student.grades.cgpa.physics,
                student.grades.cgpa.cse, student.grades.cgpa.economics);
    } else {
        fprintf(file, "%d %d %d %d ",
                student.grades.marks.math, student.grades.marks.physics,
                student.grades.marks.cse, student.grades.marks.economics);
    }
    fprintf(file, "%s %s\n", student.gender, student.division);

    fclose(file);

    printf("Student record added successfully.\n");
}

void showStudentById(const char *filename, int searchId) {
    Student student;
    FILE *file = fopen(filename, "r"); 
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

    int found = 0; 

   
    while (fscanf(file, "%d %s %d ", &student.id, student.name, &student.isCGPA) != EOF) {
        if (student.isCGPA) {
            fscanf(file, "%f %f %f %f ",
                   &student.grades.cgpa.math, &student.grades.cgpa.physics,
                   &student.grades.cgpa.cse, &student.grades.cgpa.economics);
        } else {
            fscanf(file, "%d %d %d %d ",
                   &student.grades.marks.math, &student.grades.marks.physics,
                   &student.grades.marks.cse, &student.grades.marks.economics);
        }
        fscanf(file, "%s %s\n", student.gender, student.division);

        if (student.id == searchId) {
            found = 1; // Mark as found

            // Display student details
            printf("\nStudent Details:\n");
            printf("ID: %d\n", student.id);
            printf("Name: %s\n", student.name);

            if (student.isCGPA) {
                // Display CGPA details if stored
                printf("CGPA:\n");
                printf("  Math: %.2f\n", student.grades.cgpa.math);
                printf("  Physics: %.2f\n", student.grades.cgpa.physics);
                printf("  Computer Science: %.2f\n", student.grades.cgpa.cse);
                printf("  Economics: %.2f\n", student.grades.cgpa.economics);
            } else {

                printf("Marks:\n");
                printf("  Math: %d\n", student.grades.marks.math);
                printf("  Physics: %d\n", student.grades.marks.physics);
                printf("  Computer Science: %d\n", student.grades.marks.cse);
                printf("  Economics: %d\n", student.grades.marks.economics);
            }

            printf("Gender: %s\n", student.gender);
            printf("Division: %s\n", student.division);
            break; 
        }
    }

    if (!found) {
       
        printf("No student found with ID %d.\n", searchId);
    }

    fclose(file); 
}
