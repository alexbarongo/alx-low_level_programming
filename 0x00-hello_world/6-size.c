#include <stdio.h>

/**
* main - prints the size of various types
*Return: 0
*/

int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of an long int: %ld byte(s)\n", sizeof(long));
printf("Size of an long long int: %ld byte(s)\n", sizeof(long long));
printf("Size of an float: %ld byte(s)\n", sizeof(float));
return (0);
}
