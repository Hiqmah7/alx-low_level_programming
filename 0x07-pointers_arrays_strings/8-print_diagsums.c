#include <stdio.h>
#include <stdlib.h>
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
int principalsum, secondarysum;

principalsum = 0;
secondarysum = 0;

i = 0;
while (i < size)
{
principalsum = principalsum + *(a + i *size + i);
secondarysum = secondarysum + *(a + i *size + size - i - 1);
i++;
}
printf("%i, %i\n", principalsum, secondarysum);
}
