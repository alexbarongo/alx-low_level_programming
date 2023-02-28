#include "main.h"
/**
* puts2 - function that prints every other character of a string,
*         starting with the first character, followed by a new line.
*
* @str: a pointer parameter
*/

void puts2(char *str)
{
while
(*str)
{
if
((*str % 2) == 0)
{
_putchar(*str);
}
str++;
}
_putchar('\n');
}
