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
char *duplicate;
int index, len = 0;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (index = 0; str[index]; index++)
duplicate[index] = str[index];

duplicate[len] = '\0';

return (duplicate);
}
