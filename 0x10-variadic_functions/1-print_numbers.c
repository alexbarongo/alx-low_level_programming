#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: a separator string after every number printed
* @n: number of variables to be print.
* @...: A variable number of integers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i, num;

va_start(ap, n);

for (i = 0; i < n; i++)
{
num = va_arg(ap, int);
if (separator == NULL)
{
printf("%d", num);
}
else
{
printf("%d%s", num, separator);
}
}
printf("\n");
va_end(ap);
}
