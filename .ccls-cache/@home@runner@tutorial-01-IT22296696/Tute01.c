/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() // main function begins
{

  float sub1, sub2, avg; // variable declaration

  printf("Enter marks for subject 01:"); // get user inputs
  scanf("%f", &sub1);

  printf("Enter marks for subject 02 :");
  scanf("%f", &sub2);

  avg = (sub1 + sub2) / 2.0; // calculate average

  printf("Average is : %.2f", avg); // print the average

  return 0;
} // end of the main function
