#include <stdio.h>
#include "main"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int x, y;

x = 0;
y = 0;

i = 0;
while (i < size)
{
x = x + *(a + i *size + i);
y = y + *(a + i *size + size - i - 1);

i++;
}

printf("%i, %i\n", x, y);

}
