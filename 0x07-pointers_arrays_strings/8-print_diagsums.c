#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- sum diagonal values
 *
 * @a: pointer to array
 *
 * @size: int
 *
 *Return: sum of two sides
 *
 */

void print_diagsums(int *a, int size)
{
int a, b, x, y;

x = 0;
y = 0;

for (a = 0; a < size; a++)
{
x += a[(size + 1) * a];
}
for (b = 0; b < size; b++)
{
y += a[(size - 1) * (b + 1)];
}
printf("%d, %d\n", x, y);
}
