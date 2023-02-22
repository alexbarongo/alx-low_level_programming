#include "main.h"
/**
* print_last_digit - function that prints the last digit of a number.
* @n: parameter
* Return: last number of n
*/

int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last *= -1;
return (last);
}
_putchar(last + '0');
return (last);
}
