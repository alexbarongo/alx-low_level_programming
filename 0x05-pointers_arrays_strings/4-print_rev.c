#include "main.h"
/**
* print_rev -function that prints a string, in reverse, followed by a new line.
* @s: pointer parameter
*/

void print_rev(char *s)
{ int leng, indx;
  
leng = 0;
while
(s[indx++])
{
leng++;
}
for (indx = leng - 1; indx >= 0; indx--)
{
_putchar(s[indx]);
}
_putchar('\n');
}
