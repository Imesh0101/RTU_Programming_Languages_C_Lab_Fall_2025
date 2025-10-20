/*
 * week4_3_struct_database.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Allocates memory for multiple Student records,
 *   inputs data, displays it, and computes average grade.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define struct Student
struct Student {
  char name[50];
  int id;
  float grade;
};

int main(void) {
  int n;
  struct Student *students = NULL;
  float totalGrade = 0.0;

  printf("Enter number of students: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid number.\n");
    return 1;
  }

  // Allocate memory for n Student structs
  students = malloc(n * sizeof(struct Student));
  if (students == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // Read student data
  for (int i = 0; i < n; i++) {
    printf("\nEnter data for student %d:\n", i + 1);
    printf("  Name: ");
    scanf(" %[^\n]", students[i].name);  // read string with spaces
    printf("  ID: ");
    scanf("%d", &students[i].id);
    printf("  Grade: ");
    scanf("%f", &students[i].grade);

    totalGrade += students[i].grade;
  }

  // Display all student records
  printf("\nStudent Records:\n");
  printf("----------------------------\n");
  for (int i = 0; i < n; i++) {
    printf("Student %d:\n", i + 1);
    printf("  Name: %s\n", students[i].name);
    printf("  ID: %d\n", students[i].id);
    printf("  Grade: %.2f\n\n", students[i].grade);
  }

  // Compute and display average grade
  printf("Average grade of class: %.2f\n", totalGrade / n);

  // Free allocated memory
  free(students);

  return 0;
}
