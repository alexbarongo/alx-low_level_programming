#include "main.h"
/**
* _islower - function that checks for lowercase character.
* Return: 1 (lowwer-caps/success)
* @c: paramaeter
*/

int _islower(int c)
{
int check;

if (c >= 'a' && c <= 'z')
{
check = 1;
}
else
{
check = 0;
}
return (check);
}
