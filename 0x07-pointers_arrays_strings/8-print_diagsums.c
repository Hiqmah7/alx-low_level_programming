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
const int M = N = 4;

int mat[M][N]
{
int principal = 0, secondary = 0;
for (int i = 0; i < N; i++)
{
principal += mat[i][i];
secondary += mat[i][N - i - 1];
}
printf("%s", "Principal Diagonal:");
printf("%d\n", principal);
printf("%s", "Secondary Diagonal:");
printf("%d\n", secondary);
}
return (0);
}
