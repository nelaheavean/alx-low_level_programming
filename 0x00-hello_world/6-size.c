#include <stdio.h>

/**
* main - using sizeof to dynamically determine the size of types char, int and float
*
* Return: Always 0.
*/
int main(void)
{
 int n;
 printf("Size of a char: %lu bytes\n", sizeof(char));
 printf("Size of an int: %lu bytes\n", sizeof(int));
 printf("Size of a long int: %lu bytes\n", sizeof(long int));
 printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
 printf("Size of a float: %lu bytes\n", sizeof(float));
 return (0);
}
