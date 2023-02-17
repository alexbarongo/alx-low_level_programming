#include <stdio.h>

/**
* main - print in reverse
* Return: 0
*/
int main(void)
{
char str = 'z';

while (str >= 'a')
{
putchar(str);
str--;
}
putchar('\n');
return (0);
}
