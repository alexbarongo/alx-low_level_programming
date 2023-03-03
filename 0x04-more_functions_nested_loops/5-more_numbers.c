#include "main.h"
/**
* more_numbers - function that prints 10 times the numbers,
*                from 0 to 14, followed by a new line.
*
*/

void more_numbers(void)
{
int i, a;
for (i = 0; i <= 10; i++)
  {
    for (a = 0; a <=  14; a++)
      {
        if (a <= 9)
        {
          _putchar(' ');
          _putchar((a % 10) + '0');
        }else {
          _putchar((a / 10) + '0');
        }
    } 
      _putchar('\n');
  }
}
