#include <stdio.h>

/**
 * main - print size of data types
 *
 * Return: Always 0(sucessful)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float x;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(x));
return (0);
}
