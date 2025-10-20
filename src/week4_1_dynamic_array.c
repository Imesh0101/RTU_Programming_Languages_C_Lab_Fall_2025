/*
 * week4_1_dynamic_array.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Allocates memory for an integer array, fills it with data,
 *   computes the sum and average, and then frees the memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int *arr = NULL;
  int sum = 0;
  float average = 0.0;

  printf("Enter number of elements: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid size.\n");
    return 1;
  }

  // Allocate memory for n integers
  arr = malloc(n * sizeof(int));

  // Check if memory allocation succeeded
  if (arr == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // Read n integers from user input
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Compute sum
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  // Compute average
  average = (float)sum / n;

  // Print results
  printf("\nSum = %d\n", sum);
  printf("Average = %.2f\n", average);

  // Free allocated memory
  free(arr);

  return 0;
}
