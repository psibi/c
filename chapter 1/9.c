/* I find the question ambigous. I assuming that the question states
   that the all blanks except the first one needs to be ignored. */

#include <stdio.h>

main() 
{
  int c, blankCount;
  blankCount = 0;

  while ((c = getchar()) != EOF)
    {
      if (c == ' ') {
        if (blankCount == 0) {
          putchar(c);
          ++blankCount;
        }
      } else {
        putchar(c);
      }
      if (c == '\n') {
        /* Reinitialize blankcount after newline */
        blankCount = 0;
      }
    }
}
