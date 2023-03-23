#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - a function that prints anything.
* @format: A string of characters representing the argument types.
* @...: A variable number of arguments to be printed.
*/

void print_all(const char * const format, ...)
{
va_list ap;
char *s;
int i = 0;
char c;

va_start(ap, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(ap, int);
printf("%c", c);
break;
case 'i':
i = va_arg(ap, int);
printf("%d", i);
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
{
printf("(nil)");
return;
}
else{
printf("%s", s);
}
break;
}

if (format[i + 1])
printf(", ");

i++;
}

va_end(ap);

printf("\n");
}
