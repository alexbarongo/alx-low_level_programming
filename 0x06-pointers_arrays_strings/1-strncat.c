#include "main.h"

/**
* _strncat - a function that concatenates two strings.
*             it will use at most n bytes from src; and src does not need to be
*             null-terminated if it contains n or more bytes
*
* @dest: a pointer to be concatenated to
* @src: a pointer to source to be appended to @dest.
* @n: number of bytes.
*
* Return:  a pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;

while (dest[i++])
{
j++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[j++] = src[i];
}

return (dest);
}
