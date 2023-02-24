#include "main.h"
/**
*
*/

int _isupper(int c)
{
  int i, j, r;

  for (i = 'A'; i <= 'Z'; i++)
    {
      if (c == i)
      {
        r = 1;
      }
    }
  for (j = 'a'; j <= 'z'; j++)
    {
      if (c == j)
      {
        r = 0;
      }
    }
  return (r);
}

