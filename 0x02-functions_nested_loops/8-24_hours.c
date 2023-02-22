#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer.
*/

void jack_bauer(void)
{
int hh, mm, h, m, a, b;
char c;

c = ':';
for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
hh = a / 10;
h = a % 10;
mm = b / 10;
m = b % 10;

_putchar(hh + '0');
_putchar(h + '0');
_putchar(c);
_putchar(mm + '0');
_putchar(m + '0');
_putchar('\n');
}
}
}
