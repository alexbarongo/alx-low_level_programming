#include "main.h"
/**
* times_table - function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
  int n, m, prod;
  char c;

c = ',';
  for (n = 0; n <= 9; n++)
    {
      for (m = 0; m <= 9; m++)
        {
          prod = n * m;
          if (prod  <= 9)
          {
            _putchar(' ');
          }
        else {
          _putchar((prod / 10) + '0');
        }
          _putchar((prod % 10) + '0');
          _putchar(c);
          _putchar(' ');
      }
    _putchar('\n');
  }
}
