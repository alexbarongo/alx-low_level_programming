#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - afunction that returns a sum of all its parameters
* @n: total number of parameters.
* @...: parameters.
*
* Return: the sum of all the parameters.
*/

int sum_them_all(const unsigned int n, ...)
{

va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);
if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);

return (sum);
}
