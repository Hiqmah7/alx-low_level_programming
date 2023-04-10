#include <stdio.h>
#include <stdlib.h>

/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/
int main(int argc, char *argv[])
{
int a, b, x;
if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
x = a *b;
printf("%d\n", x);
return (0);
}
