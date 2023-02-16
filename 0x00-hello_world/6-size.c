#include <stdio.h>

/**
* main - prints the size of various types
*Return: 0
*/

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of an long int: %zu byte(s)\n", sizeof(long));
printf("Size of an long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of an float: %zu byte(s)\n", sizeof(float));
return (0);
}
