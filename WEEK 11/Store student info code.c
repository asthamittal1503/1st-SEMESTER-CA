#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *fptr;
    char name[50];
    char studentClass[20];
    int rollNo;

    fptr = fopen("student_info.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1); 
    }

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin); 
    name[strcspn(name, "\n")] = 0; 

    printf("Enter student class: ");
    fgets(studentClass, sizeof(studentClass), stdin);
    studentClass[strcspn(studentClass, "\n")] = 0;

    printf("Enter student roll number: ");
    scanf("%d", &rollNo);
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Class: %s\n", studentClass);
    fprintf(fptr, "Roll No: %d\n", rollNo);
    fclose(fptr);

    printf("Student information successfully written to student_info.txt\n");

    return 0;
}
