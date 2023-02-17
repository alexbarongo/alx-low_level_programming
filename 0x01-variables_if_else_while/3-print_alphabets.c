#include <stdio.h>
/**
* main - print alphabet
* Return: 0
*/

int main(void)
{
char strL, strC;

for (strL = 'a'; strL <= 'z'; strL++)
{
putchar(strL);
}
for (strC = 'A'; strC <= 'Z'; strC++)
{
putchar(strC);
}
putchar('\n');
return (0);
}
