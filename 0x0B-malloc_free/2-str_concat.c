#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that returns a string that cocncatnates one s2 to s1.
*
* @s1: string one
*@s2: string two
* Return: a new string that contains s1 and s2.
*/

char *str_concat(char *s1, char *s2)
{
int i, m, n;
char *arr;

m = 0;
n = 0;
if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

for (i = 0; s1[i] || s2[i]; i++)
{
m++;
}

arr = malloc(sizeof(char) + m);

for (i = 0; s1[i]; i++)
{
arr[n++] = s1[i];
}

for (i = 0; s2[i]; i++)
{
arr[n++] = s2[i];
}

return (arr);
}
