#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, followed by a new line.
*/

void print_alphabet_x10(void)
{
char str;
int i;

for (i = 0; i < 10; i++)
{
for (str = 'a'; str <= 'z'; str++)
{
_putchar(str);
}
_putchar('\n');
}
}




