#include "main.h"
/**
* _strcpy - function that copies the string pointed to by src,
*           including the terminating null byte (\0),
*            to the buffer pointed to by dest.
* @dest: parametr one
* @src: parameter
* Return: returns dest
*/

char *_strcpy(char *dest, char *src)
{
int a;

a = 0;
while (src[a])
{
dest[a] = src[a];
a++;
}
return (dest);
}
