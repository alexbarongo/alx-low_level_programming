#include "main.h"

/**
* _strncpy - function that copies a string.
* @dest: parameter that receives the copy.
* @src: parameter to copy to dest.
* @n: number of copies.
*
* Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;
while (src[i++])
{
j++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[i] = src[i];
}
for (i = j; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
