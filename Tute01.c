/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int num1, num2;
  float avg;

  printf("Enter the mark 01 :");
  scanf("%d", &num01);
  printf("Enter the mark 02 :");
  scanf("%d", &num02);

  avg = (num01 + num02) / 2.0;

  printf("Average :%.2f", avg);
  
  return 0;
}

