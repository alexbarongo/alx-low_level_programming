#include "main.h"
/**
* print_rev -function that prints a string, in reverse, followed by a new line.
* @s: pointer parameter
*/

void print_rev(char *s)
{
int len = 0, indx;

while (s[indx++])
{
len++;
}
for
(indx = len - 1; indx >= 0; indx--)
{
_putchar(s[indx]);
}
_putchar('\n');
}
