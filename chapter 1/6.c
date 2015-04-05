#include <stdio.h>

void main() 
{
  int x;
  x = (getchar() != EOF);
  printf("%d\n", x);
}

/* How to run this program to verify the o/p:
Ctrl + D: For verifying zero
Any other valid input: For one */
