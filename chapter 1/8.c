#include <stdio.h>

void main() 
{

  int blanks, tabs, newline, c;
  blanks = 0;
  tabs = 0;
  newline = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++newline;
    if (c == ' ')
      ++blanks;
  }
  printf("Blanks: %d Tabs: %d Newlines: %d \n", blanks, tabs, newline);
}
