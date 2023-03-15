#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that returns a pointer to a newly allocated space in
*           memory, which contains a copy of the string given as a parameter.
* @str: a string to be coppied.
* Return: A coppied string.
*/

char *_strdup(char *str)
{
char *arr;
int i, j = 0;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i]; i++)
{
j++;
}

arr = malloc(sizeof(char) * (j + 1));
if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < str[i]; i++)
{
arr[i] = str[i];
}
arr[j] = '\0';

return (arr);
}
