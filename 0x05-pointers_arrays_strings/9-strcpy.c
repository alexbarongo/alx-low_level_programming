#include "main.h"
/**
*
*
*/

char *_strcpy(char *dest, char *src)
{
int a;
while (src[a])
{
dest[a] = src[a];
a++;
}
return (dest);
}
