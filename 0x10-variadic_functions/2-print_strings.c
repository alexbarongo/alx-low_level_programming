#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: a string separator between printed parametes.
* @n: number of strings to be printed.
* @...: A variable number of strings to be printed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;

va_start(ap, n);

for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");

va_end(ap);
}
