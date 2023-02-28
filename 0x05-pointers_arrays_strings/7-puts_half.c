#include "main.h"
/**
* puts_half - function that prints half of a string, followed by a new line.
* @str: a pointer parameter
*/

void puts_half(char *str)
{
int length, index, i;

length = 0;
index = 0;
while
(str[index++])
{
length++;
}
if
((length % 2) == 0)
{
i = length / 2;
}
else
{
i = (length + 1) / 2;
}
for (index = i; index <= length - 1; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
