/*
 * week4_2_struct_student.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Defines a 'Student' struct with fields like name, id, and grade.
 *   Then creates a few instances and prints them.
 */

#include <stdio.h>
#include <string.h>

// Define struct Student
struct Student {
  char name[50];
  int id;
  float grade;
};

int main(void) {
  // Declare two Student variables
  struct Student s1, s2;

  // Assign values manually
  strcpy(s1.name, "Alice");
  s1.id = 101;
  s1.grade = 89.5;

  strcpy(s2.name, "Bob");
  s2.id = 102;
  s2.grade = 76.8;

  // Print struct contents
  printf("Student 1:\n");
  printf("  Name: %s\n", s1.name);
  printf("  ID: %d\n", s1.id);
  printf("  Grade: %.2f\n\n", s1.grade);

  printf("Student 2:\n");
  printf("  Name: %s\n", s2.name);
  printf("  ID: %d\n", s2.id);
  printf("  Grade: %.2f\n", s2.grade);

  return 0;
}
