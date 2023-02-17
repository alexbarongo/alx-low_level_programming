#include <stdio.h>

/**
* main - prints low caps a-z
* Return: 0
*/
int main(void)
{
char str;

for (str = 'a'; str <= 'z'; str++)
{
putchar (str);
}
putchar('\n');
return (0);
}
