#include "main.h"
/**
* _isupper - returns 1 if c is upper case
* @c: parameter
* Return: 1 uppercase 0 lowercase
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

