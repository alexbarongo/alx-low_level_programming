#include "main.h"

/**
* leet - a function that encodes a string into 1337.
* @str: a sring array.
* Return: str in 1337.
*/

char *leet(char *str)
{
int i = 0, j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[i])
{
for (j = 0; j < 8; j++)
{
if (str[i] == leet[j] ||
str[i] - 32 == leet[j])
str[i] = j + '0';
}

i++;
}

return (str);
}
