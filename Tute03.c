/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() // main function begins
{
  int num, i, sum; // variable declaration

  sum = 0;

  printf("Enter a number :"); // get user inputs
  scanf("%d", &num);

  for (i = 0; i <= num; i++) {
    sum = sum + i;
  }

  printf("Sum : %d", sum); // print the total

  return 0;
} // end of the main function
